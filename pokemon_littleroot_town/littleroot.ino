
 #include "pitches.h"

int DUR_SEMIBREVE_DOTTED = 3000;
int DUR_SEMIBREVE = 1500;
int DUR_MINIM_DOTTED = DUR_SEMIBREVE / 3 * 2;
int DUR_MINIM = DUR_SEMIBREVE / 2;
int DUR_CROCHET_DOTTED = DUR_SEMIBREVE / 3;
int DUR_CROCHET = DUR_SEMIBREVE / 4;
int DUR_QUAVER_DOTTED = DUR_SEMIBREVE / 6;
int DUR_QUAVER = DUR_SEMIBREVE / 8;
int DUR_SEMIQUAVER_DOTTED = DUR_SEMIBREVE / 12;
int DUR_SEMIQUAVER = DUR_SEMIBREVE / 16;
int DUR_DEMISEMIQUAVER_DOTTED = DUR_SEMIBREVE / 24;
int DUR_DEMISEMIQUAVER = DUR_SEMIBREVE / 32;

int introMelody[] = {
  NOTE_C5, NOTE_F5, NOTE_G5
};

int introNoteDurations[] = {
  DUR_QUAVER, DUR_QUAVER, DUR_QUAVER
};

int loopedMelody[] = {
//verse1
  NOTE_GS5, NOTE_A5, NOTE_G5, NOTE_A5, NOTE_G5, NOTE_A5, NOTE_AS5,
  NOTE_D6, NOTE_C6, NOTE_D6, NOTE_A5, NOTE_A5, NOTE_CS6,
  NOTE_D6, NOTE_E6, NOTE_D6, NOTE_A5, NOTE_G5,
  NOTE_F5, NOTE_E5, NOTE_F5, NOTE_A5, NOTE_D6, NOTE_D5, NOTE_E5,

  NOTE_F5, NOTE_C6, NOTE_AS5, 0, NOTE_AS5, NOTE_A5,
  NOTE_F5, NOTE_D6, NOTE_A5, 0, NOTE_A5, NOTE_G5,
  NOTE_F5, NOTE_E5, NOTE_D5,
  NOTE_E5, NOTE_F5, NOTE_G5, NOTE_C4, NOTE_C5, NOTE_AS4,
  
//verse2
  NOTE_GS4, NOTE_A4, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_A4, NOTE_AS4,
  0, NOTE_C5, NOTE_D5, NOTE_A4, NOTE_G4, NOTE_A4, NOTE_CS5,
  NOTE_D5, NOTE_E5, NOTE_F5, NOTE_A4, NOTE_G4,
  NOTE_F4, NOTE_E4, NOTE_F4, NOTE_A4, NOTE_D5, NOTE_D4, NOTE_E4,

  NOTE_F4, NOTE_C5, NOTE_AS4, 0, NOTE_AS4, NOTE_A4,
  NOTE_F4, NOTE_D5, NOTE_A4, 0, NOTE_A4, NOTE_G4,
  NOTE_F4, NOTE_E4, NOTE_F4,
  NOTE_G4, NOTE_A4, NOTE_AS4, 0, NOTE_A5, NOTE_AS5,

//verse3
  NOTE_C6, NOTE_CS6, NOTE_AS5, NOTE_A5, NOTE_G5,
  NOTE_F5, NOTE_F5, NOTE_E5, NOTE_D5, NOTE_F5, NOTE_A5,
  NOTE_G5, 0, NOTE_F5, NOTE_D5, NOTE_F5,
  NOTE_E5, NOTE_E5, NOTE_F5, NOTE_G5, 0, NOTE_A4, NOTE_AS4,
  
  NOTE_C5, NOTE_CS5, NOTE_A4, NOTE_CS5, NOTE_E5,
  NOTE_G5, NOTE_F5, NOTE_E5, NOTE_F5, NOTE_D5, NOTE_F5, NOTE_A5,
  NOTE_G5, 0, NOTE_F5, NOTE_D5, NOTE_F5,
  NOTE_E5, NOTE_E5, NOTE_F5, NOTE_G5, 0, NOTE_AS5, NOTE_G5
};

