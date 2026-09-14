#include <iostream>
using namespace std;


void Hello()
{
    cout << "Hello world" << endl;
}
void sayHello();//prototype function

void Star(int count)
{
    for (int i = 0; i < count; i++)
    {
        cout << "* ";
    }
    cout << endl;
}
void AnyLine(char symbol, int count)
{
    for (int i = 0; i < count; i++)
    {
        cout << symbol << " ";
    }
    cout << endl;
}
int myPow(int number, int step)
{
    int pow = 1;
    for (int i = 0; i < step; i++)
    {
        pow *= number;
    }
    cout << "Pow number " << number << " = " << pow << endl;
    return pow;
}
int Max(int a, int b)
{
    /*if (a>b)
        return a;
    else
        return b;*/
    return (a > b) ? a : b;
    
}
int Min(int a, int b)
{
    return (a < b) ? a : b;
}
void Second()
{
    cout << "Second function working" << endl;
}
void First()
{
    cout << "First function working" << endl;
    Second();
    cout<< "First function working" << endl;
}
int Change(int a, int b)
{
    cout << "a= " << a << ".b = " << b << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << "a= " << a << ".b = " << b << endl;
    return a, b;
}
void InitArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
    }
}
void ShowArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int SummaArray(int arr[], int size)
{
    int summa = 0;
    for (int i = 0; i < size; i++)
    {
        summa += arr[i];
    }
    return summa;
}
void InitMatrix(int arr[][7], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = rand() % 90 + 10;
        }
    }
}
void ShowMatrix(int arr[][7], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    srand(time(0));

    //int a = 5;
    //if (a == 5)
    //{
    //    int b = 3;
    //    cout << b << endl;
    //}
    

    const int rows = 5;
    const int cols = 7;
    int array[rows][cols];
    InitMatrix(array, rows, cols);
    ShowMatrix(array, rows, cols);





    const int size = 10;
    int arr[size];
    InitArray(arr, size);
    ShowArray(arr, size);
    SummaArray(arr, size);
    int a = 4, b = 7;
    cout << "a= " << a << ".b = " << b << endl;
    Change(a, b);
    cout << "a= " << a << ".b = " << b << endl;
    cout << "Min element: " << Min(8, 120) << endl;
    cout << "Max element: " << Max(8, 120) << endl;
    cout << "Max element: " << Max(18, 1) << endl;
    cout << "Res: " << myPow(5, 3) << endl;
    int res = myPow(5, 3);
    AnyLine('&',65 );
    Hello();
    sayHello();
    sayHello();
    sayHello();
    sayHello();
    sayHello();
    Star(34);
}

void sayHello()
{
    cout << "Hello world" << endl;
}

