#include <iostream>
using namespace std;

int main() {

	/*const int USA = 1;
	const int France = 33;
	const int Ukraine = 380;
	const int Italy = 39;
	const int Australia = 61;*/

	//enum countries {USA = 1, France = 33,
	//    Ukraine = 380, Italy = 39, Australia = 61
	//};
	//cout << Ukraine << endl;
	//cout << USA << endl;

	//enum coins {
	//    penny = 1, nickel = 5, dime = 10,
	//    quarter = 25, half = 50, dollar_coin = 100
	//};
	//int coin;
	//cout << "Enter value of American coin: ";
	//cin >> coin;
	//switch (coin)
	//{
	//case penny:cout << "Penny is 1 cent" << endl;
	//    break;
	//case nickel:cout << "Nickel is 5 cent" << endl;
	//    break;
	//case dime:cout << "Dime is 10 cent" << endl;
	//    break;
	//case quarter:cout << "Quarter is 15 cent" << endl;
	//    break;
	//case half:cout << "Half is 50 cent" << endl;
	//    break;
	//case dollar_coin:cout << "Dollar is 100 cent" << endl;
	//    break;
	//default:cout << "No coin" << endl;
	//    break;

	//}

	/*while (true) {

	}
	do {

	} while (true);
	for (size_t i = 0; i < length; i++)
	{

	}*/
	//int counter = 0;
	//while (counter < 15) {
	//	counter++;
	//	cout << "I did one " << counter << " set of squats" << endl;
	//}

	//int seats = 20;
	//do
	//{
	//	++seats;
	//	cout << "I did one " << seats << " set of squats" << endl;
	//} while (seats < 15);

	float a, b, res;
	char key;


	//while (key != 'e')
	//{
	//	switch (key)
	//	{
	//	default:
	//		cout << "Error choice!!!!" << endl;
	//		break;
	//	case 'e':
	//		res = a + b;
	//		cout << "Have a nice day" << endl;
	//		break;
	//	case '+':
	//		res = a + b;
	//		cout << "Resualt = " << res << endl;
	//		break;
	//	case '-':
	//		res = a - b;
	//		cout << "Resualt = " << res << endl;
	//		break;
	//	case '*':
	//		res = a * b;
	//		cout << "Resualt = " << res << endl;
	//		break;
	//	case '/':
	//		res = a / b;
	//		cout << "Resualt = " << res << endl;
	//		break;

	//	}
	//	cout << "Enter a : "; cin >> a;
	//	cout << "Enter b : "; cin >> b;
	//	cout << "\tChoose the operation : " << endl;;
	//	cout << " [+] - add number" << endl;
	//	cout << " [-] - sub number" << endl;
	//	cout << " [*] - multy number" << endl;
	//	cout << " [/] - div number" << endl;
	//	cout << " [e] - exit" << endl;
	//	cin >> key;
	//}

	//do
	//{
	//	cout << "Enter a : "; cin >> a;
	//	cout << "Enter b : "; cin >> b;
	//	cout << "\tChoose the operation : " << endl;;
	//	cout << " [+] - add number" << endl;
	//	cout << " [-] - sub number" << endl;
	//	cout << " [*] - multy number" << endl;
	//	cout << " [/] - div number" << endl;
	//	cout << " [e] - exit" << endl;
	//	cin >> key;
	//	switch (key)
	//	{
	//	default:
	//		cout << "Error choice!!!!" << endl;
	//		break;
	//	case 'e':
	//		res = a + b;
	//		cout << "Have a nice day" << endl;
	//		break;
	//	case '+':
	//		res = a + b;
	//		cout << "Resualt = " << res << endl;
	//		break;
	//	case '-':
	//		res = a - b;
	//		cout << "Resualt = " << res << endl;
	//		break;
	//	case '*':
	//		res = a * b;
	//		cout << "Resualt = " << res << endl;
	//		break;
	//	case '/':
	//		res = a / b;
	//		cout << "Resualt = " << res << endl;
	//		break;
	//	}

	//} while (key != 'e');

	//for (int i = 0; i < 10; i++)
	//{
	//	cout << i << " ";
	//}
	//cout << endl;
	//for (int i = 0; i <= 10; i++)
	//{
	//	cout << i << " ";
	//}

	//int i;
	//for (i = 1; i <= 10; i += 2)
	//{
	//	cout << i << " ";
	//}
	//float x = 1;
	//for (; x <= 2; i+=0.2)
	//{
	//	cout << x << " ";
	//}
	//cout << endl;
	//for (int i = 0; i < 5;)
	//{
	//	cout << x << " ";
	//	i++;
	//}
	//for (int i = 0; i++;)
	//{
	//	cout << i << " ";
	//	if (i == 5)
	//		break;
	//}

	//int magicNumber = 2;
	//cout << "=======================" << endl;
	//cout << "\t\tMy magic number between 1 and 10" << endl;
	//cout << "=======================" << endl;
	//int user = 0;
	//for (int i = 1; i <= 5; i++)
	//{
	//	cout << "Your number??? --> "; cin >> user;
	//	if (user == magicNumber)
	//	{
	//		cout << "Congratulation!!!" << endl;
	//		break;
	//	}
	//	else
	//	{
	//		cout << "Thats not my number!" << endl;
	//	}
	//	if (i == 5) {
	//		cout << "You lose! Try again later" << endl;
	//	}
	//}
	//task1
	//int i = 1;
	//while (i<=100)
	//{		
	//	cout << i << " ";
	//	i++;
	//}
	//task2
	//int i = 0;
	//int count = 0;
	//while (i <= 200) 
	//{
	//	i += 2;
	//	cout << i << " ";
	//	
	//	if (i) {
	//		count += 1;
	//	}
	//	
	//}
	//cout << "Number: "<< count << endl;
	//TASK3
	//int range;
	//int i = 0;
	//int number;
	//int summa = 0;
	//cout << "Enter range: " << endl; cin >> range;
	//
	//while (i <= range) {
	//	i++;
	//	cout << "Enter: " << i << endl; cin >> number;
	//	if (number % 2 == 0)
	//	{
	//		summa += number;
	//	}
	//	
	//	
	//}
	//TASK4
	/*int hour,times;
	times = 0;
	hour = 12;
	for (int i = 1; i <= hour; i++)
	{
		cout << i << endl;
		times += i;
	}
	cout << "Clock rang"<<times << endl;*/
	//task5
	
	int number;
	int summa = 0;
	for (int i = 0;; i++)
	{
		cout << "Enter number: " << endl; cin >> number;
		summa += number;
		if (number == 0) {
			break;
		}
	}
	cout << summa << endl;
	cout << summa << endl;
	cout << summa << endl;
	cout << summa << endl;
	cout << summa << endl;
	cout << summa << endl;
	
	



}