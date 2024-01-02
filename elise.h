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

const int TEMPO = 700; // 1 beat buration in ms
const int MELODY_LEN = 9+8+10+8+1;

const String MELODY_NOTES[MELODY_LEN] = {
  "E5", "D#5", "E5", "D#5",
  "E5", "B4", "D5", "C5", "A4",
   
  "C4", "E4", "A4", "B4",
  "E4", "G#4", "B4", "C5",
  
  "E4",
  "E5", "D#5", "E5", "D#5",
  "E5", "B4", "D5", "C5", "A4",

  "C4", "E4", "A4", "B4",
  "E4", "C5", "B4", "A4",
  
  " "
};

const float MELODY_BEATS[MELODY_LEN] = {
  0.5, 0.5, 0.5, 0.5, 
  0.5, 0.5, 0.5, 0.5, 1.5,
  
  0.5, 0.5, 0.5, 1.5,
  0.5, 0.5, 0.5, 1.5,

  0.5,
  0.5, 0.5, 0.5, 0.5,
  0.5, 0.5, 0.5, 0.5, 1.5,

  0.5, 0.5, 0.5, 1.5,
  0.5, 0.5, 0.5, 2,
  
  1
};
