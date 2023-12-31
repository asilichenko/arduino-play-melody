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

#pragma once
#define lengthOfNotes(notes) (sizeof(notes) / sizeof(Note))

struct Note {
  /**
   * Note name in letter notation, like "C4", "C#4"
   */
  char* name;
  /**
   * Duration in beats:
   * 
   * 0.5 - Eighth note, ♪
   *   1 - Quarter note, ♩
   * 1.5 - Quarter dotted note, ♩•
   *   2 - Half note
   *   3 - Half dotted note
   *   4 - Whole note
   */
  float beat;
};

struct Melody {
  /**
   * Duration of one beat in ms
   */
  int tempo;
  /**
   * Number of notes
   */
  int length;
  /**
   * Octave shift of played notes:
   * 
   * -1 - one octave down
   *  0 - no shift
   *  1 - one octave up
   */
  int octaveShift;
  Note *notes;
};
