#include <iostream>
#include <conio.h>
#include <fstream>
#include <stdlib.h>
using namespace std;

class student
{
private:
    string firstName,lastName, roll_no, course, address, email_id;
    long long int contact_no;

public:
    void menu();
    void insert();
    void display();
    void modify();
    void search();
    void deleted();
};
// Project Menu
void student::menu()
{
    while(true){
        int choice;
        char x;
        system("cls");
        cout << "\t\t\t-----------------------------" << endl;
        cout << "\t\t\t| STUDENT MANAGEMENT SYSTEM |" << endl;
        cout << "\t\t\t-----------------------------" << endl;
        cout << "\t\t\t 1. Enter New Record" << endl;
        cout << "\t\t\t 2. Display Record" << endl;
        cout << "\t\t\t 3. Modify Record" << endl;
        cout << "\t\t\t 4. Search Record" << endl;
        cout << "\t\t\t 5. Delete Record" << endl;
        cout << "\t\t\t 6. Exit\n"<< endl;

        cout << "\t\t\t............................" << endl;
        cout << "\t\t\tChoose Options:[1/2/3/4/5/6]" << endl;
        cout << "\t\t\t............................" << endl;
        cout << " Enter Your Choose: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            do
            {
                insert();
                cout << "\n\n\t\t\t Add Another Student Record (Y, N) : ";
                cin >> x;
            } while (x == 'y' || x == 'Y');
            break;
        case 2:
            display();
            break;
        case 3:
            modify();
            break;
        case 4:
            search();
            break;
        case 5:
            deleted();
            break;
        case 6:
            cout << "\n\t\t\t Program Is Exit";
            exit(0);
        default:
            cout << "\n\n\t\t\t Invalid Choice... Please Try Again...";
        }
        getch();
    }
}
void student::insert() // Add student details
{
    system("cls");
    fstream file;
    cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
    cout << "------------------------------------- Add Student Details ---------------------------------------------" << endl;
    cout << "\t\t\tEnter Name: ";
    cin >> firstName>>lastName;
    cout << "\t\t\tEnter Roll No.: ";
    cin >> roll_no;
    cout << "\t\t\tEnter Course: ";
    cin >> course;
    cout << "\t\t\tEnter Email Id(name@gmail.com): ";
    cin >> email_id;
    cout << "\t\t\tEnter Contact No(9639xxxxxx): ";
    cin >> contact_no;
    cout << "\t\t\tEnter Address: ";
    cin >> address;
    file.open("studentRecord.txt", ios::app | ios::out);
    file << " " << firstName <<" "<<lastName<< " " << roll_no << " " << course << " " << email_id << " " << contact_no << " " << address << "\n";
    file.close();
}
void student::display() // Display data of student
{
    system("cls");
    fstream file;
    int total = 1;
    cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
    cout << "------------------------------------- Student Record Table --------------------------------------------" << endl;
    file.open("studentRecord.txt", ios::in);
    if (!file)
    {
        cout << "\n\t\t\tNo Data is Present... ";
        file.close();
    }
    else
    {
        file >> firstName >> lastName >> roll_no >> course >> email_id >> contact_no >> address;
        while (!file.eof())
        {
            cout << "\n\n\t\t\tStudent No.: " << total++ << endl;
            cout << "\t\t\tName: " << firstName <<" "<< lastName << "\n";
            cout << "\t\t\tRoll No.: " << roll_no << "\n";
            cout << "\t\t\tCourse: " << course << "\n";
            cout << "\t\t\tEmail Id: " << email_id << "\n";
            cout << "\t\t\tContact No.: " << contact_no << "\n";
            cout << "\t\t\tAddress: " << address << "\n";
            file >> firstName >>lastName>> roll_no >> course >> email_id >> contact_no >> address;
        }
        if (total == 0)
        {

            cout << "\n\t\t\tNo Data is Present..." << endl;
        }
    }

    file.close();
}
void student::modify() // Modify details of student
{
    system("cls");
    fstream file, file1;
    string rollno;
    int found = 0;
    cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
    cout << "------------------------------------- Student Modify Details ------------------------------------------" << endl;
    file.open("studentRecord.txt", ios::in);
    if (!file)
    {
        cout << "\n\t\t\tNo Data is Present..";
        file.close();
    }
    else
    {
        cout << "\nEnter Roll No. of Student which you want to Modify: ";
        cin >> rollno;
        file1.open("record.txt", ios::app | ios::out);
        file >> firstName >> lastName >> roll_no >> course >> email_id >> contact_no >> address;
        while (!file.eof())
        {
            if (rollno != roll_no)
                file1 << " " << firstName << " "<<lastName << " " << roll_no << " " << course << " " << email_id << " " << contact_no << " " << address << "\n";
            else
            {
                cout << "\n\t\t\tEnter Name: ";
                cin >> firstName >> lastName;
                cout << "\t\t\tEnter Roll No.: ";
                cin >> roll_no;
                cout << "\t\t\tEnter Course: ";
                cin >> course;
                cout << "\t\t\tEnter Email Id(name@gmail.com): ";
                cin >> email_id;
                cout << "\t\t\tEnter Contact No(9639xxxxxx): ";
                cin >> contact_no;
                cout << "\t\t\tEnter Address: ";
                cin >> address;
                file1 << " " << firstName <<" "<<lastName<< " " << roll_no << " " << course << " " << email_id << " " << contact_no << " " << address << "\n";
                found++;
            }
            file >> firstName >> lastName >> roll_no >> course >> email_id >> contact_no >> address;
        }
        if (found == 0)
        {
            cout << "\n\n\t\t\t Student Roll No. Not Found....";
        }
        file1.close();
        file.close();
        remove("studentRecord.txt");
        rename("record.txt", "studentRecord.txt");
    }
}

