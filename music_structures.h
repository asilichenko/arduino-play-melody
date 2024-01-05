/*
MIT License

Copyright (c) 2023-2024 Oleksii Sylichenko

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

#ifndef MUSIC_STRUCTURES_H
#define MUSIC_STRUCTURES_H
#define lengthOfNotes(notes) (sizeof(notes) / sizeof(Note))

const int NOTE_SCALE_LEN = 4*12;//9+8;

const char* NOTE_NAMES[NOTE_SCALE_LEN] = {
  // Octave 3:
  "C3", "C#3", "D3", "D#3", "E3", "F3", "F#3", "G3", "G#3", "A3", "A#3", "B3",
  // Octave 4:
  "C4", "C#4", "D4", "D#4", "E4", "F4", "F#4", "G4", "G#4", "A4", "A#4", "B4",
  // Octave 5:
  "C5", "C#5", "D5", "D#5", "E5", "F5", "F#5", "G5", "G#5", "A5", "A#5", "B5",
  // Octave 6:
  "C6", "C#6", "D6", "D#6", "E6", "F6", "F#6", "G6", "G#6", "A6", "A#6", "B6",

//  "E5", "F#5", "G#5", "A5", "B5", "C#6", "D6", "E6", "F#6", // jingle bells
//  "C5", "D5", "E5", "F5", "G5", "A5", "B5", "C6", // merry christmas
};

/*
 * Tone frequencies based on A440 standard pitch.
 * 
 * @see https://en.wikipedia.org/wiki/A440_(pitch_standard)
 * @see https://pages.mtu.edu/~suits/notefreqs.html
 */
const int NOTE_TONES[NOTE_SCALE_LEN] = {
  // Octave 3:
  130.81, 138.59, 146.83, 155.56, 164.81, 174.61, 185.00, 196.00, 207.65, 220.00, 233.08, 246.94,
  // Octave 4:
  261.63, 277.18, 293.66, 311.13, 329.63, 349.23, 369.99, 392.00, 415.30, 440.00, 466.16, 493.88,
  // Octave 5:
  523.25, 554.37, 587.33, 622.25, 659.25, 698.46, 739.99, 783.99, 830.61, 880.00, 932.33, 987.77,
  // Octave 6:
  1046.50, 1108.73, 1174.66, 1244.51, 1318.51, 1396.91, 1479.98, 1567.98, 1661.22, 1760.00, 1864.66, 1975.53,
  
//  659.25, 739.99, 830.61, 880.00, 987.77, 1108.73, 1174.66, 1318.51, 1479.98, // jingle bells
//  523.25, 587.33, 659.25, 698.46, 783.99, 880.00, 987.77, 1046.50, // merry christmas
};

struct Note {
  /**
   * Note name in letter notation, like "C4", "C#4"
   */
  char* name;
  /**
   * Duration in beats:
   * 
   * 0.5 - Eighth note, ♪
   *   1 - Quarter note, ♩
   * 1.5 - Quarter dotted note, ♩•
   *   2 - Half note
   *   3 - Half dotted note
   *   4 - Whole note
   */
  float beat;
};

struct Melody {
  /**
   * Duration of one beat in ms
   */
  int tempo;
  /**
   * Number of notes
   */
  int length;
  /**
   * Octave shift of played notes:
   * 
   * -1 - one octave down
   *  0 - no shift
   *  1 - one octave up
   */
  int octaveShift;
  Note *notes;
};
#endif  // MUSIC_STRUCTURES_H