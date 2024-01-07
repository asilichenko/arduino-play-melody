/*
MIT License

Copyright (c) 2024 Oleksii Sylichenko

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
 */

#include "note_freq_calculator.h"

/**
 * Parse octave and tone values from the note name.
 */
void parseNote(const char* note, int &octave, int &pitch) {
  const int noteLength = strlen(note);

  for(int i = 0; i < TONE_NAMES_LENGTH; i++) {
    char* TONE_NAME = TONE_NAMES[i];

    if (note[0] != TONE_NAME[0]) continue;
    
    int octaveIndex = -1;
    if (noteLength == 3) { // sharp-note, C#4
      if (strlen(TONE_NAME) == 1 || note[1] != TONE_NAME[1]) continue;
      octaveIndex = 2;
    } else { // normal note, C4
      octaveIndex = 1;
    }
    
    pitch = i + 1;
    octave = note[octaveIndex] - '0';
    break;
  }
}

/*
 * https://pages.mtu.edu/~suits/notefreqs.html
 */
int freqOf(const char* note) {
  int noteOctave = -1, noteTone = -1, retval = 0;
  parseNote(note, noteOctave, noteTone);

  if (noteOctave >= 0 && noteTone > 0) {
    int octaveDelta = noteOctave - BASE_OCTAVE;
    int toneDelta = noteTone - BASE_TONE;
    float delta = octaveDelta * TONE_NAMES_LENGTH + toneDelta;
    retval = round(BASE_FREQ * pow(2, delta / 12));
  }

  return retval;
}
