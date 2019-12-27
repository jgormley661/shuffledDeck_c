#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "headers/card.h"
#include "headers/deck.h"

int main(){
  printf("Deck of Cards program - C - John Gore \n");

  //Initiate random seed
  srand(time(NULL));

  //Define deck size
  const int suit_count = 4;
  const int face_count = 13;
  const int deck_count = suit_count * face_count;
  
  Card deck[deck_count];
  
  //Assign values to an array of Card structs.
  deckCreate(deck, suit_count, face_count);

  const int print_start = 0;
  const int print_end = deck_count;

  //Print Card array between start and end positions.
  printf("\nNot Shuffled\n");
  deckPrint(deck, print_start, print_end);

  //Shuffle an array of Card structs with Fisher-Yates Shuffle
  deckShuffle(deck, deck_count);

  //Print Card array between start and end positions.
  printf("\nShuffled\n");
  deckPrint(deck, print_start, print_end);
  
  return 0;
}
