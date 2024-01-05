//Add and remove books
//Update book details
//Search a book by name
public class LibraryMain {
    public static void main(String[] args) {
        Library l = new Library();
        
        l.addBook("Sample paper","Arihant",2023);
        l.addBook("Mock paper","KC Sinha",2022);
        l.addBook("Objective Mathematics","RD Sharma",2024);
        l.addBook("Mathematics","RS Agarwal",2021);
        l.addBook("Lanka","Amish",2019);

        l.printBooks();
    }
}
class Book{
    String title;
    String author;
    int publishYear;

    Book(String title, String author, int publishYear){
        this.title =  title;
        this.author = author;
        this.publishYear = publishYear;
    }
    public String toString(){
        return "\nBook name: "+title+
                "\nAuthor name: "+author+
                "\nPublish year: "+publishYear;
    }
}
class Library{
    Book[] books;
    int noOfBooks;

    Library(){
        books = new Book[10];
        noOfBooks = 0;
    }
    void addBook(String title, String author, int publishYear){
        books[noOfBooks] = new Book(title,author,publishYear);
        noOfBooks++;
    }
    void printBooks(){
        for(int i=0;i<noOfBooks;i++){
            System.out.println(books[i]);
        }
    }
}
