/*
Implement Memory matching Game in Linked List
1. The Card structure holds the value of the card, whether it’s revealed or hidden, and a pointer to 
the next card.
2. The Linked List is initialized with pairs of card values, which are shuffled randomly.
3. During the Game Loop, the player selects two cards by providing their positions. If the values 
match, the cards remain revealed; if not, they are hidden again.
4. The Victory Condition is met when all pairs are successfully matched.
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define CARDS 3
typedef struct Card{
    int value;
    int isHidden;
    Card* next;
}Card;
Card* createCards(){
    int i = 1,j;
    Card* head = (Card*)malloc(sizeof(Card));
    Card* newCard;
    Card* temp;
    head->isHidden = 1;
    head->next = NULL;
    head->value = i;
    newCard = (Card*)malloc(sizeof(Card));
    newCard->isHidden = 1;
    newCard->value = i++;     
    newCard->next = NULL;
    head->next = newCard;
    for(;i<=CARDS;i++){
        for(j=0;j<2;j++){
            newCard = (Card*)malloc(sizeof(Card));
            newCard->isHidden = 1;
            newCard->value = i;
            newCard->next = NULL;
            temp = head;
            while(temp->next!=NULL){
                temp = temp->next;
            }
            temp->next = newCard;
        }
    }
    return head;
}
int checkWin(Card* head){
    while(head!=NULL){
        if(head->isHidden==1){
            return 0;
        }
        head = head->next;
    }
    return 1;
}
void changeVisibility(Card* c){
    c->isHidden = 1 - c->isHidden;
}
void displayAllCards(Card* head){
    Card* temp = head;
    while(temp!=NULL){
        if(temp->isHidden)
            printf("** \t");
        else   
            printf("%d \t",temp->value);
        temp = temp->next;
    }
    printf("\n");
}
void swapData(Card* c1, Card* c2){
    int t = c1->value;
    c1->value = c2->value;
    c2->value = t;
}
void random(Card* head){
    srand(time(NULL));
    for(int i = CARDS*2 - 1; i > 0; i--){
        int j = rand() % (i+1);
        Card *temp1 = head;
        for(int k = 0; temp1!=NULL,k<i; k++){
            temp1 = temp1->next;
        }
        Card *temp2 = head;
        for(int k = 0; temp2!=NULL,k<j; k++){
            temp2 = temp2->next;
        }
        swapData(temp1, temp2);
    }
}
void checkSame(Card* head, int ch1, int ch2){
    int i=0;
    Card *card1 = head,*card2 = head;
    while(card1!=NULL && i<ch1){
        card1 = card1->next;
        i++;
    }
    i = 0;
    while(card2!=NULL && i<ch2){
        card2 = card2->next;
        i++;
    }
    if(card1->isHidden==0 || card2->isHidden==0){
        printf("\nSelected card is already revealed\nSelect another card!!\n");
    }
    else if(card1->value == card2->value){
        printf("\nCorrect guess!\nKeep going");
        card1->isHidden = 0;
        card2->isHidden = 0;
    }
    else{
        printf("\nWrong guess :(\nTry again!!");
        printf("\nCard 1 value is %d",card1->value);
        printf("\nCard 2 value is %d\n",card2->value);
    }
}
int main(){
    Card* head = createCards();
    random(head);
    int gameOn = 1;
    int ch1,ch2;
    while(gameOn==1 && checkWin(head)==0){
        system("cls");
        displayAllCards(head);
        printf("\nEnter 2 indices: ");
        scanf("%d%d",&ch1,&ch2);
        checkSame(head,ch1,ch2);
        if(checkWin(head)==1){
            break;
        }
        printf("\nContinue game? 1.Yes 2.No: ");
        scanf("%d",&gameOn);
    }
    if(checkWin(head)){
        printf("\nYayy!!\nYou've won\n");
    }
    else{
        printf("Nice try!\nSee you again :)");
    }
    return 0;
}