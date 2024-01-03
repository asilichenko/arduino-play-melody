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

const int TEMPO = 500; // 1 beat buration in ms
const int MELODY_LEN = 48;

// Scale: "F3", "G3", "A3", "A#3", "C4", "D4", "E4", "F4", "G4", "A4", "A#4"

const String MELODY_NOTES[MELODY_LEN] = {
  "C4", "D4", "C4", "A3",
  "C4", "D4", "C4", "A3",
  "G4", "G4", "E4",
  "F4", "F4", "C4",
  
  "D4", "D4", "F4",
  "E4", "D4", "C4",
  "D4", "C4", "A3",

  "D4", "D4", "F4",
  "E4", "D4", "C4",
  "D4", "C4", "A3",
  
  "G4", "G4", "A#4",
  "G4", "E4", "F4",
  "A4",
  "F4", "C4", "A3", "C4",
  "A#3", "G3", "F3",
  "A3",

  " "
};

const float MELODY_BEATS[MELODY_LEN] = {
  1.5, 0.5, 1, 3,
  1.5, 0.5, 1, 3,
  2, 1, 3,
  2, 1, 3,
  
  2, 1, 1.5,
  0.5, 1, 1.5,
  0.5, 1, 3,
  
  2, 1, 1.5,
  0.5, 1, 1.5,
  0.5, 1, 3,
  
  2, 1, 1.5,
  0.5, 1, 3,
  3,
  1, 1, 1, 1.5,
  0.5, 1, 3,
  3,

  3
};
