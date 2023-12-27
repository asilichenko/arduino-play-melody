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

int melody_len = 90;

String melody_notes[] = {
  "E5", "C#6", "B5", "A5", "E5",
  "E5", "C#6", "B5", "A5", "F#5",
  "F#5", "D6", "C#6", "B5", "G#5",
  "E6", "F#6", "E6", "D6", "B5", "C#6",
  "E5", "C#6", "B5", "A5", "E5",
  "E5", "C#6", "B5", "A5", "F#5",
  "F#5", "D6", "C#6", "B5", "E6", "E6", "E6",
  "F#6", "E6", "D6", "B5", "A5",
  "C#6", "C#6", "C#6",
  "C#6", "C#6", "C#6",
  "C#6", "E6", "A5", "B5", "C#6",
  "D6", "D6", "D6", "D6",
  "D6", "C#6", "C#6",
  "C#6", "B5", "B5", "C#6", "B5", "E6",
  "C#6", "C#6", "C#6",
  "C#6", "C#6", "C#6",
  "C#6", "E6", "A5", "B5", "C#6",
  "D6", "D6", "D6",
  "D6", "C#6", "C#6", "C#6",
  "E6", "E6", "D6", "B5", "A5"
};

float melody_beats[] = {
  1, 1, 1, 1, 4,
  1, 1, 1, 1, 4,
  1, 1, 1, 1, 3,
  1, 1, 1, 1, 1, 4,
  1, 1, 1, 1, 4,
  1, 1, 1, 1, 4,
  1, 1, 1, 1, 1, 1, 2,
  1, 1, 1, 1, 4,
  1, 1, 2,
  1, 1, 2,
  1, 1, 1.5, 0.5, 4,
  1, 1, 1.5, 0.5,
  1, 1, 2,
  1, 1, 1, 1, 2, 2,
  1, 1, 2,
  1, 1, 2,
  1, 1, 1.5, 0.5, 4,
  1, 1, 2,
  1, 1, 1.5, 0.5,
  1, 1, 1, 1, 4
};