int loopedNoteDurations[] = {
//verse1
  DUR_DEMISEMIQUAVER_DOTTED, DUR_CROCHET_DOTTED, DUR_QUAVER, DUR_QUAVER, DUR_QUAVER, DUR_QUAVER, DUR_QUAVER,
  DUR_DEMISEMIQUAVER_DOTTED, DUR_CROCHET_DOTTED, DUR_QUAVER, DUR_CROCHET, DUR_QUAVER, DUR_QUAVER,
  DUR_CROCHET, DUR_CROCHET, DUR_CROCHET, DUR_QUAVER, DUR_QUAVER,
  DUR_QUAVER, DUR_QUAVER, DUR_QUAVER, DUR_QUAVER, DUR_CROCHET, DUR_QUAVER, DUR_QUAVER,

  DUR_MINIM, DUR_QUAVER, DUR_SEMIQUAVER, DUR_SEMIQUAVER, DUR_QUAVER, DUR_QUAVER,
  DUR_MINIM, DUR_QUAVER, DUR_SEMIQUAVER, DUR_SEMIQUAVER, DUR_QUAVER, DUR_QUAVER,
  DUR_MINIM_DOTTED, DUR_QUAVER, DUR_QUAVER,
  DUR_CROCHET_DOTTED, DUR_QUAVER, DUR_QUAVER, DUR_QUAVER, DUR_QUAVER, DUR_QUAVER,

//verse2
  DUR_DEMISEMIQUAVER_DOTTED, DUR_CROCHET_DOTTED, DUR_QUAVER, DUR_QUAVER, DUR_QUAVER, DUR_QUAVER, DUR_QUAVER,
  DUR_QUAVER, DUR_CROCHET, DUR_QUAVER, DUR_QUAVER, DUR_QUAVER, DUR_QUAVER, DUR_QUAVER,
  DUR_CROCHET, DUR_CROCHET, DUR_CROCHET, DUR_QUAVER, DUR_QUAVER,
  DUR_QUAVER, DUR_QUAVER, DUR_QUAVER, DUR_QUAVER, DUR_CROCHET, DUR_QUAVER, DUR_QUAVER,

  DUR_MINIM, DUR_QUAVER, DUR_SEMIQUAVER, DUR_SEMIQUAVER, DUR_QUAVER, DUR_QUAVER,
  DUR_MINIM, DUR_QUAVER, DUR_SEMIQUAVER, DUR_SEMIQUAVER, DUR_QUAVER, DUR_QUAVER,
  DUR_MINIM_DOTTED, DUR_QUAVER, DUR_QUAVER,
  DUR_CROCHET_DOTTED, DUR_QUAVER, DUR_QUAVER, DUR_QUAVER, DUR_QUAVER, DUR_QUAVER,

//  verse3
  DUR_MINIM, DUR_QUAVER, DUR_QUAVER, DUR_QUAVER, DUR_QUAVER,
  DUR_QUAVER, DUR_CROCHET, DUR_QUAVER, DUR_CROCHET, DUR_QUAVER, DUR_QUAVER,
  DUR_MINIM, DUR_QUAVER, DUR_QUAVER, DUR_QUAVER, DUR_QUAVER,
  DUR_QUAVER, DUR_CROCHET, DUR_QUAVER, DUR_QUAVER, DUR_QUAVER, DUR_QUAVER, DUR_QUAVER,

  DUR_MINIM, DUR_QUAVER, DUR_QUAVER, DUR_QUAVER, DUR_QUAVER,
  DUR_QUAVER, DUR_QUAVER, DUR_QUAVER, DUR_QUAVER, DUR_CROCHET, DUR_QUAVER, DUR_QUAVER,
  DUR_MINIM, DUR_QUAVER, DUR_QUAVER, DUR_QUAVER, DUR_QUAVER,
  DUR_QUAVER, DUR_CROCHET, DUR_QUAVER, DUR_QUAVER, DUR_QUAVER, DUR_QUAVER, DUR_QUAVER,
};

void playMusic(int noteDurations[], int melody[], int totalNoteCount) {
  
   for (int thisNote = 0; thisNote < totalNoteCount ; thisNote++) {
    int currentLEDLeft = (thisNote % 5) + 1;
    int currentLEDRight = 13 - (thisNote % 6) - 1;

    int noteDuration = noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);
    digitalWrite(currentLEDLeft, HIGH);
    digitalWrite(currentLEDRight, HIGH);
    
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);

    noTone(8);
    digitalWrite(currentLEDLeft, LOW);
    digitalWrite(currentLEDRight, LOW);   
  }
}

void registerOutput() {
  for (int i=2; i<14; i++)
  {               
    pinMode(i, OUTPUT);             
  }
}

void setup() {
  registerOutput();
  playMusic(introNoteDurations, introMelody, sizeof(introNoteDurations) / 2);
}

void loop() {
  playMusic(loopedNoteDurations, loopedMelody, sizeof(loopedNoteDurations) / 2);
}
