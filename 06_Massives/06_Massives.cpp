#include <iostream>
using namespace std;

int main()
{
    //int train[3];
    //train[0] = 5;
    //train[1] = 3;
    //train[2] = 7;
    //cout << "Vagon 0: " << train[0] << endl;
    //cout << "Vagon 1: " << train[1] << endl;
    //cout << "Vagon 2: " << train[2] << endl;

    //const int size = 12;
    //int marks[size];
    //marks[0] = 12;
    //marks[1] = 8;
    //marks[2] = 7;
    //marks[3] = 11;
    //marks[4] = 12;
    //marks[5] = 10;
    //marks[6] = 4;
    //marks[7] = 4;
    //marks[8] = 2;
    //marks[9] = 11;
    //marks[10] = 10;
    //marks[11] = 10;
    //marks[12] = 12;
    //cout << "Marks: " << marks[0] << " - " << marks[5] << " " << marks[12] << endl;
    //const int size = 10;
    //int arr[size] = {1,2,3,4,5,6,7,8,9,10};

    //for (int i = 0; i < size; i++)
    //{
    //    cout << arr[i] << " ";
    //}

    //int arr2[size] = {};
    //for (int i = 0; i < size; i++)
    //{
    //    cout << arr2[i] << " ";
    //}
    //int arr3[size] = {1,2,3};
    //for (int i = 0; i < size; i++)
    //{
    //    cout << arr3[i] << " "<<endl;
    //}

    //int arr4[size];
    //for (int i = 0; i < size; i++)
    //{
    //    cout << "Enter number " << i + 1<<"  "; cin >> arr4[i];

    //}
    //for (int i = 0; i < size; i++)
    //{
    //    cout << arr4[i] << " ";
    //}
    //cout << endl;

    //const int SIZE = 10;
    //int arr5[SIZE] = { 5,-9,4,-78,2,-15,6,4,3,-1 };
    //int min = arr5[0], max = arr5[0];
    //int summa = 0;
    //for (int i = 0; i < SIZE; i++)
    //{
    //    if (arr5[i]<0)
    //    {
    //        summa += arr5[i];
    //    }
    //    if (arr5[i]>max)
    //    {
    //        max = arr5[i];
    //    }
    //    if (arr5[i]<min)
    //    {
    //        min = arr5[i];
    //    }
    //    cout << "Summa negative elements = " << summa << endl;
    //    cout << "Max element = " << max << endl;
    //    cout << "Min element = " << min << endl;

    //    

    //}
    //1
    /*int dobutok = 1;
    const int size1 = 10;
    int arr6[size1] = {};
    for (int i = 0; i < size1; i++)
    {
        cout << "Enter number " << i + 1 << "  "; cin >> arr6[i];
        dobutok *= arr6[i];
    }
    cout << "Dobutok = " << dobutok << endl;*/
    //2
    /*int count_plus = 0;
    int count_minus = 0;
    const int size = 7;
    int arr7[size] = { -12,50,31,-3,-42,13,20 };
    for (int i = 0; i < size; i++)
    {
        if (arr7[i]<0)
        {
            count_minus += 1;
        }
        if (arr7[i]>0)
        {
            count_plus += 1;
        }
    }
    cout << "Amount of positive numbers: " << count_plus << endl;
    cout << "Amount of negative numbers: " << count_minus << endl;*/
    //3
    /*int summa = 0;
    int const size = 7;
    long arr8[size] = {-4,56,34,-75,-9,9,20};
    for (int i = 0; i < size; i++)
    {
        if (arr8[i] % 2 == 0)
        {
            summa += arr8[i];
        }
    }
    cout << "Summa = " << summa << endl;*/
    //4
 /*   int const size = 11;  
    int arr9[size] = {};
    for (int i = 1; i < size; i++)
    {
        arr9[i] = pow(2, i);
        cout << arr9[i] << " ";
        
    }
    cout << endl;
    for (int i = size - 1; i >= 1; i--)
    {
        
        cout << arr9[i] << " ";
    }*/

    //5
    //int const size = 10;
    //int arr10[size] = {3,-23,3,76,-34,4,52,8,-5,7};
    //for (int i = 0; i < size; i++)
    //{
    //    if (arr10[i]<0)
    //    {
    //        arr10[i] *= -1;
    //    }
    //    else if (arr10[i]>0)
    //    {
    //        arr10[i] *= -1;
    //    }
    //    cout << arr10[i] << " ";
    //}
    ////ÍÀ ÄÎÄÀÒÊÎÂÓ ÎÖ²ÍÊÓ
    const int month = 12;
    int arr11[month] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
    int num1, num2;
    int summa = 0;
    cout << "Enter 1 range: " << endl; cin >> num1;
    cout << "Enter 2 range: " << endl; cin >> num2;
    for (int i = 0; i < month; i++)
    {
        cout << "Enter profit" << i << " " << endl;
        summa += i;
    }
    for (int i = num1; i < num2; i++)
    {

    }

    
}