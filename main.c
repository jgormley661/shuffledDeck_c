#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "headers/card.h"
#include "headers/deck.h"

int main(int argc, char *argv[]){
  printf("Deck of Cards program - C - John Gormley \n");

  srand(time(NULL));

  const int N_SUITS = 4;
  const int N_FACES = 13;
  const int N_DECK = N_SUITS * N_FACES;
  const int PRINT_START = 0;
  const int PRINT_END = N_DECK;
  
  Card deck[N_DECK];
  
  //Assign values to an array of Card structs.
  deckCreate(deck, N_SUITS, N_FACES);

  //Print Card array between start and end positions.
  printf("\nNot Shuffled\n");
  deckPrint(deck, PRINT_START, PRINT_END);

  //Shuffle an array of Card structs with Fisher-Yates Shuffle
  deckShuffle(deck, N_DECK);

  //Print Card array between start and end positions.
  printf("\nShuffled\n");
  deckPrint(deck, PRINT_START, PRINT_END);
  
  return 0;
}
