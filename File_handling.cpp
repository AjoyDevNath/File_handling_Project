
#include <iostream>
#include<string>
#include<fstream>
using namespace std;

struct Student
{
    int id;
    string name;
    int marks;
    int age;
};

void insert_data(ofstream &write)
{
    Student s1;
    cout << "\n\tEnter id : ";
    cin >> s1.id;
    cout << "\n\tEnter name : ";
    cin.get();
    getline(cin, s1.name);
    cout << "\n\tenter marks : ";
    cin >> s1.marks;
    cout << "\n\tEnter age : ";
    cin >> s1.age;

    write << s1.id << endl;
    write << s1.name;
    write << endl << s1.marks << endl << s1.age << endl;
}

Student get_data(ifstream &read)
{
    Student obj;

    read >> obj.id;
    read.get();

    getline(read, obj.name);
    read >> obj.marks;
    read >> obj.age;
    return obj;
}

void print_data(Student s)
{
    cout << "\n\tRecord is : ";
    cout << "\n\tId : " << s.id;
    cout << "\n\tName : " << s.name;
    cout << "\n\tMarks : " << s.marks;
    cout << "\n\tAge : " << s.age;
}

void delete_data(int id, ifstream &read)
{
    //We get all data from our file i.e record.txt
    //We have to write data into temp file
    //We have to use rename and remove
    ofstream nf;

    nf.open("temp.txt");

    Student s1;

    s1 = get_data(read);

    while (!read.eof())
    {
        //There we delete record
        if (s1.id != id)
        {
            nf << s1.id << endl << s1.name;
            nf << endl << s1.marks << endl;
            nf << s1.age << endl;
        }
        s1 = get_data(read);
    }

    nf.close();
    read.close();

    remove("record.txt");
    rename("temp.txt", "record.txt");
}

void update_record(int id, ifstream &read)
{
    ofstream write("temp1.txt");
    Student s;
    s = get_data(read);
    while (!read.eof())
    {
        //Update data
        if (s.id == id)
        {
            cout << "\n\tEnter new record for id : " << id;
            insert_data(write);
        }
        else
        {
            write << s.id << endl << s.name << endl;
            write << s.marks << endl << s.age;
            write << endl;
        }
        s = get_data(read);
    }

    write.close();
    read.close();
    remove("record.txt");
    rename("temp1.txt", "record.txt");
}

int main()
{

    return 0;
}
