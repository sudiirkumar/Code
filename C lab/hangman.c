#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define WORD "PROGRAM"

typedef struct Letter
{
    char ch;
    int hidden;
    struct Letter *link;
} Letter;

Letter *start = NULL;
int HANGED = 5;

Letter *create(Letter *start, char word[50])
{

    start = (Letter *)malloc(sizeof(Letter));
    start->ch = word[0];
    start->hidden = 1;
    start->link = NULL;
    int i = 1;
    while (i < strlen(word))
    {
        Letter *new_Letter = (Letter *)malloc(sizeof(Letter));
        new_Letter->ch = word[i++];
        new_Letter->hidden = 1;
        new_Letter->link = NULL;

        Letter *temp = start;
        while (temp->link != NULL)
        {
            temp = temp->link;
        }
        temp->link = new_Letter;
    }
    return start;
}

int checkVictory(Letter *start)
{
    Letter *temp = start;
    while (temp != NULL)
    {
        if (temp->hidden == 1)
        {
            return 0;
        }
        temp = temp->link;
    }
    return 1;
}

void checkChar(Letter *start, char c)
{
    Letter *temp = start;
    int check = 0;
    while (temp != NULL)
    {
        if ((int)temp->ch == (int)c)
        {
            check = 1;
            if (temp->hidden == 0)
            {
                printf("\nAlready guessed the Letter\n");
                break;
            }
            else
            {
                temp->hidden = 0;
            }
        }
        temp = temp->link;
    }
    if (check == 0)
    {
        printf("\nCharacter not found\nAttempts left: %d\n", --HANGED);
    }
}

void display(Letter *start)
{
    Letter *temp = start;
    if (temp == NULL)
    {
        printf("Empty list");
    }
    else
    {
        printf("\n------------------------------\n");
        while (temp != NULL)
        {
            if (temp->hidden == 1)
            {
                printf("-\t");
            }
            else
            {
                printf("%c\t", temp->ch);
            }
            temp = temp->link;
        }
        printf("\n------------------------------\n");
    }
}

int main()
{
    char chr;
    start = create(start, WORD);
    display(start);
    while (HANGED != 0)
    {
        printf("\nEnter a guess:\n");
        scanf("%c", &chr);
        chr = toupper(chr);
        fflush(stdin);
        checkChar(start, chr);
        display(start);
        if (checkVictory(start))
        {
            printf("\nYou won\n");
            break;
        }
    }
    if (HANGED == 0)
    {
        printf("  +---+\n");
        printf("  |   |\n");
        printf("  O   |\n");
        printf(" /|\\  |\n");
        printf(" / \\  |\n");
        printf("      |\n");
        printf("=========\n");
        printf("\nYou lost\n");
    }
    return 0;
}
