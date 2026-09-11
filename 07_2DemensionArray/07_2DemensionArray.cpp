#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    /*int start;
    cin >> start;*/
    srand(time(0));

    //int a;
    //a = rand()%10;//0....32767
    //cout << a << endl; 
    //a = rand()%10;
    //cout << a << endl;
    //a = rand()%10;
    //cout << a << endl;
    //a = rand()%10;
    //cout << a << endl;


    //for (int i = 0; i < 15; i++)
    //{
    //    a = rand() % 100+1;//0..100
    //    cout << a << " ";
    //}
    //cout << endl;
    //for (int i = 0; i < 25; i++)
    //{
    //    a = rand() % 5+8;
    //    cout << a << " ";
    //}
    //cout << endl;

    //const int size = 10;
    //int arr[size];
    //for (int i = 0; i < size; i++)
    //{
    //    arr[i] = rand() % 100+1;
    //    cout << arr[i] << " ";
    //}
    //







    //const int rows = 4;//рядки
    //const int cols = 5;//колонки
    //int array[rows][cols]{};
    //int max;
    //for (int i = 0; i < rows; i++)
    //{
    //    max = array[i][0];
    //    for (int j = 0; j < cols; j++)
    //    {
    //        array[i][j] = rand() % 100;
    //        cout << left<<setw(4)<<array[i][j] << " ";
    //        if (array[i][j]>max)
    //        {
    //            max = array[i][j];
    //        }
    //       
    //    }
    //    cout << "Max element = " << max << endl;
    //    cout << endl;
    //}
    //cout << endl;
    ///*int array1[3][3] = { {1,2,3},{4,5,6} };*/
    //int array1[3][3] = { 1,2,3,4,5,6,2,2,2};
    //for (int i = 0; i < 3; i++)
    //{
    //    for (int j = 0; j < 3; j++)
    //    {
    //        cout << array1[i][j] << " ";
    //    }
    //    cout << endl;
    //}

    //task1
    //int amount = 0;
    //int array1[4][3] = { 1,2,3,4,5,6,2,2,2,0,5,0 };
    //for (int i = 0; i < 4; i++)
    //{
    //    for (int j = 0; j < 3; j++)
    //    {
    //        if (array1[i][j] != 0)
    //        {
    //            amount++;
    //            
    //        }
    //        cout << array1[i][j] << " ";
    //        
    //        
    //    }
    //    cout << endl;
    //    
    //}
    //cout << amount << endl;
    //task2
    //int amount = 0;
    //int array1[3][3] = { 1,2,3,4,5,6,2,0,0 };
    //for (int i = 0; i < 3; i++)
    //{
    //    for (int j = 0; j < 3; j++)
    //    {
    //        if (array1[i][j] == 0)
    //        {
    //            amount++;
    //            
    //        }
    //        cout << array1[i][j] << " ";
    //        
    //        
    //    }
    //    cout << endl;
    //    
    //}
    //cout << amount << endl;
    //task3
    //int amount12 = 0;
    //int amountneg12 = 0;
    //int array1[7][3]{};
    //for (int i = 0; i < 7; i++)
    //{
    //    for (int j = 0; j < 3; j++)
    //    {
    //        array1[i][j] = -20 + rand() % 40;
    //        cout << right << setw(6) << array1[i][j] << " ";
    //        if (array1[i][j] >=  -12 && array1[i][j] <= 12)
    //        {
    //            amount12++;
    //            
    //        }
    //                   
    //    }
    //    cout << endl;
    //    
    //}
    //cout << "< 12 >: "<< amount12 << endl;
    
    //task4
    //const int rows = 4;//рядки
    //const int cols = 5;
    //int amount = 0;
    //int array1[rows][cols]{};
    //for (int i = 0; i < rows; i++)
    //{
    //    for (int j = 0; j < cols; j++)
    //    {
    //        array1[i][j] = -10 + rand() % 40;
    //        cout << right << setw(6) << array1[i][j] << " ";
    //        if (array1[i][j] > 0)
    //        {
    //            amount++;
    //            
    //        }
    //        
    //        
    //        
    //    }
    //    cout << endl;
    //    
    //}
    //cout << "Positive numbers: "<<amount << endl;
    //task5
    //const int rows = 5;//рядки
    //const int cols = 4;
    //unsigned int amount = 1;
    //int array1[rows][cols]{};
    //for (int i = 0; i < rows; i++)
    //{
    //    for (int j = 0; j < cols; j++)
    //    {
    //        array1[i][j] = -10 + rand() % 40;
    //        cout << right << setw(6) << array1[i][j] << " ";
    //        if (array1[i][j] > 0)
    //        {
    //            amount *= array1[i][j];

    //        }



    //    }
    //    cout << endl;

    //}
    //cout << "Dobutok: " << amount << endl;
    //task6
    //const int rows = 5;//рядки
    //const int cols = 4;
    //int amount = 1;
    //int array1[rows][cols]{};
    //for (int i = 0; i < rows; i++)
    //{
    //    for (int j = 0; j < cols; j++)
    //    {
    //        array1[i][j] = -10 + rand() % 40;
    //        cout << right << setw(6) << array1[i][j] << " ";
    //        if (array1[i][j] < 0)
    //        {
    //            amount*=array1[i][j];

    //        }



    //    }
    //    cout << endl;

    //}
    //cout << "Negative numbers: " << amount << endl;
    //task7
    //const int rows = 4;//рядки
    //const int cols = 4;
    //int amount = 0;
    //int array1[rows][cols]{};
    //for (int i = 0; i < rows; i++)
    //{
    //    for (int j = 0; j < cols; j++)
    //    {
    //        array1[i][j] = rand() % 40;
    //        cout << right << setw(6) << array1[i][j] << " ";
    //        if (array1[i][j] == array1[i][j] % 6 == 1)
    //        {
    //            amount++;

    //        }



    //    }
    //    cout << endl;

    //}
    //cout << "13%6 == 1 numbers: " << amount << endl;
    //task8
    //const int rows = 5;//рядки
    //const int cols = 6;
    //int amount = 0;
    //int array1[rows][cols]{};
    //for (int i = 0; i < rows; i++)
    //{
    //    for (int j = 0; j < cols; j++)
    //    {
    //        array1[i][j] = rand() % 40;
    //        cout << right << setw(6) << array1[i][j] << " ";
    //      
    //    }
    //    cout << endl;

    //}
    //int min = array1[0][0];
    //for (int i = 0; i < rows; i++)
    //{
    //    for (int j = 0; j < cols; j++)
    //    {
    //      
    //        if (array1[i][j] < min)
    //        {
    //            min = array1[i][j];

    //        }



    //    }
    //    cout << endl;

    //}
    //cout << "Min number: " << min << endl;
    //task9
    //const int rows = 5;//рядки
    //const int cols = 6;
    //int amount = 0;
    //int array1[rows][cols]{};
    //for (int i = 0; i < rows; i++)
    //{
    //    for (int j = 0; j < cols; j++)
    //    {
    //        array1[i][j] = rand() % 40;
    //        cout << right << setw(6) << array1[i][j] << " ";

    //    }
    //    cout << endl;

    //}
    //int max = array1[0][0];
    //for (int i = 0; i < rows; i++)
    //{
    //    for (int j = 0; j < cols; j++)
    //    {

    //        if (array1[i][j] > max)
    //        {
    //            max = array1[i][j];

    //        }



    //    }
    //    cout << endl;

    //}
    //cout << "Max number: " << max << endl;
    //task10
    const int rows = 5;//рядки
    const int cols = 4;
    int amount = 0;
    int array1[rows][cols]{};
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            array1[i][j] = - 10 + rand() % 40;
            cout << right << setw(6) << array1[i][j] << " ";
            if (array1[i][j] < 0)
            {
                amount+=array1[i][j];

            }



        }
        cout << endl;

    }
    cout << "Summa of negative numbers: " << amount << endl;
}
