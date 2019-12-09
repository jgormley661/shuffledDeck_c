#include <stdio.h>
#include <string.h>

#include "../headers/card.h"

//Return string of Card struct's "suit" int
const char* _strSuit(int suit){ 
  static char suit_strings[][9] = { "Hearts", "Clubs", "Diamonds", "Spades" };
  return suit_strings[suit];
}
//return string of Card struct's "face" int
const char* _strFace(int face){
  static char face_strings[][6] = { "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King", "Ace"};
  return face_strings[face];
}

//return formatted string of Card struct info
const char* cardStr(Card *card){
   static char str[30];
   sprintf(str, "(%d of %d) %s of %s", card->face, card->suit, _strFace(card->face), _strSuit(card->suit));
   return str;
}
