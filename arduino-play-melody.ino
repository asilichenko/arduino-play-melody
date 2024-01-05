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

#include "note_scale.h"

//
// Melodies:
//
#include "jingle_bells.h"
#include "merry_christmas.h"
#include "elise.h"
#include "silent_night.h"

const int SPEAKER_PIN = 8;
const int LED_PIN = 9; // 13 is digital only

const int PAUSE_BETWEEN_NOTES = 10; // in ms
const int PAUSE_BETWEEN_MELODIES = 500; // in ms

/*
 * Shift the tone of the octave
 * 
 *  1 - no shift
 * -2 - shift one octave down
 *  2 - shift one octave up
 */
const int OCTAVE_SHIFT = 2;

/**
 * LED blink state duration in ms, 80-120
 */
const int BLINK_DURATION = 100;
/**
 * LED brightness in blink state: [0-255]
 */
const float LED_LOW_BRIGHTNESS = HIGH * 0;

boolean isMute = false;

const Melody *MELODIES[] = {
  &JINGLE_BELLS,
  &MERRY_CHRISTMAS,
  &FUR_ELISE,
  &SILENT_NIGHT,
};

int melodiesCounter = 0;

/**
 * Play the tone that corresponds to the note name.
 * 
 * @param note - note in letters notation, like "C4", "C#4"
 * @param octaveShift - shift octave for playing tone:
 *                      0.5 - one octave down
 *                      1 - no shift
 *                      2 - one octave up
 * @param duration - play duration in ms
 */
void playNote(const char* note, float octaveShift, int duration) {
  for (int i = 0; i < NOTE_SCALE_LEN; i++) {
    if (strcmp(NOTE_NAMES[i], note) == 0) {
      const int noteTone = NOTE_TONES[i] * octaveShift;
      tone(SPEAKER_PIN, noteTone, duration);
      break;
    }
  }
}

void blink() {
  analogWrite(LED_PIN, LED_LOW_BRIGHTNESS);
  delay(BLINK_DURATION);
  digitalWrite(LED_PIN, HIGH);
}

void setup() {
  pinMode(SPEAKER_PIN, OUTPUT);
  pinMode(LED_PIN, OUTPUT);
}

Melody nextMelody() {
  const int melodiesLength = sizeof(MELODIES) / sizeof(Melody*);
  const Melody* melody = MELODIES[melodiesCounter];
  melodiesCounter = ++melodiesCounter % melodiesLength;

  Melody retval;
  memcpy_P(&retval, melody, sizeof(Melody));
  return retval;
}

void loop() {
  digitalWrite(LED_PIN, HIGH);

  const Melody melody = nextMelody();

  Note notes[melody.length];
  memcpy_P(&notes, melody.notes, melody.length * sizeof(Note));
    
  const float octaveShift = pow(2, melody.octaveShift);
    
  for (int j = 0; j < melody.length; j++) {
    const Note note = notes[j];
    const char* noteName = note.name;
    const int noteDuration = note.beat * melody.tempo;

    if (noteName == " ") { // rest
      delay(noteDuration);
    } else {
      if (!isMute) playNote(noteName, octaveShift, noteDuration);
      blink();
      delay(noteDuration - BLINK_DURATION); // wait for the note to finish playing
    }
    delay(PAUSE_BETWEEN_NOTES);
  }
  delay(PAUSE_BETWEEN_MELODIES);
}
