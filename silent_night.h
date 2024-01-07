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

const Note SILENT_NIGHT_NOTES[] PROGMEM = {
  {"C4", 1.5}, {"D4", 0.5}, {"C4", 1}, {"A3", 3},
  {"C4", 1.5}, {"D4", 0.5}, {"C4", 1}, {"A3", 3},
  {"G4", 2}, {"G4", 1}, {"E4", 3},
  {"F4", 2}, {"F4", 1}, {"C4", 3},

  {"D4", 2}, {"D4", 1}, {"F4", 1.5},
  {"E4", 0.5}, {"D4", 1}, {"C4", 1.5},
  {"D4", 0.5}, {"C4", 1}, {"A3", 3},

  {"D4", 2}, {"D4", 1}, {"F4", 1.5},
  {"E4", 0.5}, {"D4", 1}, {"C4", 1.5},
  {"D4", 0.5}, {"C4", 1}, {"A3", 3},

  {"G4", 2}, {"G4", 1}, {"A#4", 1.5},
  {"G4", 0.5}, {"E4", 1}, {"F4", 3},
  {"A4", 3},
  {"F4", 1}, {"C4", 1}, {"A3", 1}, {"C4", 1.5},
  {"A#3", 0.5}, {"G3", 1}, {"F3", 3},
  {"A3", 3},

  {" ", 3}
};

const Melody SILENT_NIGHT PROGMEM = {
  tempo: 500,
  length: lengthOfNotes(SILENT_NIGHT_NOTES),
  octaveShift: 1,
  notes: SILENT_NIGHT_NOTES
};
