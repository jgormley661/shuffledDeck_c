#include <stdio.h>
#include <string.h>

#include "../headers/card.h"

#define SUIT_STRINGS_SIZE 4
#define SUIT_STRINGS_MAX_LENGTH 9

#define FACE_STRINGS_SIZE 13
#define FACE_STRINGS_MAX_LENGTH 6

#define CARD_STRING_MAX_LENGTH 30

//Return string of Card struct's "suit" int
const char* _strSuit(int suit){
  static const char suit_strings[SUIT_STRINGS_SIZE][SUIT_STRINGS_MAX_LENGTH] = { "Hearts", "Clubs", "Diamonds", "Spades" };
  return suit_strings[suit];
}
//return string of Card struct's "face" int
const char* _strFace(int face){
  static char face_strings[FACE_STRINGS_SIZE][FACE_STRINGS_MAX_LENGTH] = { "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King", "Ace"};
  return face_strings[face];
}

//return formatted string of Card struct info
const char* cardStr(Card *card){
   static char str[CARD_STRING_MAX_LENGTH];
   sprintf(str, "(%d of %d) %s of %s", card->face, card->suit, _strFace(card->face), _strSuit(card->suit));
   return str;
}
