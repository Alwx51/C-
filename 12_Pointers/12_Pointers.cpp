#include <iostream>
using namespace std;

void Change(int a)
{
    a++;
}
void Change(int *a)//adress
{
    (*a)++;
}
int* FindMax(int *a, int *b, int *c)
{
    if (*a > *b and *a > *c)
        return a;
    else if (*b > *a and *b > *c)
        return b;
    else
        return c;


}

void InitArray(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        *(arr + i) = rand() % 100;
    }
}
void ShowArray(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << *(arr + i) << " ";
    }cout << endl;
}
int* MaxElement(int* arr, int size)
{
    int* max = arr;
    for (int i = 0; i < size; i++)
    {
        if (*(arr+i)>*max)
        {
            max = arr + i;
        }
    }
    return max;
}
void reverseShow(int* arr, int size)
{
    int* parr = &arr[size-1];
    for (int i = 0; i < size; i++)
    {
        cout << *parr << " ";
        parr--;
    }
}
int main()
{
    srand(time(0));
    //1
    int a = 4;
    int b = 5;
    int c = 6;
    int* pa = &a;
    int* pb = &b;
    int* pc = &c;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "pa = " << *pa << endl;
    cout << "pb = " << *pb << endl;
    cout << "pc = " << *pc << endl;
    cout << a * b * c << endl;
    cout << *pa * *pb * *pc << endl;
    cout << (float)(*pa + *pb + *pc) / 3 << endl;
    if (*pa > *pb and *pa > *pc)
    {
        cout << "Max = " << *pa << endl;
    }
    else if (*pb > *pa and *pb > *pc)
    {
        cout << "Max = " << *pb << endl;
    }
    else
        cout << "Max = " << *pc << endl;

    //2
    const int size = 10;
    int arr[size]{};
    InitArray(arr, size);
    ShowArray(arr, size);
    reverseShow(arr, size);
    //3
    int arr1[size]{};
    InitArray(arr1, size);
    ShowArray(arr1, size);

    
    //const int size = 10;
    //int arr[size];
    //InitArray(arr, size);
    //ShowArray(arr, size);
    //int* maxElement = MaxElement(arr, size);


    //int a = 5;
    //int* pa = &a;
    //int b = 10;
    //int* pb = &b;
    //cout << "a = "<<a << endl;
    //Change(&a);
    //cout << "a = "<<a << endl;
    //Change(&a);
    //cout << "a = "<<a << endl;
    //Change(&a);
    //cout << "pa = "<<pa << endl;
    //cout << "*pa = "<<*pa << endl;
    //cout << "pb = "<<pb << endl;
    //cout << "*pb = "<<*pb << endl;
    //cout << "b = "<<b << endl;
    //cout << a + b << endl;
    //cout << *pa + *pb << endl;
    //int c = 14;
    //int* max;
    //max = FindMax(&a, &b, &c);
    //*max++;
    //cout << "Max = " << max << endl;

    //pa = &b;
    //cout << "b = " << b << endl;
    //cout << "*pb = " << *pb << endl;
    //cout << "*pa = " << *pa << endl;
    //*pa += 2;
    //cout << "b = " << b << endl;
    //cout << "*pb = " << *pb << endl;
    //cout << "*pa = " << *pa << endl;

    //const int size = 10;
   /* int arr[size]{};
    int* parr = &arr[0];
    cout << arr[0] << endl;
    cout << parr << endl;

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        *(parr+i) = rand() % 100;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << parr << endl;
    cout << *parr << endl;
    cout << parr + 1 << endl;
    cout << *parr + 1 << endl;

    for (int i = 0; i < size; i++)
    {
        *parr = rand() % 100;
        parr++;
    }
    parr = &arr[0];
    for (int i = 0; i < size; i++)
    {
        cout << *parr << " ";
        parr++;
    }
    int* newptr = arr;
    *newptr = 0;
    newptr += 3;
    *newptr += 0;
    parr = arr;
    for (int i = 0; i < size; i++)
    {
        cout << *parr << " ";
        parr++;
    }
    cout << endl;
    parr--;
    for (int i = 0; i < size; i++)
    {
        cout << *parr << " ";
        parr++;
    }*/

   


}