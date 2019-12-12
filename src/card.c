#include <stdio.h>
#include <string.h>

#include "../headers/card.h"

void cardCreate(Card *card, int suit, int face){
  
  static const char suit_strings[4][9] = {"Hearts", "Clubs", "Diamonds", "Spades"};
  static const char face_strings[13][6] = {"Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King", "Ace" };

  card->suit = suit;
  card->suit_string = suit_strings[suit];
  
  card->face = face;
  card->face_string = face_strings[face];
}

  
//return formatted string of Card struct info
const char* cardStr(Card *card){
   static char str[30];
   sprintf(str, "(%d of %d) %s of %s", card->face, card->suit, card->face_string, card->suit_string);
   return str;
}
