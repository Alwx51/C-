#include <iostream>
using namespace std;


int Max(int a, int b)
{
	return (a > b) ? a : b;

}
float Max(float a, float b)
{
	return (a > b) ? a : b;

}
double Max(double a, double b)
{
	return (a > b) ? a : b;

}
int Max(int a, int b,int c)
{
	if (a > b && a > c)
		return a;
	else if (b > a && b > c)
		return b;
	else
		return c;

}
float Max(float a, float b,float c)
{
	if (a > b && a > c)
		return a;
	else if (b > a && b > c)
		return b;
	else
		return c;
}
double Max(double a, double b,double c)
{
	if (a > b && a > c)
		return a;
	else if (b > a && b > c)
		return b;
	else
		return c;
}
int Min(int a, int b)
{
	return (a < b) ? a : b;

}
float Min(float a, float b)
{
	return (a < b) ? a : b;

}
double Min(double a, double b)
{
	return (a < b) ? a : b;

}
int Min(int a, int b, int c)
{
	if (a < b && a < c)
		return a;
	else if (b < a && b < c)
		return b;
	else
		return c;

}
float Min(float a, float b, float c)
{
	if (a < b && a < c)
		return a;
	else if (b < a && b < c)
		return b;
	else
		return c;

}
double Min(double a, double b, double c)
{
	if (a < b && a < c)
		return a;
	else if (b < a && b < c)
		return b;
	else
		return c;

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
void InitMatrix1(int arr[][5], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 90 + 10;
		}
	}
}
void ShowMatrix1(int arr[][5], int rows, int cols)
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

template<typename T_arr>
void showAverage(T_arr arr[], int size)
{
	int summa = 0;
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		summa += arr[i];
		count += 1;
		
	}
	cout << "Seredne aryphmetichne = " <<(double) summa / count << endl;
	
}
template<typename T_arr>
void showMax(T_arr arr[], int size)
{
	T_arr max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (max<arr[i])
		{
			max = arr[i];
		}
		
	}
	cout << "Max number = " <<max << endl;
	
}
template<typename T_arr>
void showMax1(T_arr arr[][5], int rows, int cols)
{
	T_arr max = arr[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (max < arr[i][j])
			{
				max = arr[i][j];
			}
		}
		
		
	}
	cout << "Max number = " <<max << endl;
	
}



int main()
{
	srand(time(0));
    //task1
	cout << "Max number: " << Max(5, 8) << endl;
	cout << "Max number: " << Max(3.33, 1.22) << endl;
	cout << "Max number: " << Max(3.34, 2.5) << endl;
	cout << "Max number: " << Max(5, 8,32) << endl;
	cout << "Max number: " << Max(3.33, 1.22,7.3) << endl;
	cout << "Max number: " << Max(3.34, 2.5,4.6) << endl;
	cout << "Min number: " << Min(5, 8) << endl;
	cout << "Min number: " << Min(3.33, 1.22) << endl;
	cout << "Min number: " << Min(3.34, 2.5) << endl;
	cout << "Min number: " << Min(5, 8,32) << endl;
	cout << "Min number: " << Min(3.33, 1.22,7.3) << endl;
	cout << "Min number: " << Min(3.34, 2.5,4.6) << endl;
	//task2
	const int size = 10;
	int arr[size];
	InitArray(arr, size);
	ShowArray(arr, size);
	showAverage(arr, size);
	//task3
	showMax(arr, size);
	//task3 2
	const int rows= 5;
	const int cols= 5;
	int arr1[rows][cols] = {};
	InitMatrix1(arr1, rows, cols);
	ShowMatrix1(arr1, rows, cols);
	showMax1(arr1, rows,cols);



}

