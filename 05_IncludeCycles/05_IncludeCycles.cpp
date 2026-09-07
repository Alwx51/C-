#include <iostream>
using namespace std;

int main()
{
	//for (int i = 0; i < 7; i++)
	//{
	//	for (int i = 0; i < 10; i++)
	//	{
	//		cout << "|###|";
	//	}
	//	cout << endl;
	//}
	//



	//for (int i = 1; i <= 10; i++)
	//{
	//	for (int j = 1; j < 10; j++)
	//	{
	//		cout << i << " * " << j << " = " << i * j << endl;
	//	}
	//	cout << "\n_________________________\n";
	//}
	//for (int j = 0; j < 10; j++)
	//{
	//	for (int i = 0; i < 10; i++)
	//	{
	//		cout << "*";
	//	}
	//	cout << endl;
	//}
	//cout << endl;
	//int star_lines;
	//int count_star;
	//int lenght = 10;
	//star_lines = 1;
	//while (star_lines<=lenght)
	//{
	//	count_star = 1;
	//	while (count_star <= lenght)
	//	{
	//		cout << "* ";
	//		count_star++;
	//	}
	//	cout << endl;
	//}
	//for (int i = 0; i < 15; i++)
	//{
	//	for (int j = 0; j < 15; j++)
	//	{
	//		if (i == j)
	//		{
	//			cout << "= ";
	//		}
	//		else {
	//			cout << "+ ";
	//		}

	//	}
	//	cout << endl;
	//}
	//for (int i = 0; i < 3; i++)
	//{
	//	for (int j = 0; j < 4; j++)
	//	{
	//		cout << " +";
	//	}
	//	cout << endl;
	//}
	//cout << endl;
	//for (int i = 0; i < 15; i++)
	//{
	//	for (int j = 0; j < 15; j++)
	//	{
	//		if (i + j == 15 - 1)
	//		{
	//			cout << "= ";
	//		}
	//		else {
	//			cout << "+ ";
	//		}

	//	}
	//	cout << endl;
	//}
	//for (int i = 0; i < 10; i++)
	//{
	//	for (int j = 0; j < 10; j++)
	//	{
	//		if (i>=j&& i+j>=10-1)
	//		{
	//			cout << "|===|";
	//		}
	//		else
	//		{
	//			cout << "     ";
	//		}
	//		
	//	}
	//	cout << endl;
	//}

	//for (int i = 0; i < 7; i++)
	//{
	//	for (int i = 0; i < 10; i++)
	//	{
	//		cout << "|###|";
	//	}
	//	cout << endl;
	//}
	//task1
	/*int N = 10;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i < j)
			{
				cout << "= ";
			}
			else {
				cout << "+ ";
			}
		}
		cout << endl;
	}*/
	//task2
//	int N = 10;
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			if (i > j)
//			{
//				cout << "= ";
//			}
//			else {
//				cout << "+ ";
//			}
//		}
//		cout << endl;
//}
//task3
//	int N = 10;
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			if (i <= j and i+j<=N-1)
//			{
//				cout << "= ";
//			}
//			else {
//				cout << "+ ";
//			}
//		}
//		cout << endl;

//task4
//int N = 10;
//for (int i = 0; i < N; i++)
//{
//	for (int j = 0; j < N; j++)
//	{
//		if (i >= j and i + j >= N - 1)
//		{
//			cout << "= ";
//		}
//		else {
//			cout << "+ ";
//		}
//	}
//	cout << endl;
//}
//task5
//int N = 10;
//for (int i = 0; i < N; i++)
//{
//	for (int j = 0; j < N; j++)
//	{
//		if (i >= j and i + j >= N - 1)
//		{
//			cout << "= ";
//		}
//		else if (i <= j and i + j <= N - 1)
//		{
//			cout << "= ";
//		}
//		else {
//			cout << "+ ";
//		}
//	}
//	cout << endl;
//}
//task7
//int N = 10;
//for (int i = 0; i < N; i++)
//{
//	for (int j = 0; j < N; j++)
//	{
//		if (i >= j and i + j <= N - 1)
//		{
//			cout << "= ";
//		}
//		else {
//			cout << "+ ";
//		}
//	}
//	cout << endl;
//}
//task8
//int N = 10;
//for (int i = 0; i < N; i++)
//{
//	for (int j = 0; j < N; j++)
//	{
//		if (i <= j and i + j >= N - 1)
//		{
//			cout << "= ";
//		}
//		else {
//			cout << "+ ";
//		}
//	}
//	cout << endl;
//}
//task9
//int N = 10;
//for (int i = 0; i < N; i++)
//{
//	for (int j = 0; j < N; j++)
//	{
//		if (i + j < N - 1)
//		{
//			cout << "= ";
//		}
//		else {
//			cout << "+ ";
//		}
//	}
//	cout << endl;
//}
//task10
//int N = 10;
//for (int i = 0; i < N; i++)
//{
//	for (int j = 0; j < N; j++)
//	{
//		if (i + j > N - 1)
//		{
//			cout << "= ";
//		}
//		else {
//			cout << "+ ";
//		}
//	}
//	cout << endl;
//}

//1
int n;
cout << "Enter amount numbers: " << endl; cin >> n;
for (int i = 1; i <= n; i++)
{
	for (size_t j = 0; j < i; j++)
	{
		cout << i;
	}
	
}
//2
//int N = 10;
//for (int i = 0; i < N; i++)
//{
//	for (int j = 0; j < N; j++)
//	{
//		if (i == j)
//		{
//			cout << "0 ";
//		}
//		else {
//			cout << "1 ";
//		}
//	}
//	cout << endl;
//}
//3
//int sum = 0;
//
//for (int i = 10; i >= 1; i--) {
//	for (int j = 0; j < i; j++) {
//		cout << i << " ";
//		sum += i;
//	}
//	cout << endl;
//}
//
//cout << "Сума = " << sum << endl;



}
