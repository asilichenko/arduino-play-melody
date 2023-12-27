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

int note_scale_len = 9;

String note_names[] = {
  "E5", "F#5", "G#5", "A5", "B5", "C#6", "D6", "E6", "F#6"
};

/*
 * Tone frequencies based on A440 standard pitch.
 * 
 * @see https://en.wikipedia.org/wiki/A440_(pitch_standard)
 * @see https://pages.mtu.edu/~suits/notefreqs.html
 */
float note_tones[] = {
  659.25, 739.99, 830.61, 880.00, 987.77, 1108.73, 1174.66, 1318.51, 1479.98
};
