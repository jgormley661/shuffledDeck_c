#ifndef DECK_H
#define DECK_H

#include "card.h"

//Swap cards for use in Fisher-Yates Shuffle function.
void _swapCards(Card *a, Card *b);

//Assign values to an array of Card structs.
void deckCreate(Card *deck, int nSuits, int nFaces);

//Shuffle an array of Card structs with Fisher-Yates Shuffle.
void deckShuffle(Card *deck, int n);

//Print Card array between start and end positions
void deckPrint(Card *deck, int start, int end);

#endif
