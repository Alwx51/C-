#include <iostream>
using namespace std;

int main()
{
    // operators : + - * / = != == < > <= >= %
    // Унарні 5 -5 (-) ++ --
    // Бінарні + - * / = != == < > <= >= %
    // Тернарні

    /*int a = 5, b = 4;
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl; 
    cout << a / b << endl;
    cout << a % b << endl;*/

    ////Інкремент і декремент
    //int a = 2;
    //cout << "a = " << a << endl;
    //a = a + 1;
    //cout << "a = " << a << endl;
    //a++; // === a = a + 1 postfix form increment
    //cout << "a = " << a << endl;
    //++a; // prefix form increment
    //cout << "a = " << a << endl;

    //a = a - 1;
    //cout << "a = " << a << endl;
    //a--; // === a = a - 1 postfix form increment
    //cout << "a = " << a << endl;
    //--a; // === a = a - 1 prefix form increment
    //cout << "a = " << a << endl;

    //int c = 5;
    //cout << c++ << endl;//6 ------>
    //cout << ++c << endl;// <------
    //cout << c << endl;
    ////Звужуюче перетворення
    ////Неявне перетворення
    //int A = 3.33;
    //cout << "A = " << A << endl;
    ////Розширюючк перетворення
    //double pi = 3.14;
    //cout << "pi = " << pi << endl;

    //unsigned int salary = 300000000000000;
    //cout << salary << endl;

    ////Явне перетворення
    //double num = 37.4;
    //float num2 = (int)num;

    //
    //int number1, number2;
    //cout << "Enter number 1: ";
    //cin >> number1;
    //cout << "Enter number 2: ";
    //cin >> number2;
    //if (number2 == 0) {
    //    cout << "You cant divide by zero!" << endl;
    //}
    //else
    //{
    //    float res = (float)number1 / number2;
    //    cout << "Result: " << res << endl;
    //}
    //int day;
    //cout << "Enter number day: ";
    //cin >> day;
    //if (day == 1) {
    //    cout << "Monday" << endl;
    //}
    //else if (day == 2) {
    //    cout << "Tuesday" << endl;
    //}
    //else if (day == 3) {
    //    cout << "Wednesday" << endl;
    //}
    //else{
    //    cout << "Error number" << endl;
    //}
    ////тернарний оператор
    ////umova?true:false
    //(number2 == 0) ? cout << "Error" << endl : cout << "Res = " << number1 / number2;
    //cout << (number2 == 0) << endl;

    /*float a, b, res;
    char key;
    cout << "Enter a: " << endl; cin >> a;
    cout << "Enter b: " << endl; cin >> b;   
    cout << "\tChoose the operation: " << endl;
    cout << "[+] - add number" << endl;
    cout << "[-] - sub number" << endl;
    cout << "[*] - multy number" << endl;
    cout << "[/] - div number" << endl;
    cin >> key;
    if (key == '+') {
        res = a + b;
        cout << "Result: " << res << endl;
    }
    else if (key == '-') {
        res = a - b;
        cout << "Result: " << res << endl;
    }
    else if (key == '*') {
        res = a * b;
        cout << "Result: " << res << endl;
    }
    else if (key == '/') {
        res = a / b;
        cout << "Result: " << res << endl;
    }
    else {
        cout << "Error choice!" << endl;
    }

    float a, b, res;
    char key;
    cout << "Enter a: " << endl; cin >> a;
    cout << "Enter b: " << endl; cin >> b;
    cout << "\tChoose the operation: " << endl;
    cout << "[+] - add number" << endl;
    cout << "[-] - sub number" << endl;
    cout << "[*] - multy number" << endl;
    cout << "[/] - div number" << endl;
    cin >> key;
    switch (key)
    {
    case '+':
        res = a + b;
        cout << "Result: " << res << endl;
        break;
    case '-':
        res = a - b;
        cout << "Result: " << res << endl;
        break;
    case '*':
        res = a * b;
        cout << "Result: " << res << endl;
        break;
    case '/':
        res = a / b;
        cout << "Result: " << res << endl;
        break;
    default:
        cout << "Error choice!" << endl;
        break;
    }
    int day = 5;
    cout << "Enter number day: ";
    cin >> day;
    switch (day) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        cout << "Working day " << endl;
    }*/
    
    //task1 if
    //int country;
    //cout << "Enter country(1-UA, 2-PL, 3-GER, 4-USA, 5-FR)" << endl; cin >> country;
    //if (country == 1) {
    //    cout << "Kyiv" << endl;
    //}
    //else if (country == 2) {
    //    cout << "Warshava" << endl;
    //}
    //else if (country == 3) {
    //    cout << "Berlin" << endl;
    //}
    //else if (country == 4) {
    //    cout << "Washington" << endl;
    //}
    //else if (country == 5) {
    //    cout << "Paris" << endl;
    //}
    //else {
    //    cout << "Wrong number" << endl;
    //}
    //task1 switch
    //int country;
    //cout << "Enter country(1-UA, 2-PL, 3-GER, 4-USA, 5-FR)" << endl; cin >> country;
    //switch (country) {
    //case 1:
    //    cout << "Kyiv" << endl;
    //    break;
    //case 2:
    //    cout << "Warshava" << endl;
    //    break;
    //case 3:
    //    cout << "Berlin" << endl;
    //    break;
    //case 4:
    //    cout << "Washington" << endl;
    //    break;
    //case 5:
    //    cout << "Paris" << endl;
    //    break;
    //default:
    //    cout << "Error choice!" << endl;
    //    break;
    //}
    //task2 if
    //int day;
    //cout << "Enter day of week: " << endl; cin >> day;
    //if (day == 1) {
    //    cout << "It's a workday" << endl;
    //}
    //else if (day == 2) {
    //    cout << "It's a workday" << endl;
    //}
    //else if (day == 3) {
    //    cout << "It's a workday" << endl;
    //}
    //else if (day == 4) {
    //    cout << "It's a workday" << endl;
    //}
    //else if (day == 5) {
    //    cout << "It's a workday" << endl;
    //}
    //else if (day == 6) {
    //    cout << "It is a day off" << endl;
    //}
    //else if (day == 7) {
    //    cout << "It is a day off" << endl;
    //}
    //else{
    //    cout << "Error number" << endl;
    //}
    //task2 switch
    //int day;
    //cout << "Enter number day: ";
    //cin >> day;
    //switch (day) {
    //case 1:
    //case 2:
    //case 3:
    //case 4:
    //case 5:
    //    cout << "Working day " << endl;
    //    break;
    //case 6:
    //case 7:
    //    cout << "It is a day off" << endl;
    //    break;
    //default:
    //    cout << "Error choice!" << endl;
    //    break;
    //}
    //task3 if
    //int way;
    //cout << "Enter way(1-north,2-south,3-west,4-east): " << endl; cin >> way;
    //if (way == 1) {
    //    cout << "south" << endl;
    //}
    //else if (way == 2) {
    //    cout << "north" << endl;
    //}
    //else if (way == 3) {
    //    cout << "east" << endl;
    //}
    //else if (way == 4) {
    //    cout << "west" << endl;
    //}
    //else {
    //    cout << "Error choice!" << endl;
    //}
    //task3 switch
    /*int way;
    cout << "Enter way(1-north,2-south,3-west,4-east): " << endl; cin >> way;
    switch (way) {
    case 1:
        cout << "south" << endl;
        break;
    case 2:
        cout << "north" << endl;
        break;
    case 3:
        cout << "east" << endl;
        break;
    case 4:
        cout << "west" << endl;
        break;
    default:
        cout << "Error choice!" << endl;
        break;
    }*/
    //task4 if
    /*int animal;
    cout << "Enter choice(1-cat,2-dog,3-mouse,4-pigeon,5-snake): " << endl; cin >> animal;
    if (animal == 1) {
        cout << "Your animal is predator" << endl;
    }
    else if (animal == 2) {
        cout << "Your animal is predator" << endl;
    }
    else if (animal == 3) {
        cout << "Your animal is herbivore" << endl;
    }
    else if (animal == 4) {
        cout << "Your animal is herbivore" << endl;
    }
    else if (animal == 5) {
        cout << "Your animal is predator" << endl;
    }
    else {
        cout << "Error choice!" << endl;
    }*/
    //task4 switch
    int animal;
    cout << "Enter choice(1-cat,2-dog,3-mouse,4-pigeon,5-snake): " << endl; cin >> animal;
    switch (animal) {
    case 1:
        cout << "Your animal is predator" << endl;
        break;
    case 2:
        cout << "Your animal is predator" << endl;
        break;
    case 3:
        cout << "Your animal is herbivore" << endl;
        break;
    case 4:
        cout << "Your animal is herbivore" << endl;
        break;
    case 5:
        cout << "Your animal is predator" << endl;
        break;
    default:
        cout << "Error choice!" << endl;
        break;
    }
}

