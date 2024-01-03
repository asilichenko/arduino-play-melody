# Play a melody on the Arduino and blink the LED to the beat

Simple Arduino project to play a melody using notes and blink an LED to the tune of the melody.

Could be used to play melody and blink the Christmas lights.

### Algorythm:

1. Turn on the LED
2. For each note in the melody do:
   1. Get the note name
   2. Get beat for the note
   3. Calculate note playing duration = number of beats multiply by `TEMPO` (duration of one beat, defined for each melody)
   4. Get note frequency by its name from the [notes_scale.h](notes_scale.h)
   5. Play the tone async, `playNote()`
   6. Blink by the LED, `blink()`:
      - Turn off (or fade down), 
      - Delay milis of `BLINK_DURATION`
      - Turn on
   7. Delay until playing note is finished
   8. Delay for a tiny gap between notes to make melody more intence, `PAUSE_BETWEEN_NOTES`
  
> [!NOTE]
> If you want to fade out and fade in the light using the `analogWrite` function, do not use pin 13 (`LED_BUILTIN`) because it is digital-only.

### External load connection

<img src="https://github.com/asilichenko/arduino-play-melody/assets/1503214/284d2e7b-ebbc-4c12-b4ad-7fa12ce25c2d" width="300"/>

### To change the melody:
1. create h-file for the melody
2. include it instead of "jingle_bells.h"
3. define in the melody file:
   - `const int MELODY_LEN` - number of notes
   - `const String MELODY_NOTES[MELODY_LEN] = {...};` - notes in the [Letter notation](https://en.wikipedia.org/wiki/Scientific_pitch_notation)
   - `const float MELODY_BEATS[MELODY_LEN] = {...};` - for each note number of duration beats to play the note
4. don't forget to add new notes into the [notes_scale.h](notes_scale.h)

### Notes Scale

Notes in the [notes_scale.h](notes_scale.h) are defined in [Letter notation](https://en.wikipedia.org/wiki/Scientific_pitch_notation).

Tones of the notes are defined by the [A440 standard](https://en.wikipedia.org/wiki/A440_(pitch_standard)):
> A440 (also known as Stuttgart pitch) is the musical pitch corresponding to an audio frequency of 440 Hz, which serves as a tuning standard for the musical note of A above middle C, or A4 in scientific pitch notation.

Frequencies for equal-tempered scale, A4 = 440 Hz: 
- [https://pages.mtu.edu/~suits/notefreqs.html](https://pages.mtu.edu/~suits/notefreqs.html)

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

###

## Links
* My post about how I used this sketch for my Christmas lights: [Restoring Vintage Christmas Lights](https://www.linkedin.com/pulse/restoring-my-parents-vintage-christmas-lights-oleksii-sylichenko-cppif)

## Author
- [@asilichenko](https://github.com/asilichenko)

## License
- [MIT License](LICENSE)
