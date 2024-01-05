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

const Note MERRY_CHRISTMAS_NOTES[] PROGMEM = {
  {"C5", 1}, {"F5", 1}, {"F5", 0.5}, {"G5", 0.5}, {"F5", 0.5}, {"E5", 0.5}, {"D5", 1}, {"D5", 1}, {"D5", 1},

  {"G5", 1}, {"G5", 0.5}, {"A5", 0.5}, {"G5", 0.5}, {"F5", 0.5}, {"E5", 1}, {"E5", 1}, {"E5", 1},
  {"A5", 1}, {"A5", 0.5}, {"B5", 0.5}, {"A5", 0.5}, {"G5", 0.5}, {"F5", 1}, {"D5", 1}, {"C5", 0.5}, {"C5", 0.5}, {"D5", 1}, {"G5", 1}, {"E5", 1}, {"F5", 2},

  {"C5", 1}, {"F5", 1}, {"F5", 1}, {"F5", 1}, {"E5", 1},
  {"E5", 1}, {"F5", 1}, {"E5", 1}, {"D5", 1}, {"C5", 1},

  {"G5", 1}, {"A5", 1}, {"G5", 0.5}, {"G5", 0.5}, {"F5", 0.5}, {"F5", 0.5}, {"C6", 1}, {"C5", 1},
  {"C5", 0.5}, {"C5", 0.5}, {"D5", 1}, {"G5", 1}, {"E5", 1}, {"F5", 1},
  {" ", 1}
};

const Melody MERRY_CHRISTMAS PROGMEM = {
  tempo: 400,
  length: lengthOfNotes(MERRY_CHRISTMAS_NOTES),
  octaveShift: 0,
  notes: MERRY_CHRISTMAS_NOTES
};
