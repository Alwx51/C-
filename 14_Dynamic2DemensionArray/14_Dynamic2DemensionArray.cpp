#include <iostream>
#include <iomanip>
using namespace std;

void initArray(int** arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 90 + 10;
		}
	}
}
void ShowArray(int** arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout <<left<< setw(4)<<arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << "-------------------------\n\n" << endl;
}

void FillOneRow(int* arr, int cols)
{
	for (int i = 0; i < cols; i++)
	{
		arr[i] = rand() % 10;
	}
}

int** addRowToTheEnd(int** arr, int& rows, int cols)
{
	int** temp = new int*[rows + 1];
	for (int i = 0; i < rows; i++)
	{
		temp[i] = arr[i];
	}
	temp[rows] = new int[cols];
	FillOneRow(temp[rows], cols);
	delete[]arr;
	rows++;
	return temp;
}
int** AddRowByIndex(int** arr, int& rows, int cols,int index)
{
	int** temp = new int* [rows + 1];
	for (int i = 0; i < index; i++)
	{
		temp[i] = arr[i];

	}
	temp[index] = new int[cols];
	FillOneRow(temp[index], cols);
	for (int i = index+1; i < rows+1; i++)
	{
		temp[i] = arr[i - 1];
	}
	delete[]arr;
	rows++;
	return temp;
}

int** deleteRowByIndex(int** arr, int& rows, int cols, int index)
{
	int** temp = new int* [rows - 1];
	for (int i = 0; i < index; i++)
	{
		temp[i] = arr[i];
	}
	delete[]arr[index];
	for (int i = index; i < rows ; i++)
	{
		temp[i] = arr[i + 1];
	}
	delete[]arr;
	rows--;
	return temp;
}

int** addColToTheEnd(int** arr, int rows, int& cols)
{
	int** temp = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		temp[i] = new int[cols + 1];
		
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			temp[i][j] = arr[i][j];
		}
	}
	for (int i = 0; i < rows; i++)
	{
		delete[]arr[i];
	}
	delete[]arr;
	for (int i = 0; i < rows; i++)
	{
		temp[i][cols] = 5;
	}
	cols++;
	return temp;
}

int** addColToTheStart(int** arr, int rows, int& cols)
{
	int** temp = new int* [rows];

	for (int i = 0; i < rows; i++)
	{
		temp[i] = new int[cols + 1];
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			temp[i][j + 1] = arr[i][j];
		}
	}

	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;

	for (int i = 0; i < rows; i++)
	{
		temp[i][0] = 5;
	}

	cols++;
	return temp;
}

int** deleteRow(int** arr, int rows, int cols)
{
	int** temp = new int* [rows - 1];
	for (int i = 0; i < rows-1; i++)
	{
		temp[i] = arr[i];
	}
	delete[] arr[rows - 1];
	delete[]arr;
	rows--;
	return temp;
}

int** deleteRowInStart(int** arr, int &rows, int cols)
{
	int** temp = new int* [rows - 1];
	delete[] arr[0];
	for (int i = 0; i < rows; i++)
	{
		temp[i] = arr[i+1];
	}
	
	delete[]arr;
	rows--;
	return temp;
}

int** addRowInStart(int** arr, int& rows, int cols)
{
	int** temp = new int* [rows + 1];
	temp[0] = new int[cols];
	FillOneRow(temp[0], cols);
	for (int i = 0; i < rows; i++)
	{
		temp[i+1] = arr[i];
	}
	
	
	delete[] arr;
	rows++;
	return temp;
}



int main()
{
	/*int* arr = new int[8];
	delete[]arr;*/

	int rows = 3;
	int cols = 4;
	//cout << "Enter count rows: "; cin >> rows;
	//cout << "Enter count cols: "; cin >> cols;
	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];

	}
	initArray(arr, rows, cols);
	ShowArray(arr, rows, cols);
	arr = addRowToTheEnd(arr, rows, cols);
	ShowArray(arr, rows, cols);
	arr = addRowToTheEnd(arr, rows, cols);
	ShowArray(arr, rows, cols);
	arr = AddRowByIndex(arr, rows, cols, 2);
	ShowArray(arr, rows, cols);
	arr = addColToTheEnd(arr, rows, cols);
	ShowArray(arr, rows, cols);

	//arr = deleteRow(arr, rows, cols);
	//ShowArray(arr, rows, cols);
	//arr = deleteRow(arr, rows, cols);
	//ShowArray(arr, rows, cols);


	//1
	arr = addRowInStart(arr, rows, cols);
	ShowArray(arr, rows, cols);

	//2
	arr = deleteRowInStart(arr, rows, cols);
	ShowArray(arr, rows, cols);
	//3
	cout << "-----------------*********" << endl;
	arr = deleteRowByIndex(arr, rows, cols, 3);
	ShowArray(arr, rows, cols);
	//4
	arr = addColToTheStart(arr, rows, cols);
	ShowArray(arr, rows, cols);
	/*for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}*/
	delete[]arr;
}
