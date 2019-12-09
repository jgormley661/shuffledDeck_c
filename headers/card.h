#ifndef CARD_H
#define CARD_H

typedef struct Card{
  int suit;
  int face;
} Card;

//Return string of Card struct's "suit" int
const char* _strSuit(int suit);

//Return string of Card struct's "face" int
const char* _strFace(int face);

//return formatted string of Card struct info
const char* cardStr(Card *card);

#endif
