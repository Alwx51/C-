#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //1
    //ifstream in;//read from file
    //ofstream out;//save to file
    //char first[50];
    //char second[50];
    //char third[50];
    //char fourth[50];
    //char fifth[50];
    //out.open("1Task.txt", ios_base::app);
    //if (out.is_open())
    //{
    //    cout << "Enter 1 string: "; cin >> first;
    //    cout << "Enter 2 string: "; cin >> second;
    //    cout << "Enter 3 string: "; cin >> third;
    //    cout << "Enter 4 string: "; cin >> fourth;
    //    cout << "Enter 5 string: "; cin >> fifth;
    //    out << first << endl;
    //    out << second << endl;
    //    out << third << endl;
    //    out << fourth << endl;
    //    out << fifth << endl;
    //    
    //    cout << "Save to file!!!" << endl;
    //}
    //else
    //{
    //    cout << "File not exist" << endl;
    //}

    //out.close();

    //2
 
    char buff[50];
    ifstream in("1Task.txt", ios_base::in);
    if (in.is_open())
    {
        while (!in.eof())
        {
            in.getline(buff, 50);//in >> buff
            cout << buff << endl;
        }
        in.getline(buff, 50);
        cout << buff;

    }
    else
        cout << "File not exist!" << endl;
    in.close();

    //3






}

