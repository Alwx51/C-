#include <iostream>
using namespace std;

void ShowAverage();
void countNum();
bool leapYear(int year);
void showDifference(int d1, int m1, int y1, int d2, int m2, int y2);

void main()
{
	//ShowAverage();
	countNum();
	cout << endl;
	showDifference(1, 1, 2020, 1, 1, 2024);

}
void ShowAverage()
{
	int num;
	int count = 0;
	int sum = 0;
	while (true)
	{

		cout << "Enter number(0-stop): " << endl;
		cin >> num;
		if (num == 0)
			break;
		sum += num;
		count += 1;
		double average = (double)sum / count;
		cout << "the arithmetic mean of these numbers: " << average << endl;

	}
}
void countNum()
{
	int num;
	int positiveCount = 0;
	int negativeCount = 0;
	int zeroCount = 0;
	while (true)
	{
		cout << "Enter number(99-stop): " << endl;
		cin >> num;
		if (num == 99)
		{
			break;
		}
		else if (num == 0) {
			zeroCount += 1;
		}
		else if (num > 0)
		{
			positiveCount += 1;
		}
		else if (num < 0)
		{
			negativeCount += 1;
		}

	}
	cout << "Number of positive numbers: " << positiveCount << endl;
	cout << "Number of negative numbers: " << negativeCount << endl;
	cout << "Number of zero: " << zeroCount << endl;
}
bool leapYear(int year)
{
	return (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
}
void showDifference(int d1, int m1, int y1, int d2, int m2, int y2)
{
	int days1 = y1 * 365;
	int days2 = y2 * 365;

	int monthDays1[] = { 0, 31, 28, 31, 30, 31, 30,
					  31, 31, 30, 31, 30, 31 };
	int monthDays2[] = { 0, 31, 28, 31, 30, 31, 30,
					  31, 31, 30, 31, 30, 31 };

	if (leapYear(y1))
	{
		monthDays1[2] = 29;
	}



	if (leapYear(y2))
	{
		monthDays2[2] = 29;
	}

	for (int i = 1; i < y1; i++)
	{
		if (leapYear(i))
			days1++;
	}

	for (int i = 1; i < y2; i++)
	{
		if (leapYear(i))
			days2++;
	}

	for (int i = 1; i < m1; i++)
	{
		days1 += monthDays1[i];
	}
	for (int i = 1; i < m2; i++)
	{
		days2 += monthDays2[i];
	}
	days1 += d1;
	days2 += d2;

	if (days1 > days2)
		cout << "Difference between years: " << days1 - days2 << endl;
	else
		cout << "Difference between years: " << days2 - days1 << endl;
}

