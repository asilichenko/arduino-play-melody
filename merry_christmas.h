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

int melody_len = 54;

String melody_notes[] = {
  "C5", "F5", "F5", "G5", "F5", "E5", "D5", "D5", "D5",
  "G5", "G5", "A5", "G5", "F5", "E5", "E5", "E5",
  "A5", "A5", "B5", "A5", "G5", "F5", "D5", "C5", "C5", "D5", "G5", "E5", "F5",
  "C5", "F5", "F5", "F5", "E5",
  "E5", "F5", "E5", "D5", "C5",
  "G5", "A5", "G5", "G5", "F5", "F5", "C6", "C5",
  "C5", "C5", "D5", "G5", "E5", "F5"
};

float melody_beats[] = {
  1, 1, 0.5, 0.5, 0.5, 0.5, 1, 1, 1,
  1, 0.5, 0.5, 0.5, 0.5, 1, 1, 1,
  1, 0.5, 0.5, 0.5, 0.5, 1, 1, 0.5, 0.5, 1, 1, 1, 2,
  1, 1, 1, 1, 1,
  1, 1, 1, 1, 1,
  1, 1, 0.5, 0.5, 0.5, 0.5, 1, 1,
  0.5, 0.5, 1, 1, 1, 1
};
