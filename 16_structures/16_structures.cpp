#include <iostream>
using namespace std;

struct Date
{
	int day;
	int month;
	int year;
	char month_name[15];
};
struct Worker
{
	char name[20];
	char surname[20];
	char position[20];
	/*int day;
	int month;
	int year;
	char month_name[15];*/
	double salary;
	Date birthdate;
	Date hiredate;

};
Worker InputWorker(Worker worker)
{
	cout << "Enter name: "; cin >> worker.name;
	cout << "Enter surname: "; cin >> worker.surname;
	cout << "Enter position: "; cin >> worker.position;
	cout << "Enter salary: "; cin >> worker.salary;

	cout << "Bithdate day: "; cin >> worker.birthdate.day;
	cout << "Bithdate month: "; cin >> worker.birthdate.month;
	cout << "Bithdate year: "; cin >> worker.birthdate.year;

	cout << "Hiredate day: "; cin >> worker.hiredate.day;
	cout << "Hiredate month: "; cin >> worker.hiredate.month;
	cout << "Hiredate year: "; cin >> worker.hiredate.year;
	return worker;
}
struct WashingMachine
{
	char company[20];
	char color[20];
	int width;
	int height;
	int high;
	int power;
	int speed;
	int temp;


};
struct Iron
{
	char company[20];
	char model[20];
	char color[20];
	int min_temperature;
	int max_temperature;
	bool couple;
	int power;
};
struct Boiler
{
	char company[20];
	char color[20];
	int power;
	int amount;
	int temperature;
	
};
struct Number
{
	char first[3];
	int second;
	char third[3];
};
struct Car
{
	char color[20];
	char model[20];
	Number number;
};
void ShowWorker(Worker& worker)
{
	cout << "Name: " << worker.name << endl;
	cout << "Surname: " << worker.surname << endl;
	cout << "Position: " << worker.position << endl;
	cout << "Birthdate: " << worker.birthdate.day <<"/"
		<<worker.birthdate.month<<"/"<<worker.birthdate.year
		<< endl;
	cout << "Hiredate: " << worker.hiredate.day << "/"
		<< worker.hiredate.month << "/" << worker.hiredate.year
		<< endl;
}
void ShowWashingMachine(WashingMachine& machine)
{
	cout << "Company: " << machine.company << endl;
	cout << "Color: " << machine.color << endl;
	cout << "Width: " << machine.width << endl;
	cout << "Height: " << machine.height << endl;
	cout << "High: " << machine.high << endl;
	cout << "Power: " << machine.power << endl;
	cout << "Speed: " << machine.speed << endl;
	cout << "Temp: " << machine.temp << endl;
	
}
void ShowCar(Car& car)
{
	cout << "Color: " << car.color << endl;
	cout << "Model: " << car.model << endl;
	cout << "Number: " << car.number.first << car.number.second<<
		car.number.third<<endl;
	
	
}
void ShowIron(Iron& iron)
{
	cout << "Company: " << iron.company << endl;
	cout << "Model: " << iron.model << endl;
	cout << "Color: " << iron.color << endl;
	cout << "Min temperature: " << iron.min_temperature << endl;
	cout << "Max temperature: " << iron.max_temperature << endl;
	cout << "Couple: " << iron.couple << endl;
	cout << "Power: " << iron.power << endl;
	
}
void ShowBoiler(Boiler& boiler)
{
	cout << "Company: " << boiler.company << endl;
	cout << "Color: " << boiler.color << endl;
	cout << "Power: " << boiler.power << endl;
	cout << "Amount: " << boiler.amount << endl;
	cout << "Temperature: " << boiler.temperature << endl;
	
	
}

