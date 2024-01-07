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

#pragma once
#include <Arduino.h>

/*
 * Base note to calculate frequency for other notes.
 * 
 * A4 = 440 Hz
 * 
 * @see https://en.wikipedia.org/wiki/A440_(pitch_standard)
 */
static const int BASE_OCTAVE = 4;
static const int BASE_TONE = 10;
static const int BASE_FREQ = 440;

static const int TONE_NAMES_LENGTH = 12;
static const char* TONE_NAMES[TONE_NAMES_LENGTH] = {
  "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "A#", "B"
};

/*
 * Calculate note frequency for name.
 * 
 * f(n) = f(base) * 2 ^ (delta / 12);
 * 
 * @see https://pages.mtu.edu/~suits/notefreqs.html
 */
int freqOf(const char* note);
