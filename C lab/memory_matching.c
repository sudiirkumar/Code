#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM_OF_CARDS 3

typedef struct card
{
    int value;
    int hidden;
    struct card* link;
} card;
card *start = NULL;

void swapData(card *card1, card *card2)
{
    int temp = card1->value;
    card1->value = card2->value;
    card2->value = temp;
}

card *create(card *start)
{
    int i;
    start = (card *)malloc(sizeof(card));
    start->value = 1;
    start->hidden = 1;
    start->link = NULL;

    card *temp = start;
    card *new_card1 = (card *)malloc(sizeof(card));
    new_card1->value = 1;
    new_card1->hidden = 1;
    new_card1->link = NULL;

    temp->link = new_card1;
    
    for(i=2;i<=NUM_OF_CARDS;i++)
    {
        for(int j=0;j<2;j++)
        {
            card *new_card2 = (card *)malloc(sizeof(card));
            new_card2->value = i;
            new_card2->hidden = 1;
            new_card2->link = NULL;

            while(temp->link != NULL)
            {
                temp = temp->link;
            }
            temp->link = new_card2;
        }
    }
    return start;
}

//Fisher-Yates Algorithm
card *shuffleList(card *start)
{
    srand(time(NULL));
    for(int i = NUM_OF_CARDS*2 - 1; i > 0; i--)
    {
        int j = rand() % (i+1);
        card *temp1 = start;
        for(int k = 0; k<i; k++)
        {
            temp1 = temp1->link;
        }
        card *temp2 = start;
        for(int k = 0; k<j; k++)
        {
            temp2 = temp2->link;
        
        swapData(temp1, temp2);
    }
    return start;
}

int checkVictory(card *start){
    card *temp = start;
    
    while(temp!= NULL)
    {
        if(temp->hidden == 1)
        {
            return 0;
        }
        temp = temp->link;
    }
    return 1;
}

void checkSame(card *start,int index1, int index2)
{
    int res;
    card *temp = start;
    int index = 1;
    while(index++ != index1)
    {
        temp =temp->link;
    }
    card *card1 = temp;
    temp = start;
    index = 1;
    while(index++ != index2)
    {
        temp=temp->link;
    }
    card *card2 = temp;
    if(card1->hidden == 0 || card2->hidden == 0)
    {
        printf("\nThe card(s) you chose was already revealed\n\nNumber %d card is %d.\nNumber %d card is %d.\n", index1, card1->value, index2, card2->value);
    }
    else if(card1->value == card2->value)
    {
        printf("\nCorrect!You found the cards of value %d\n", card1->value);
        card1->hidden = 0;
        card2->hidden = 0;
    }
    else
    {
        printf("\nThe card values dont match\nNumber %d card is %d.\nNumber %d card is %d.\n", index1, card1->value, index2, card2->value);
    }
}

void display(card *start)
{
    card *temp = start;
    if(temp == NULL)
    {
        printf("Empty list");
    }
    else
    {
        while(temp!= NULL)
        {
            if(temp->hidden == 1)
            {
                printf("X\t");
            }
            else
            {
                printf("%d\t", temp->value);

            }
            temp = temp->link;
        }
        printf("\n-------------------------\n");
    }
}

int main()
{
    int n1,n2;
    start = create(start);
    start = shuffleList(start);
    display(start);
    int continue_game = 1;
    while(checkVictory(start)==0 && continue_game == 1)
    {
        printf("\nEnter the two indices:\n");
        scanf("%d %d", &n1, &n2);
        checkSame(start,n1,n2);
        if(checkVictory(start))
        {
            break;
        }
        printf("\nContinue?1->YES.0->NO.\n");
        scanf("%d", &continue_game);
    }
    if(checkVictory(start))
    {
        printf("\nCongratulations!!!!You WON\n");
    }
    else
    {
        printf("\nGame exited. Thank you for playing\n");
    }
    return 0;
}
