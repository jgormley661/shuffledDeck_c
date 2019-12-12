#ifndef CARD_H
#define CARD_H

typedef struct Card{
  int suit;
  int face;
  const char *suit_string;
  const char *face_string;
} Card;

//Construct a Card struct
void cardCreate(Card *card, int suit, int face);

//return formatted string of Card struct info
const char* cardStr(Card *card);

#endif
