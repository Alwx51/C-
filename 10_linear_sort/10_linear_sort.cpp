
#include <iostream>
using namespace std;

void InitArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
}
void InitArray1(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] =rand() % 40-20;
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
int LinearSearch(int arr[], int size,int key)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == key)
			return i;
	}
	return -1;
}
void BubbleSort(int arr[], int size)
{
	int temp;
	for (int i = 0; i < size; i++)
	{
		for (int j = size-1; j > i; j--)
		{
			if (arr[j - 1]>arr[j])
			{
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;

			}
		}
	}
}
void BubbleSort2(int arr[], int size)
{
	int temp;
	for (int i = 0; i < size; i++)
	{
		for (int j = size-1; j > i; j--)
		{
			if (arr[j - 1]>arr[j])
			{
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;

			}
		}
	}
}
void BubbleSort1(int arr[], int size)
{
	int temp;
	for (int i = 0; i < size; i++)
	{
		for (int j = size-1; j > i; j--)
		{
			if (arr[j - 1]<arr[j])
			{
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;

			}
		}
	}
}
void ShakeSort(int arr[], int size)
{
	int j, index = size - 1;
	int left = 1, right = size - 1;
	int temp;
	do
	{
		for (int j = right; j >= left; j--)
		{
			if (arr[j-1]>arr[j])
			{
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
			index = j;
		}
		left = index + 1;
		for (j = left; j <= right; j++)
		{
			if (arr[j - 1] > arr[j])
			{
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
			index = j;
		}
		right = index - 1;


	} while (left<right);
}
void selectSort(int arr[], int size)
{
	int temp, index;
	for (int i = 0; i < size; i++)
	{
		index = i;
		temp = arr[i];
		for (int j = i+1; j < size; j++)
		{
			if (arr[j]<temp)
			{
				temp = arr[j];
				index = j;
			}
		}
		if (index != i)
		{
			arr[index] = arr[i];
			arr[i] = temp;
		}
	}
}
void Sort(int arr[], int size, int parametr)
{
	if (parametr == 0)
	{
		BubbleSort(arr, size);
	}
	else if (parametr == 1)
	{
		BubbleSort1(arr, size);
	}
	ShowArray(arr, size);
}
void findStart(int arr[], int size)
{
	int start;
	int index = -1;
	for (int i = 0; i < size; i++)
	{
		
		index += 1;

		if (arr[i]<0)
		{
			start = arr[i];
			break;
		}
	}
	cout << start << endl;
	cout << index << endl;
	
}
void findEnd(int arr[], int size)
{
	int end;
	int index = 10;
	for (int i = 9; i < size; i--)
	{
		
		index -= 1;

		if (arr[i]<0)
		{
			end = arr[i];
			break;
		}
	}
	cout << end << endl;
	cout << index << endl;
	
}
int main()
{
	srand(time(0));
	//const int size = 15;
	//int arr[size];
	//InitArray(arr, size);
	//ShowArray(arr, size);
	/*selectSort(arr, size);*/
	/*BubbleSort(arr, size);*/
/*	ShakeSort(arr, size);
	cout << endl;
	ShowArray(arr, size);    */                    
	

	//int searchKey,IndexFind;
	//cout << "Enter search key: "; cin >> searchKey;
	//IndexFind = LinearSearch(arr, size, searchKey);
	//if (IndexFind != -1)
	//{
	//	cout << "Element [" << searchKey << "] find in index ["
	//		<< IndexFind << "]" << endl;
	//}
	//else
	//{
	//	cout << "Element " << searchKey << " not found " << endl;
	//}


	//task1
	//const int size = 10;
	//int arr[size];
	//InitArray(arr, size);
	//ShowArray(arr, size);
	//int parametr;
	//cout << "Enter parametr(0 1): ";
	//cin >> parametr;
	//Sort(arr, size,parametr);
	//task2
	const int size1 = 10;
	int arr1[size1];
	InitArray1(arr1, size1);
	ShowArray(arr1, size1);
	findStart(arr1, size1);
	findEnd(arr1, size1);

	

}
