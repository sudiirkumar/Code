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
    int discount_percent;
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
int calcSellingPrice(int price,int discount){
    int discount_price = (price*discount)/100;
    return price-discount_price;
}
void listProducts(User user,Product product[]){
    printf("You are logged in successfully");
    getch();
    system("cls");
    for(int i=0;i<10;i++){
        printf("\n\n%d. Product name = %s",i+1,product[i].name);
        fflush(stdout);
        printf("\nProduct price: %d",product[i].price);
        fflush(stdout);
        printf("\nProduct discount: %d",product[i].discount_percent);
        fflush(stdout);
        printf("\nSelling price: %d",calcSellingPrice(product[i].price,product[i].discount_percent));
    }
}
void setProductValues(char name[],int price,int discount,Product *p){
    strcpy(p->name,name);
    p->price = price;
    p->discount_percent = discount;
}
int main(){
    int ch;
    int idx;
    User user[20];
    Product product[10];
    
    setProductValues("Dell laptop",60000,10,&product[0]);
    setProductValues("Acer laptop",40000,8,&product[1]);
    setProductValues("Lenovo laptop",45000,9,&product[2]);
    setProductValues("HP laptop",50000,7,&product[3]);
    setProductValues("Apple laptop",90000,6,&product[4]);
    setProductValues("Samsung laptop",80000,10,&product[5]);
    setProductValues("Asus laptop",45000,10,&product[6]);
    setProductValues("Keyword",600,15,&product[7]);
    setProductValues("Mouse",400,15,&product[8]);
    setProductValues("Mouse pad",60,5,&product[9]);

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