WashingMachine InputWashingMachine(WashingMachine machine)
{
	cout << "Enter company: "; cin >> machine.company;
	cout << "Enter color: "; cin >> machine.color;
	cout << "Enter width: "; cin >> machine.width;
	cout << "Enter height: "; cin >> machine.height;
	cout << "Enter high: "; cin >> machine.high;
	cout << "Enter power: "; cin >> machine.power;
	cout << "Enter speed: "; cin >> machine.speed;
	cout << "Enter temp: "; cin >> machine.temp;

	
	return machine;
}
Iron InputIron(Iron iron)
{
	cout << "Enter company: "; cin >> iron.company;
	cout << "Enter model: "; cin >> iron.model;
	cout << "Enter color: "; cin >> iron.color;
	cout << "Enter min temperature: "; cin >> iron.min_temperature;
	cout << "Enter max temperature: "; cin >> iron.max_temperature;
	cout << "Enter couple: "; cin >> iron.couple;
	cout << "Enter power: "; cin >> iron.power;

	
	return iron;
}
Car InputCar(Car car)
{
	cout << "Enter color: "; cin >> car.color;
	cout << "Enter model: "; cin >> car.model;
	cout << "Enter the first part of the number: "; cin >> car.number.first;
	cout << "Enter the second part of the number: "; cin >> car.number.second;
	cout << "Enter the third part of the number: "; cin >> car.number.third;
	

	
	return car;
}
Boiler InputBoiler(Boiler boiler)
{
	cout << "Enter company: "; cin >> boiler.company;
	cout << "Enter color: "; cin >> boiler.color;
	cout << "Enter power: "; cin >> boiler.power;
	cout << "Enter amount: "; cin >> boiler.amount;
	cout << "Enter temperature: "; cin >> boiler.temperature;


	
	return boiler;
}


int main()
{
	int number = 100;
	Date birthdate = { 25,12,2000,"December" };
	cout << "--------------- My Birthday ---------------------" << endl;
	cout << "Day: "<<birthdate.day;
	cout << "Month: "<<birthdate.month;
	cout << "Year: "<<birthdate.year;
	cout << "Month name: "<<birthdate.month_name;
	/*Date friend_birthday;
	cout << "Enter day: "; cin >> friend_birthday.day;
	cout << "Enter month: "; cin >> friend_birthday.month;
	cout << "Enter year: "; cin >> friend_birthday.year;
	cout << "Enter month name: "; cin >> friend_birthday.month_name;
	cout << "--------------- Friend Birthday ---------------------" << endl;
	cout << "Day: " << friend_birthday.day;
	cout << "Month: " << friend_birthday.month;
	cout << "Year: " << friend_birthday.year;
	cout << "Month name: " << friend_birthday.month_name;*/

	Worker worker = { "Oleg","Kizyak","manager",117000,{11,5,1999},{2,2,2022} };
	ShowWorker(worker);


	/*Worker newWorker = {};
	newWorker = InputWorker(newWorker);
	ShowWorker(newWorker);*/

	Date event = { 26,10,2026,"October" };
	cout << event.day << endl;
	cout << event.month << endl;
	cout << event.year << endl;
	cout << event.month_name << endl;

	Date new_event;
	new_event = event;
	cout << new_event.day << endl;
	cout << new_event.month << endl;
	cout << new_event.year << endl;
	cout << new_event.month_name << endl;

	Date* ptr = nullptr;
	ptr = &event;
	cout << ptr->day << endl;
	cout << (*ptr).month << endl;
	cout << ptr->year << endl;
	cout << ptr->month_name << endl;

	int a;
	char b;
	double c;
	int* p;
	cout << "sizeof int --> " << sizeof(int) << endl;
	cout << "sizeof int --> " << sizeof(a) << endl;
	cout << "sizeof char --> " << sizeof(b) << endl;
	cout << "sizeof double --> " << sizeof(c) << endl;
	cout << "sizeof p --> " << sizeof(p) << endl;
	cout << "sizeof date --> " << sizeof(event) << endl;
	cout << "sizeof date --> " << sizeof(worker) << endl;

	//1
	//WashingMachine machine = { "samsung","gray",50,50,50,22,15,12 };
	//ShowWashingMachine(machine);

	//WashingMachine newMachine = {};
	//newMachine = InputWashingMachine(newMachine);
	//ShowWashingMachine(newMachine);
	//2
	//Iron iron = { "hp","aewg9w","pink", 6,100,1,55 };
	//ShowIron(iron);

	//Iron newIron = {};
	//newIron = InputIron(newIron);
	//ShowIron(newIron);
	//3
	//Boiler boiler = { "apple","red",10,5,100 };
	//ShowBoiler(boiler);

	//Boiler newBoiler = {};
	//newBoiler = InputBoiler(newBoiler);
	//ShowBoiler(newBoiler);
	//4
	Car car = { "Black","Tesla Y",{"BK",3425,"KL"}};
	ShowCar(car);

	Car newCar = {};
	newCar = InputCar(newCar);
	ShowCar(newCar);
	ShowCar(newCar);


}



