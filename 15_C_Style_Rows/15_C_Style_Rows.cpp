#include <iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;

void SetColor(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}


void SetPos(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

int showLen(char string3[])
{
    int character = 0;
    int i = 0;
    while (true)
    {
        if (string3[i]!='\0')
        {
            character++;
            
        }
        else
        {
            break;
        }
        i++;
    }
    return character;
}

void FuncTable()
{
    cout << setw(5) << left << char(179)
        << setw(9) << left << char(179)
        << setw(17) << left << char(179)
        << setw(10) << left << char(179)
        << setw(9) << left << char(179)
        << char(179) << endl;
}
void TopTable()
{
    cout << char(218)
        << char(196) << char(196) << char(196) << char(196)
        << char(194)
        << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196)
        << char(194)
        << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196)
        << char(194)
        << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196)
        << char(194)
        << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196)
        << char(191) << endl;

    cout << char(179) << setw(4) << left << "No"
        << char(179) << setw(8) << left << "Item"
        << char(179) << setw(16) << left << "Description"
        << char(179) << setw(9) << left << "Quantity"
        << char(179) << setw(8) << left << "Price"
        << char(179) << endl;
    cout << char(195)
        << char(196) << char(196) << char(196) << char(196)
        << char(197)
        << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196)
        << char(197)
        << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196)
        << char(197)
        << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196)
        << char(197)
        << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196)
        << char(180) << endl;
}
void Point1()
{
    cout << char(179) << setw(4) << left << "1"
        << char(179) << setw(8) << left << "P196"
        << char(179) << setw(12) << left << "Samsung Color IV"
        << char(179) << setw(9) << left << "1"
        << char(179) << setw(8) << left << "$ 829.00"
        << char(179) << endl;
    cout << char(195)
        << char(196) << char(196) << char(196) << char(196)
        << char(197)
        << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196)
        << char(197)
        << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196)
        << char(197)
        << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196)
        << char(197)
        << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196)
        << char(180) << endl;
}
void Point2()
{
    cout << char(179) << setw(4) << left << "2"
        << char(179) << setw(8) << left << "P020"
        << char(179) << setw(16) << left << "Uniden Handset"
        << char(179) << setw(9) << left << "1"
        << char(179) << setw(8) << left << "$ 29.00"
        << char(179) << endl;
    cout << char(195)
        << char(196) << char(196) << char(196) << char(196)
        << char(197)
        << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196)
        << char(197)
        << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196)
        << char(197)
        << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196)
        << char(197)
        << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196)
        << char(180) << endl;
}
void Point3()
{
    cout << char(179) << setw(4) << left << "3"
        << char(179) << setw(8) << left << "P111"
        << char(179) << setw(16) << left << "Folder Blank"
        << char(179) << setw(9) << left << "1"
        << char(179) << setw(8) << left << "$ 2.70"
        << char(179) << endl;
}
void EndTable()
{
    cout << char(195)
        << char(196) << char(196) << char(196) << char(196)
        << char(197)
        << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196)
        << char(197)
        << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196)
        << char(197)
        << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196)
        << char(197)
        << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196)
        << char(180) << endl;
    FuncTable();
    cout << char(192)
        << char(196) << char(196) << char(196) << char(196)
        << char(193)
        << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196)
        << char(193)
        << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196)
        << char(193)
        << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196)
        << char(193)
        << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196)
        << char(217) << endl;
}
int main()
{
    //C-Style
    //cout << "Hello" << endl;
    //char letter = 'a';

    //char word[] = { 'H','e','l','l','o','!' };
    //for (int i = 0; i < 6; i++)
    //{
    //    cout << word[i];
    //}
    //cout << endl;

    //char mystring[] = "string";
    //cout << mystring << " has " << sizeof(mystring)
    //    << " characters" << endl;
    //for (int i = 0; i < sizeof(mystring); i++)
    //{
    //    cout << "letter " << mystring[i] << " has code: " <<
    //        static_cast<int>(mystring[i]) << endl;
    //}
    ///*mystring = "cat";*///error
    //mystring[1] = 'p';
    //cout << mystring << endl;

    //char name[15] = "max";
    //cout << "My name is " << name << endl;
    //char your_name[255];
    //cout << "Enter name: ";
    //cin.getline(your_name, 255);
    //cout << "Your name is: " << your_name << endl;

    //char text[] = "Print this!";
    //char dest[50];
    //strcpy_s(dest, text);
    //cout << text << endl;
    //cout << dest << endl;

    //cout << "Sizeof: " << sizeof(dest) << endl;
    //cout << "Strlen: " << strnlen(dest,50) << endl;

    //char arr[255] = "Returns the head of a list.";
    //cout << arr << endl;
    ////cout << "Enter any text: "; cin.getline(arr,255);
    //
    //cout << arr << endl;
    //_strupr_s(arr);
    //cout << arr << endl;
    //_strlwr_s(arr);
    //cout << arr << endl;
    //_strrev(arr);
    //cout << arr << endl;
    //_strrev(arr);
    //cout << arr << endl;

    //cout << "Copy arrays: " << endl;
    //char arr2[255];
    //strcpy_s(arr2, arr);
    //cout << "Copy: " << arr2 << endl;
    //arr2[4] = '\0';
    //cout << "Copy: " << arr2 << endl;
    //cout << "Add to array: " << endl;
    //strcat_s(arr, "..........");
    //cout << arr << endl;
    //cout << "Enter any text: "; cin >> arr2;
    //strcat_s(arr, arr2);
    //cout << arr << endl;

    //char any_word[] = "white111";
    ////letter of number
    //cout << any_word[0] << " " << isalnum(any_word[0]) << endl;
    //cout << any_word[5] << " " << (bool)isalnum(any_word[5]) << endl;
    ////letter
    //cout << any_word[5] << " " << (bool)isalpha(any_word[5]) << endl;
    //cout << any_word[0] << " " << (bool)isalpha(any_word[0]) << endl;
    ////is number
    //cout << any_word[0] << " " << (bool)isdigit(any_word[0]) << endl;
    //cout << any_word[5] << " " << (bool)isdigit(any_word[5]) << endl;
    ////is big letter
    //cout << any_word[5] << " " << (bool)isupper(any_word[5]) << endl;
    //cout << any_word[0] << " " << (bool)isupper(any_word[0]) << endl;
    ////is small letter
    //cout << any_word[0] << " " << (bool)islower(any_word[0]) << endl;
    //cout << any_word[5] << " " << (bool)islower(any_word[5]) << endl;

    //cout << any_word[0] << " " << tolower(any_word[0]) << endl;
    //cout << any_word[5] << " " << tolower(any_word[5]) << endl;

    //cout << any_word[2] << " " << toupper(any_word[0]) << endl;
    //cout << any_word[5] << " " << toupper(any_word[5]) << endl;
    //cout << any_word[5] << " " << isspace(any_word[5]) << endl;   
    //

    //double x = -5, y = 2.7, z = 3.14;
    //cout << setw(5)<< x<<endl;
    //cout << setw(5)<< y << endl;
    //cout << setw(5) << z << endl;
    //
    //SetColor(5);
    //cout << "Hello" << endl;
    //SetColor(7);

    //for (int i = 0; i < 15; i++)
    //{
    //    SetColor(i); cout << "Hello" << endl;
    //}
    //system("cls");//clear console
    //for (int i = 0; i < 150; i++)
    //{
    //    SetPos(rand()%30, rand() % 30);
    //    SetColor(rand() % 16);
    //    cout << "*";
    //    Sleep(250);
    //}
    /*for (int i = 0; i < 255; i++)
    {
        cout << i << " --> " << (char)i << endl;
    }*/

    //1
    /*char string[255];
    int a = 0;
    int o = 0;
    cout << "Enter string: "; cin >> string;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i]=='a')
        {
            a++;
        }
        if (string[i]=='o')
        {
            o++;
        }
    }
    cout << "a = " << a << endl;
    cout << "o = " << o << endl;*/
    //2
    //char string1[255];
    //int character = 0;
    //int number = 0;
    //int space = 0;
    //cout << "Enter string: ";
    //cin.getline(string1, 255);
    //for (int i = 0; i < strlen(string1); i++)
    //{
    //    if (isalpha(string1[i]))
    //    {
    //        character++;
    //    }
    //    if (isdigit(string1[i]))
    //    {
    //        number++;
    //    }
    //    if (isspace(string1[i]))
    //    {
    //        space++;
    //    }
    //}
    //cout << "Characters = " << character << endl;
    //cout << "Numbers = " << number << endl;
    //cout << "Spaces = " << space << endl;
    //3
    //char string2[255];
    //cout << "Enter string: ";
    //cin.getline(string2, 255);
    //for (int i = 0; i < strlen(string2); i++)
    //{
    //    if (isupper(string2[i]))
    //    {
    //        string2[i] = tolower(string2[i]);
    //    }
    //    else if (islower(string2[i]))
    //    {
    //        string2[i] = toupper(string2[i]);
    //    }
    //}
    //cout << string2 << endl;
    //4
    /*char string3[255];
    cout << "Enter string: ";
    cin.getline(string3, 255);
    int len = showLen(string3);
    cout << len << endl;*/
    //5
    //char string4[255];
    //char string5[255];
    //int index = 0;
    //cout << "Enter string: ";
    //cin.getline(string4, 255);
    //for (int i = 0; i < strlen(string4); i++)
    //{
    //    
    //    
    // 
    //    if (string4[i] == 'h')
    //    {
    //        continue;
    //    }
    //    string5[index] = string4[i];
    //    index++;
    //    
    //}
    //string5[index] = '\0';
    //cout << string5 << endl;

    //table
    
    TopTable();
    Point1();
    Point2();
    Point3();
    FuncTable();
    FuncTable();
    FuncTable();
    FuncTable();
    FuncTable();
    EndTable();

}
