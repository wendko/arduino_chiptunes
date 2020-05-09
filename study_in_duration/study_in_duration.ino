/*
Plays "The Entertainer"
 
 circuit:
 * 8-ohm speaker on digital pin 8

Based Upon
 
 http://arduino.cc/en/Tutorial/Tone
 
 */
 #include "pitches.h"

// notes in the melody:

int DUR_SEMIBREVE_DOTTED = 1500;
int DUR_SEMIBREVE = 1000;
int DUR_MINIM_DOTTED = DUR_SEMIBREVE / 3 * 2;
int DUR_MINIM = DUR_SEMIBREVE / 2;
int DUR_CROCHET_DOTTED = DUR_SEMIBREVE / 3;
int DUR_CROCHET = DUR_SEMIBREVE / 4;
int DUR_QUAVER_DOTTED = DUR_SEMIBREVE / 6;
int DUR_QUAVER = DUR_SEMIBREVE / 8;
int DUR_SEMIQUAVER_DOTTED = DUR_SEMIBREVE / 12;
int DUR_SEMIQUAVER = DUR_SEMIBREVE / 16;


// basic note durations
//int melody[] = {
//  NOTE_D3, NOTE_D3, NOTE_D3, NOTE_D3, NOTE_D3, NOTE_D3,
//  NOTE_D3, NOTE_D3, NOTE_D3, NOTE_D3, NOTE_D3, NOTE_D3,
//  NOTE_D3, NOTE_D3, NOTE_D3, NOTE_D3, NOTE_D3, NOTE_D3,
//  NOTE_D3, NOTE_D3, NOTE_D3, NOTE_D3, NOTE_D3, NOTE_D3,
//  NOTE_D3, NOTE_D3, NOTE_D3, NOTE_D3, NOTE_D3, NOTE_D3,
//  NOTE_D3
//};
//int noteDurations[] = {
//  DUR_SEMIBREVE, 
//  DUR_MINIM, DUR_MINIM,
//  DUR_CROCHET, DUR_CROCHET, DUR_CROCHET, DUR_CROCHET,
//  DUR_QUAVER, DUR_QUAVER, DUR_QUAVER, DUR_QUAVER, DUR_QUAVER, DUR_QUAVER, DUR_QUAVER, DUR_QUAVER,
//  DUR_SEMIQUAVER, DUR_SEMIQUAVER, DUR_SEMIQUAVER, DUR_SEMIQUAVER, DUR_SEMIQUAVER, DUR_SEMIQUAVER ,DUR_SEMIQUAVER, DUR_SEMIQUAVER, 
//  DUR_SEMIQUAVER, DUR_SEMIQUAVER, DUR_SEMIQUAVER, DUR_SEMIQUAVER, DUR_SEMIQUAVER, DUR_SEMIQUAVER ,DUR_SEMIQUAVER, DUR_SEMIQUAVER
//};


// dotted note durations
int melody[] = {
  NOTE_D3, NOTE_D3, NOTE_D3, NOTE_D3, NOTE_D3, NOTE_D3, NOTE_D3
};
int noteDurations[] = {
  DUR_SEMIBREVE,
  DUR_MINIM_DOTTED, DUR_CROCHET,
  DUR_CROCHET_DOTTED, DUR_QUAVER, DUR_CROCHET_DOTTED, DUR_QUAVER
};



void setup() {
  // iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < 7; thisNote++) {

    int noteDuration = noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(8);
  }
}

void loop() {
  // no need to repeat the melody.
}
