#include <iostream>
using namespace std;

//int MaxElement(int arr[],int size)
//{
//	int max = arr[0];
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	return max;
//}
//float MaxElement(float arr[],int size)
//{
//	int max = arr[0];
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	return max;
//}
//double MaxElement(double arr[],int size)
//{
//	int max = arr[0];
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	return max;
//}
//long MaxElement(long arr[],int size)
//{
//	int max = arr[0];
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	return max;
//}
//double multy(double x)
//{
//	return x * x;
//}
//double multy(double x,double y)
//{
//	return x * y;
//}
//double multy(double x,double y,double z)
//{
//	return x * y * z;
//}
//double multy(double x=1,double y=1,double z=1,int r = 1)
//{
//	return x * y * z * r;
//}
template<typename T_arr>
T_arr MaxElement(T_arr arr[],int size)
{
	T_arr max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i]>max)
		{
			max = arr[i];
		}
	}
	return max;
}
template<typename T1,typename T2>
T2 Max(T1 a, T2 b)
{
	return (a > b) ? a : b;

}
int main()
{
	cout << "Max number: " << Max(5, 8) << endl;
	cout << "Max number: " << Max(3.33, 1.22) << endl;
	cout << "Max number: " << Max('A', 'B') << endl;

	/*cout << "Res = " << multy(5) << endl;
	cout << "Res = " << multy(5,6) << endl;
	cout << "Res = " << multy(5,6,7) << endl;*/

    const int size = 10;
    int arr[size] = { 10,20,30,40,50,60,70,80,90,100 };
    float arr1[size] = { 0.4,0.3,0.8,0.5,0.8,0.6,0.2,0.7,0.4,0.7 };
    double arr2[size] = { 1.4,2.3,3.8,4.5,5.8,6.6,7.2,9.7,8.4,8.7 };
    long arr3[size] = { 10l,20l,30l,40l,50l,60l,70l,80l,90l,100l };
    char arr4[size] = { 'd','e','y','i','t','j','j','k','g','n'};
	cout << "Max element in array: " << MaxElement(arr, size) << endl;
	cout << "Max element in array: " << MaxElement(arr1, size) << endl;
	cout << "Max element in array: " << MaxElement(arr2, size) << endl;
	cout << "Max element in array: " << MaxElement(arr3, size) << endl;
	cout << "Max element in array: " << MaxElement(arr4, size) << endl;
}
