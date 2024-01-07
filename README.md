# Play a melody on the Arduino and blink the LED to the beat

Simple Arduino project to play a melody using notes and blink an LED to the tune of the melody.

Could be used to play melody and blink the Christmas lights.

### Algorythm:

1. Turn on the LED
2. For each note in the melody do:
   1. Get the note name
   2. Get beat for the note
   3. Calculate note playing duration = number of beats multiply by `Melody.tempo` (duration of one beat, defined for each melody)
   4. Get note frequency by its name from the [music_structures.h](music_structures.h)
   5. Play the tone async, `playNote()`
   6. Blink by the LED, `blink()`:
      - Turn off (or fade down), 
      - Delay milis of `BLINK_DURATION`
      - Turn on
   7. Delay until playing note is finished
   8. Delay for a tiny gap between notes to make melody more intence, `PAUSE_BETWEEN_NOTES`
  
> [!NOTE]
> If you want to fade out and fade in the light using the `analogWrite` function, do not use pin 13 (`LED_BUILTIN`) because it is digital-only.

### Memory optimization

To load multiple melodies with defined notes, their definitions are placed in PROGMEM structures. This approach stores data in Arduino flash memory, preventing excessive RAM usage.

To retrieve data from flash memory:

```
Note notes[melody.length];
memcpy_P(&notes, melody.notes, melody.length * sizeof(Note));
```

### Define new melody

