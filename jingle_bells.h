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

const Note JINGLE_BELLS_NOTES[] PROGMEM = {
  {"E5", 1}, {"C#6", 1}, {"B5", 1}, {"A5", 1}, {"E5", 4},
  {"E5", 1}, {"C#6", 1}, {"B5", 1}, {"A5", 1}, {"F#5", 4},
  {"F#5", 1}, {"D6", 1}, {"C#6", 1}, {"B5", 1}, {"G#5", 3},
  {"E6", 1}, {"F#6", 1}, {"E6", 1}, {"D6", 1}, {"B5", 1}, {"C#6", 4},
  {"E5", 1}, {"C#6", 1}, {"B5", 1}, {"A5", 1}, {"E5", 4},
  {"E5", 1}, {"C#6", 1}, {"B5", 1}, {"A5", 1}, {"F#5", 4},
  {"F#5", 1}, {"D6", 1}, {"C#6", 1}, {"B5", 1}, {"E6", 1}, {"E6", 1}, {"E6", 2},
  {"F#6", 1}, {"E6", 1}, {"D6", 1}, {"B5", 1}, {"A5", 4},
  {"C#6", 1}, {"C#6", 1}, {"C#6", 2},
  {"C#6", 1}, {"C#6", 1}, {"C#6", 2},
  {"C#6", 1}, {"E6", 1}, {"A5", 1.5}, {"B5", 0.5}, {"C#6", 4},
  {"D6", 1}, {"D6", 1}, {"D6", 1.5}, {"D6", 0.5},
  {"D6", 1}, {"C#6", 1}, {"C#6", 2},
  {"C#6", 1}, {"B5", 1}, {"B5", 1}, {"C#6", 1}, {"B5", 2}, {"E6", 2},
  {"C#6", 1}, {"C#6", 1}, {"C#6", 2},
  {"C#6", 1}, {"C#6", 1}, {"C#6", 2},
  {"C#6", 1}, {"E6", 1}, {"A5", 1.5}, {"B5", 0.5}, {"C#6", 4},
  {"D6", 1}, {"D6", 1}, {"D6", 2},
  {"D6", 1}, {"C#6", 1}, {"C#6", 1.5}, {"C#6", 0.5},
  {"E6", 1}, {"E6", 1}, {"D6", 1}, {"B5", 1}, {"A5", 4}
};

const Melody JINGLE_BELLS PROGMEM = {
  tempo: 300,
  length: lengthOfNotes(JINGLE_BELLS_NOTES),
  octaveShift: 0,
  notes: JINGLE_BELLS_NOTES
};
