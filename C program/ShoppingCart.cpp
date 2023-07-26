// Signup
// Login
// Search items
// Bill

//User -> user_name,user_email,user_password,user_balance
//Product -> product_name,product_price,product_discount
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
typedef struct User{
    char name[30];
    char email[40];
    char password[20];
    int balance;
}User;

typedef struct Product{
    char name[30];
    int price;
    float discount_percent;
}Product;

int login(char email[],char password[],User user[],int user_count){
    for(int i=0;i<user_count;i++){
        if(strcmpi(email,user[i].email)==0){
            if(strcmp(password,user[i].password)==0){
                return i;
            }
            else{
                return -1;
            }
        }
    }
    return -1;
}

void listProducts(User user,Product product[]){
    printf("Logged in successfully");
}

int main(){
    int ch;
    int idx;
    User user[20];
    Product product[10];
    char temp1[40];
    char temp2[40];
    int user_count = 0;
    do{
        system("cls");
        printf("\n1.SignUp\n2.Login\n0. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 0: return 0;
            case 1://Signup
                    printf("\nEnter user name: ");
                    fflush(stdin);
                    gets(user[user_count].name);
                    printf("Enter email: ");
                    fflush(stdin);
                    gets(user[user_count].email);
                    printf("Enter password: ");
                    fflush(stdin);
                    gets(user[user_count].password);
                    user[user_count].balance = 1000;
                    user_count++;
                    break;
            case 2://Login
                    // abc@gmail.com        abcd1234
                    // abc2@gmail.com       bcde2345
                    // bcd@gmail.com        cdef3456
                    printf("Enter email: ");
                    fflush(stdin);
                    gets(temp1);
                    printf("Enter password: ");
                    fflush(stdin);
                    gets(temp2);
                    idx = login(temp1,temp2,user,user_count);
                    if(idx==-1){
                        printf("\nIncorrect email or password");
                    }
                    else{
                        listProducts(user[idx],product);
                    }
                    break;
            default:printf("\nWrong option selected");
                    break;
        }
        getch();
    }
    while(1);
    return 0;
}