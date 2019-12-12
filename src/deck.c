#include <stdio.h>
#include <stdlib.h>

#include "../headers/deck.h"
#include "../headers/card.h"

//Swap cards for use in Fisher-Yates Shuffle function.
static void swapCards(Card *a, Card *b){
  Card temp = *a;
  *a = *b;
  *b = temp;
}

//Assign values to an array of Card structs.
void deckCreate(Card *deck, int n_suits, int n_faces){

   int card_counter = 0;

  for(int i = 0; i < n_suits; ++i){
    for(int j = 0; j < n_faces; ++j){

      deck[card_counter].suit = i;
      deck[card_counter].face = j;
      ++card_counter;
    }
  }
}

//Shuffle an array of Card structs with Fisher-Yates Shuffle
void deckShuffle(Card *deck, int n){
  if(n > 1){
    for(int i = n-1; i > 0; --i){
      int j = rand() % (i+1);
      swapCards(&deck[i], &deck[j]);
    }
  }
}

//Print Card array between start and end positions.
void deckPrint(Card *deck, int start, int end){
  for(int i = start; i < end; ++i){
    printf("%s\n", cardStr(&deck[i]));
  }
}
