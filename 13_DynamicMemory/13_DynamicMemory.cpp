#include <iostream>
#include <conio.h>
using namespace std;

void Change(int& a)//adress
{
    a++;
}

int& FindMax(int a, int b)
{
    if (a > b)return a;
    else return b;
}

void Test1()
{
    const int size = 10;
    int arr[size];
}
void Test2()
{
    int size = 10;
    cin >> size;
    int* arr = new int[size];
    delete[]arr;
}

int* createArr(int size)
{
    int* arr = new int[size];
    return arr;
}
int* createNewArr(int size)
{
    int* arr = new int[size];
    return arr;
}
void InitNewArr(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
    }
}
void InitArr(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
    }
}
void ShowArr(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int* AddNewNumber(int* arr, int* size, int num)
{
    int* temp = new int[*size + 1];
    for (int i = 0; i < *size; i++)
    {
        temp[i] = arr[i];
    }
    temp[*size] = num;
    delete[]arr;
    arr = temp;
    (*size)++;
    return arr;

}
int* DeleteLastElement(int* arr, int* size)
{
    int* temp = new int[*size - 1];
    for (int i = 0; i < *size-1; i++)
    {
        temp[i] = arr[i];
    }
    delete[]arr;
    (*size)--;
    return temp;

}
int main()
{
    srand(time(0));
    //int size = 3;
    ////cout << "Enter size: "; cin >> size;
    //int* arr = createArr(size);
    //InitArr(arr, size);
    //ShowArr(arr, size);
    //int number;
    //int choice = 'y';
    //while (true)
    //{
    //    cout << "Do you want to add new number? y/n....";
    //    choice = _getch();
    //    if (choice == 'n')break;

    //    cout << "Enter number: "; cin >> number;
    //    arr = AddNewNumber(arr, &size, number);
    //    system("cls");
    //    ShowArr(arr, size);
    //}

    //delete[]arr;

    /*
    int a = 5; // variable
    int* pa = &a;//pointer
    int& la = a;//link
    cout << "a = " << a << endl;
    cout << "pa = " << pa << endl;
    cout << "*pa = " << *pa << endl;
    cout << "la = " << la << endl;

    int b = 10;

    int* pb = NULL;
    int* pb = nullptr;

    int* pb;
    pb = &b;
    int& lb = b;
    cout << "lb = " << lb << endl;

    cout << "lb = " << lb << endl;

    cout << "a = " << a << endl;
    Change(a);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    */
    /*int& lmax = FindMax(a, b);*/
    /*FindMax(a, b) = 100;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
   /* cout << "lmax = " << lmax << endl;*/

    /*
    int a = 10;
    int* pa = new int(15);
    int* pb = new int;
    int* pc = nullptr;
    *pb = 5;
    pc = new int(12);

    cout << "pa = "<<pa<<endl;
    cout << "pb = "<<pb<<endl;
    cout << "pc = "<<pc<<endl;
    cout << "*pa = "<<*pa<<endl;
    cout << "*pb = "<<*pb<<endl;
    cout << "*pc = "<<*pc<<endl;
    delete pc;
    pc = new int(55);
    cout << "*pa = " << *pa << endl;
    cout << "*pb = " << *pb << endl;
    cout << "*pc = " << *pc << endl;

    delete pa;
    delete pb;
    delete pc;
    */

    //1
    //int* pa = new int(15);
    //float* pb = new float(3.14);
    //double* pc = new double(8.3);
    //cout << "pa = " << pa << endl;
    //cout << "pb = " << pb << endl;
    //cout << "pc = " << pc << endl;
    //cout << "*pa = " << *pa << endl;
    //cout << "*pb = " << *pb << endl;
    //cout << "*pc = " << *pc << endl;
    //cout << "Dobutok = " << *pa * *pb * *pc << endl;

    //delete pa;
    //delete pb;
    //delete pc;
    //2
    int size = 3;
    int* arr1 = createNewArr(size);
    InitNewArr(arr1,size);
    ShowArr(arr1, size);
    DeleteLastElement(arr1,size);

}
