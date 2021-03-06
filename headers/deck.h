#ifndef DECK_H
#define DECK_H

#include "card.h"

//Assign values to an array of Card structs.
void deckCreate(Card *deck, int n_suits, int n_faces);

//Shuffle an array of Card structs with Fisher-Yates Shuffle.
void deckShuffle(Card *deck, int n);

//Print Card array between start and end positions
void deckPrint(Card *deck, int start, int end);

#endif