1. create h-file for the melody
2. include it into [arduino-play-melody.ino](arduino-play-melody.ino)
3. Define notes in the [Letter notation](https://en.wikipedia.org/wiki/Scientific_pitch_notation):
```
const Note NEW_MELODY_NOTES[] PROGMEM = {
  {"C4", 1},
};
```
where 
- `C4` - name of the note is C in the 4th octave.
- `1` - is float number of beats for the note.

4. Define melody data:
```
const Melody NEW_MELODY PROGMEM = {
  tempo: 300,
  length: lengthOfNotes(NEW_MELODY_NOTES),
  octaveShift: 0,
  notes: NEW_MELODY_NOTES
};
```
where:
- `tempo` - duration of one beat in ms
- `length` - number of notes in the notes array
- `octaveShift` - octave shift of played notes:
  - -1 - one octave down
  -  0 - no shift
  -  1 - one octave up
 
5. Add melody into the `MELODIES` array in the [arduino-play-melody.ino](arduino-play-melody.ino)

```
const Melody *MELODIES[] = {
  ...,
  &NEW_MELODY,
};
```

### Notes Scale

Notes in the [music_structures.h](music_structures.h) are defined in [Letter notation](https://en.wikipedia.org/wiki/Scientific_pitch_notation).

Tones of the notes are defined by the [A440 standard](https://en.wikipedia.org/wiki/A440_(pitch_standard)):
> A440 (also known as Stuttgart pitch) is the musical pitch corresponding to an audio frequency of 440 Hz, which serves as a tuning standard for the musical note of A above middle C, or A4 in scientific pitch notation.

Frequencies for equal-tempered scale, A4 = 440 Hz: 
- [https://pages.mtu.edu/~suits/notefreqs.html](https://pages.mtu.edu/~suits/notefreqs.html)

<img src="https://github.com/asilichenko/arduino-play-melody/assets/1503214/4437a882-584d-45e9-9a2a-d0e0ab6a7987" width="450"/>

### Notes calculation

The frequency of any note can be calculated based on the reference note.

Algorythm is implemented in the [note_freq_calculator.cpp](note_freq_calculator.cpp).

For example, according to standard A4 = 440:

* base note, `base` = A4
* base note frequency, `f(base)` = 440

```
f(n) = f(base) * 2 ^ (delta / 12);

C  C# D  D# E  F  F# G  G#  A  A#  B
1  2  3  4  5  6  7  8  9  10  11  12

delta = n - base = (O * 12 + n) - (4 * 12 + 10);
```

* `O` - octave number;
* `n` - tone number in the octave;
* `4` - base octave number;
* `12` - number of tones in the octave;
* `10` - base tone number in its octave;

```
C4 - A4 = (4 * 12 + 1) - (4 * 12 + 10) = -9;
f(C4) = 440 * 2 ^ (-9 / 12) = 439.41;

B4 - A4 = (4 * 12 + 12) - (4 * 12 + 10) = 2;
f(B4) = 440 * 2 ^ (2 / 12) = 493.88;

A3 - A4 = (3 * 12 + 10) - (3 * 12 + 10) = -12;
f(A3) = 440 * 2 ^ (-12 / 12) = 220;

A5 - A4 = (5 * 12 + 10) - (3 * 12 + 10) = 12;
f(A3) = 440 * 2 ^ (12 / 12) = 880;
```

## External load connection

<img src="https://github.com/asilichenko/arduino-play-melody/assets/1503214/284d2e7b-ebbc-4c12-b4ad-7fa12ce25c2d" width="300"/>

## Jingle Bells

Melody is defined in the [jingle_bells.h](jingle_bells.h).

### How does this melody sound on the piano:

[<img src="https://i.ytimg.com/vi/i0uPkqiJtPo/maxresdefault.jpg" style="width:300px;">](https://www.youtube.com/watch?v=i0uPkqiJtPo "Jingle Bells Melody Piano")

### Notes:
```
E5 C#6 B5 A5 E5
E5 C#6 B5 A5 F#5
F#5 D6 C#6 B5 G#5
E6 F#6 E6 D6 B5 C#6
E5 C#6 B5 A5 E5
E5 C#6 B5 A5 F#5
F#5 D6 C#6 B5 E6 E6 E6
F#6 E6 D6 B5 A5
C#6 C#6 C#6
C#6 C#6 C#6
C#6 E6 A5 B5 C#6
D6 D6 D6 D6
D6 C#6 C#6
C#6 B5 B5 C#6 B5 E6
C#6 C#6 C#6
C#6 C#6 C#6
C#6 E6 A5 B5 C#6
D6 D6 D6
D6 C#6 C#6 C#6
E6 E6 D6 B5 A5
```

### How does this melody looks on the Christmas Lights:

[<img src="https://i.ytimg.com/vi/DfsxTG0Lw90/maxresdefault.jpg" style="width:300px;">](https://www.youtube.com/shorts/DfsxTG0Lw90 "Jingle Bells Christmas Lights")

## We wish you a Merry Christmas

Melody is defined in the [merry_christmas.h](merry_christmas.h).

### Notes:

```
C5 F5 F5 G5 F5 E5 D5 D5 D5
G5 G5 A5 G5 F5 E5 E5 E5
A5 A5 B5 A5 G5 F5 D5 C5 C5 D5 G5 E5 F5
C5 F5 F5 F5 E5
E5 F5 E5 D5 C5
G5 A5 G5 G5 F5 F5 C6 C5
C5 C5 D5 G5 E5 F5
```

### How does this melody looks on the Christmas Lights:

[<img src="https://i.ytimg.com/vi/zpfFC2_fZ3E/maxresdefault.jpg" style="width:300px;">](https://www.youtube.com/shorts/zpfFC2_fZ3E "We Wish You a Merry Christmas on Christmas Lights")

# Für Elise

Melody is defined in the [elise.h](elise.h).

### Notes:

<img src="https://github.com/asilichenko/arduino-play-melody/assets/1503214/ba4da535-b861-470f-a97d-93f8d3645a4a" width="300"/>

| E5 | D#5 | E5 | D#5 |
| - | - | - | - |
| 0.5 | 0.5 | 0.5 | 0.5 |

| E5 | B4 | D5 | C5 | A4 |
| - | - | - | - | - |
| 0.5 | 0.5 | 0.5 | 0.5 | 1.5 |

| C4 | E4 | A4 | B4 |
| - | - | - | - |
| 0.5 | 0.5 | 0.5 | 1.5 |

| E4 | G#4 | B4 | C5 |
| - | - | - | - |
| 0.5 | 0.5 | 0.5 | 1.5 |

| E4 |
| - |
| 0.5 |

| E5 | D#5 | E5 | D#5 |
| - | - | - | - |
| 0.5 | 0.5 | 0.5 | 0.5 |

| E5 | B4 | D5 | C5 | A4 |
| - | - | - | - | - |
| 0.5 | 0.5 | 0.5 | 0.5 | 1.5 |

| C4 | E4 | A4 | B4 |
| - | - | - | - |
| 0.5 | 0.5 | 0.5 | 1.5 |

| E4 | C5 | B4 | A4 |
| - | - | - | - |
| 0.5 | 0.5 | 0.5 | 2 |

## Silent Night

Notes: [silent_night.h](silent_night.h)

<img src="https://github.com/asilichenko/arduino-play-melody/assets/1503214/a825e25b-3c16-405a-aeb2-dabb10dcf45a" width="300"/>

| C4 | D4 | C4 | A3 |
| - | - | - | - |
| 1.5 | 0.5 | 1 | 3 |

| C4 | D4 | C4 | A3 |
| - | - | - | - |
| 1.5 | 0.5 | 1 | 3 |

| G4 | G4 | E4 |
| - | - | - |
| 2 | 1 | 3 |

| F4 | F4 | C4 |
| - | - | - |
| 2 | 1 | 3 |

| D4 | D4 | F4 |
| - | - | - |
| 2 | 1 | 1.5 |

| E4 | D4 | C4 |
| - | - | - |
| 0.5 | 1 | 1.5 |

| D4 | C4 | A3 |
| - | - | - |
| 0.5 | 1 | 3 |

| D4 | D4 | F4 |
| - | - | - |
| 2 | 1 | 1.5 |

| E4 | D4 | C4 |
| - | - | - |
| 0.5 | 1 | 1.5 |

| D4 | C4 | A3 |
| - | - | - |
| 0.5 | 1 | 3 |

| G4 | G4 | A#4 |
| - | - | - |
| 2 | 1 | 1.5 |

| G4 | E4 | F4 |
| - | - | - |
| 0.5 | 1 | 3 |

| A4 |
| - |
| 3 |

| F4 | C4 | A3 | C4 |
| - | - | - | - |
| 1 | 1 | 1 | 1.5 |

| A#3 | G3 | F3 |
| - | - | - |
| 0.5 | 1 | 3 |

| A3 |
| - |
| 3 |

## Links
* My post about how I used this sketch for my Christmas lights: [Restoring Vintage Christmas Lights](https://www.linkedin.com/pulse/restoring-my-parents-vintage-christmas-lights-oleksii-sylichenko-cppif)

## Author
- [@asilichenko](https://github.com/asilichenko)

## License
- [MIT License](LICENSE)
