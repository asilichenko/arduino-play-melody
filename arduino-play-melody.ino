/*
MIT License

Copyright (c) 2023 Oleksii Sylichenko

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
//#include "merry_christmas.h"

const int SPEAKER_PIN = 8;
const int LED_PIN = 9; // 13 is digital only

const int PAUSE_BETWEEN_NOTES = 10; // in ms

/**
 * LED blink state duration in ms, 80-120
 */
const int BLINK_DURATION = 100;
/**
 * LED brightness in blink state: [0-255]
 */
const float LED_LOW_BRIGHTNESS = HIGH * 0;

/**
 * Play the tone that corresponds to the note name.
 * 
 * @param note - note in letters notation
 * @param duration - play duration in ms
 */
void playNote(String note, int duration) {
  for (int i = 0; i < NOTE_SCALE_LEN; i++) {
    if (NOTE_NAMES[i] == note) {
      tone(SPEAKER_PIN, NOTE_TONES[i], duration);
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

void loop() {
  digitalWrite(LED_PIN, HIGH);
  
  for (int i = 0; i < MELODY_LEN; i++) {
    const String note = MELODY_NOTES[i];
    const int note_duration = MELODY_BEATS[i] * TEMPO;
    if (note == " ") {
      // rest
    } else {     
      playNote(note, note_duration);
      blink();
    }
    delay(note_duration - BLINK_DURATION); // wait for the note to finish playing
    delay(PAUSE_BETWEEN_NOTES);
  }
}