void student::search() // search data of student
{
    system("cls");
    fstream file;
    int found = 0;
    file.open("studentRecord.txt", ios::in);
    if (!file)
    {
        cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
        cout << "------------------------------------- Student Search Data --------------------------------------------" << endl;
        cout << "\n\t\t\tNo Data is Present... " << endl;
    }
    else
    {
        string rollno;
        cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
        cout << "------------------------------------- Student Search Table --------------------------------------------" << endl;
        cout << "\nEnter Roll No. of Student which you want to search: ";
        cin >> rollno;
        file >> firstName >> lastName >> roll_no >> course >> email_id >> contact_no >> address;
        while (!file.eof())
        {
            if (rollno == roll_no)
            {
                cout << "\n\n\t\t\tName: " << firstName <<" "<<lastName<< "\n";
                cout << "\t\t\tRoll No.: " << roll_no << "\n";
                cout << "\t\t\tCourse: " << course << "\n";
                cout << "\t\t\tEmail Id: " << email_id << "\n";
                cout << "\t\t\tContact No.: " << contact_no << "\n";
                cout << "\t\t\tAddress: " << address << "\n";
                found++;
            }
            file >> firstName >> lastName >> roll_no >> course >> email_id >> contact_no >> address;
            if (found == 0)
            {
                cout << "\n\t\t\t Student Roll NO. Not Found....";
            }
        }
        file.close();
    }
}
void student::deleted() // ddeleted data of student
{
    system("cls");
    fstream file, file1;
    int found = 0;
    string roll;
    cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
    cout << "------------------------------------- Delete Student Details ------------------------------------------" << endl;
    file.open("studentRecord.txt", ios::in);
    if (!file)
    {
        cout << "\n\t\t\tNo Data is Present..";
        file.close();
    }
    else
    {
        cout << "\nEnter Roll No. of Student which you want Delete Data: ";
        cin >> roll;
        file1.open("record.txt", ios::app | ios::out);
        file >> firstName >> lastName >> roll_no >> course >> email_id >> contact_no >> address;
        while (!file.eof())
        {
            if (roll != roll_no)
            {
                file1 << " " << firstName<<" "<<lastName << " " << roll_no << " " << course << " " << email_id << " " << contact_no << " " << address << "\n";
            }
            else
            {
                found++;
                cout << "\n\t\t\tSuccessfully Delete Data";
            }
            file >> firstName >>lastName>> roll_no >> course >> email_id >> contact_no >> address;
        }
        if (found == 0)
        {
            cout << "\n\t\t\t Student Roll NO. Not Found....";
        }
        file1.close();
        file.close();
        remove("studentRecord.txt");
        rename("record.txt", "studentRecord.txt");
    }
}
int main()
{
    student project; // object
    project.menu();  //object calling
    return 0;
}