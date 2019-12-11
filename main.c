#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "headers/card.h"
#include "headers/deck.h"

int main(int argc, char *argv[]){
  printf("Deck of Cards program - C - John Gormley \n");

  srand(time(NULL));

  int n_suits = 4;
  int n_faces = 13;
  int n_deck = n_suits * n_faces;
  
  Card deck[n_deck];
  
  //Assign values to an array of Card structs.
  deckCreate(deck, n_suits, n_faces);

  int print_start = 0;
  int print_end = n_deck;

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
