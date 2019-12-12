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
  const int n_suits = 4;
  const int n_faces = 13;
  const int n_deck = n_suits * n_faces;
  
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
