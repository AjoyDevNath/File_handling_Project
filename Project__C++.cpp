#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

class student
{
private:
    int code,qty;
    string name;

public:
    void add_record();
};

void student :: add_record()
{
    /*cout<<"Enter Code : ";
    cin>>code;
    cin.ignore();

    cout<<"Enter student name : ";
    getline(cin,name);
    cin.ignore();


    cout<<"Enter Quantity : ";
    cin>>qty;

    cout<<"\n";


    ofstream sdata;
    sdata.open("student.txt",ios::app);

    sdata<<"Code : "<<ob.id ;
    sdata<<"\t\t";

    sdata<<"First Name : "<<ob.f_name;
    sdata<<"\t\t";

    sdata<<"Last Name : "<<ob.l_name;
    sdata<<endl;

    sdata.close();*/
}


/*void add_record();
void show_record();
void show_All_record();
void delete_record();
void update_record();
*/

student ob;
fstream file;

int main()
{
    int option;

    while(1)
    {
        system("cls");
        cout<<"\t\t\t\t_______________Menu________________"<<endl<<endl<<endl<<endl;
        cout<<"Enter 1 : Add student record"<<endl;
        cout<<"Enter 2 : Show record "<<endl;
        cout<<"Enter 3 : Delete record"<<endl;
        cout<<"Enter 4 : Update record"<<endl;
        cout<<"Enter 5 : Exit"<<endl<<endl<<endl;


        cout<<"Enter the option : ";

        cin>>option;
        cout<<"\n\n";

        switch(option)
        {

        case 1:
        {
            add_record();
            cout<<"Press any key for main menu :";
            getch();
            break;
        }

        case 2:
        {
            cout<<"********************************************************\n";
            cout<<setw(5)<<"Code"<<setw(20)<<"Name"<<setw(5)<<"Quantity"<<endl;
            cout<<"*********************************************************\n";

            show_All_record();
            cout<<"Press any key for main menu :";
            getch();
            break;
        }

        case 3:
        {
            show_record();
            cout<<"Press any key for main menu : ";
            getch();
            break;
        }

        case 4:
        {
            delete_record();
            cout<<"Press any key for main menu : ";
            getch();
            break;
        }
        case 5:
        {
            update_record();
            cout<<"Press any key for main menu : ";
            getch();
            break;
        }

        case 6:
        {
            exit(0);
        }
        default:
            cout<<"Incorrect option,Press any one for main menu";
            getch();
            break;

        }
    }
}

void add_record()
{

}
