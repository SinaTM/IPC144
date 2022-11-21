/* Program that prints the full names of the cards it deals*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

int main(void) {

    int inHand[NUM_SUITS][NUM_RANKS] = { 0 };
    int cardNum, cardRank, cardSuit;
    const char* rank_code[] = { "Two", "Three", "Four", "Five", "Six", "Seven",
                               "Eight", "Nine", "Ten",
                               "Jack", "Queen", "King", "Ace" };
    const char* suit_code[] = { "Clubs", "Diamonds", "Hearts", "Spades" };

    srand((unsigned)time(NULL));

    printf("Enter number of cards in hand: ");
    scanf("%d", &cardNum);

    printf("Your hand:\n");
    while (cardNum > 0) {
        cardSuit = rand() % NUM_SUITS;
        cardRank = rand() % NUM_RANKS;
        if (!inHand[cardSuit][cardRank]) {
            inHand[cardSuit][cardRank] = 1;
            cardNum--;
            printf("%s of %s\n", rank_code[cardRank], suit_code[cardSuit]);
        }
    }
    return 0;
}
