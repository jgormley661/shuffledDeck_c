#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "headers/card.h"
#include "headers/deck.h"

int main(int argc, char *argv[]){
  printf("Deck of Cards program - C - John Gormley \n");

  srand(time(NULL));

  const int n_suits = 4;
  const int n_faces = 13;
  const int n_deck = n_suits * n_faces;
  const int print_start = 0;
  const int print_end = 5;
  
  Card deck[n_deck];
  
  //Assign values to an array of Card structs.
  deckCreate(deck, n_suits, n_faces);

  //Print Card array between start and end positions.
  printf("\nNot Shuffled\n");
  deckPrint(deck, print_start, print_end);

  //Shuffle an array of Card structs with Fisher-Yates Shuffle
  deckShuffle(deck, n_deck);

  //Print Card array between start and end positions.
  printf("\nShuffled\n");
  deckPrint(deck, print_start, print_end);
  
  return 0;
}
