//Library management system
//1. Add new book
//2. Delete old book
//3. Issue book to an student
//4. Collect book from student
//5. Add new student
//6. Delete an existing student
#include<iostream>
#include<vector>
using namespace std;
class Book{
    string bookName;
    string publicationYear;
    string publisherName;
    string writerName;
    unsigned int price;
    bool isAssigned;

public:
    Book(){}
    Book(string bookName,string publicationYear, string publisherName, string writerName, unsigned int price){

    }
    void applyDiscount(float discountPercentage){
        
    }
};
class User{
    string userName;
    string mobNumber;
    unsigned int bookCount;

public:
    User(){}
    User(string userName, string mobNumber, unsigned int bookcount){

    }
    void bookIssued(){
        bookCount++;
    }
    void bookSubmitted(){
        if(bookCount>0)
            bookCount--;
    }
};
class Library{
    vector<Book> books;
    vector<User> users;
    unsigned int noOfBooks;
    unsigned int noOfUsers;
};
int main(){
    
    return 0;
}