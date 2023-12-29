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

int speaker_pin = 8;
int blink_duration = 100; // LED off state duration in ms, 80-120

/**
 * Play the tone that corresponds to the note name.
 * 
 * @param note - note in letters notation
 * @param duration - play duration in ms
 */
void playNote(String note, int duration) {  
  for (int i = 0; i < note_scale_len; i++) {
    if (note_names[i] == note) {
      tone(speaker_pin, note_tones[i], duration);
      break;
    }
  }
}

void blink() {
  digitalWrite(LED_BUILTIN, LOW);
  delay(blink_duration);
  digitalWrite(LED_BUILTIN, HIGH);
}

void setup() {
  pinMode(speaker_pin, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {  
  digitalWrite(LED_BUILTIN, HIGH);
  for (int i = 0; i < melody_len; i++) {
    String note = melody_notes[i];
    int note_duration = melody_beats[i] * tempo;
    if (note == " ") { // rest
      delay(note_duration);
    } else {     
      playNote(note, note_duration);
      blink();
    }
    delay(note_duration - blink_duration); // wait for the note to finish playing
  }
}
