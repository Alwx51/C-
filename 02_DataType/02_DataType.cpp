
#include <iostream>
using namespace std;

int main()
{
    int age = 15;
    int Age = 55;
    int age1 = 14;
    int age_of_man = 33;
    int ageOfMan = 78;
    const float pi = 3.14;
    double d = 3.33;
    cout << age << endl;
    cout << age << endl;
    cout << "Age: " << age << "Age of name" << ageOfMan << endl;
    
    //count hours in 2000 years
    //int countHours_In2000_Years;//empty variable
    //const int dayIn2000Years = 366;
    //int HourInDay = 24;
    //countHours_In2000_Years = dayIn2000Years * HourInDay;
    //cout << "Hour in 2000 year: " << countHours_In2000_Years << endl;

    //float discount = 0.05;
    //int count = 10;
    //float costPrice = 35;
    //cout << "Enter count products: ";
    //cin >> count;
    //cout << "Enter cost: ";
    //cin >> costPrice;

    //float price = count * costPrice - discount * count * costPrice;
    //cout << "You need to pay: " << price << "grn" << endl;

    //int a;
    //cout << "Enter number: ";
    //cin >> a;
    //cout << "a = " << a << endl;
    
    //task1
    /*int diagonal;
    float inch = 2.54;
    cout << "TV screen size (inch): ";
    cin >> diagonal;
    int diagonalCm = diagonal * inch;
    cout << "TV screen size: " << diagonalCm << endl;*/

    //task2
    int kg = 1000;
    int days = 30;
    int hamsterInOneDay;
    cout << "Daily feed consumption: ";
    cin >> hamsterInOneDay;
    int hamsterIn30Days = hamsterInOneDay * days / kg;
    cout << "Your hamster eats: " << hamsterIn30Days << "kg" << endl;
}