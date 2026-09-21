
#include <iostream>
using namespace std;

int Foo(int a)
{
    if (a == 0)
    {
        return 0;//break
    }
    cout << "Hello " <<a<< endl;
    a--;
    return Foo(a);
}

int Summa(int arr[], int size, int index)
{
    if (index == size - 1)
    {
        return arr[index];
    }
    return arr[index] + Summa(arr, size, index + 1);
}
int Row(int num, int step)
{
    if (step == 0)
    {
        return 1;
    }
    cout << "Num " << num << " step " << step << endl;
    return num * Row(num,step-1);
}
void printLine(int num)
{
    if (num == 0)
    {
        return;
    }
    cout << "* ";

    return printLine(num-1);
}
int summaInRange(int a=1,int b=5)
{
   /* int summa = 0;
    for (int i = a; i < b; i++)
    {
        summa += i;
    }*/ 
    //a = 1  a = 2 a = 3 a = a = 5
    //return 1 + 2 + 3 + 4 +5
    if (a==b)
    {
        return a;
    }
    return a + summaInRange(a+1,b);
}
void InitArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 40 - 20;
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
void QuickSort(int arr[], int size, int B, int E)
{
    int i = B, j = E;
    int temp, p;
    p = arr[(B + E) / 2];
    do
    {
        while (arr[i] < p)i++;
        while (arr[j] > p)j--;
        if (i <= j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    } while (i<j);
    if (B < j)QuickSort(arr, size, B, j);
    if (i < E)QuickSort(arr, size, i, E);

}
int BinarySearch(int arr[], int size, int key)
{
    int B = 0, E = size - 1;
    while (true)
    {
        int p = (B + E) / 2;
        if (key > arr[p])
        {
            B = p + 1;
        }
        else if (key < arr[p])
        {
            E = p - 1;
        }
        else if (key == arr[p])
            return p;
        if (B > E)return -1;

        
        
    }
}
int main()
{
    Foo(10);
    cout << Foo << endl;
    //«найти суми елемент≥в масиву
    const int size = 10;
    int arr[size] = { 1,5,7,3,7,4,3,2,9,5 };
    int summa = 0;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
        summa += arr[i];
    }
    cout << endl;
    cout << "Summa = " << summa << endl;
    summa = Summa(arr, size, 0);
    cout << "Summa = "<<summa << endl;
    //Ўвидке сортуванн€
    InitArray(arr, size);
    ShowArray(arr, size);
    QuickSort(arr, size, 0, size - 1);
    ShowArray(arr, size);

    //int searchKey, indexFind;
    //cout << "Enter search key --> ";
    //cin >> searchKey;
    //indexFind = BinarySearch(arr, size, searchKey);
    //if (indexFind != -1)
    //{
    //    cout << "Element [" << searchKey << "] find in index ["
    //        << indexFind << "]" << endl;
    //}
    //else
    //{
    //    cout << "Element " << searchKey << " not found " << endl;
    //}
    //1
    int step = 3;
    int num = 3;
    cout << Row(num, step) << endl;
    //2
    printLine(10);
    //3
    cout << summaInRange() << endl;
    







}

