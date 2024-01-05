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

const Note FUR_ELISE_NOTES[] PROGMEM = {
  {"E5", 0.5}, {"D#5", 0.5}, {"E5", 0.5}, {"D#5", 0.5},
  {"E5", 0.5}, {"B4", 0.5}, {"D5", 0.5}, {"C5", 0.5}, {"A4", 1.5},

  {"C4", 0.5}, {"E4", 0.5}, {"A4", 0.5}, {"B4", 1.5},
  {"E4", 0.5}, {"G#4", 0.5}, {"B4", 0.5}, {"C5", 1.5},

  {"E4", 0.5},
  {"E5", 0.5}, {"D#5", 0.5}, {"E5", 0.5}, {"D#5", 0.5},
  {"E5", 0.5}, {"B4", 0.5}, {"D5", 0.5}, {"C5", 0.5}, {"A4", 1.5},

  {"C4", 0.5}, {"E4", 0.5}, {"A4", 0.5}, {"B4", 1.5},
  {"E4", 0.5}, {"C5", 0.5}, {"B4", 0.5}, {"A4", 2},

  {" ", 1}
};

const Melody FUR_ELISE PROGMEM = {
  tempo: 700,
  length: lengthOfNotes(FUR_ELISE_NOTES),
  octaveShift: 1,
  notes: FUR_ELISE_NOTES
};
