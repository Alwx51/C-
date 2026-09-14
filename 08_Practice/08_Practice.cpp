#include <iostream>
using namespace std;

void showSquare(int N, int K);
void factorial(int num);
void Simple(int num);
void cube(int num);
void max(int a, int b);
bool showTrue(int num);
int main()
{
   //1
    showSquare(4, 5);
    //2
    factorial(5);
    //3
    Simple(7);
    //4
    cube(3);
    //5
    max(4, 7);
    //6
    int num;
    cout << "Enter number: " << endl; cin >> num;
    showTrue(num);


}
void showSquare(int N,int K)
{
    for (int i = 0; i < N; i++)
    {

        for (int j = 0; j < K; j++)
        {
            cout << "* ";
            
            

        }
        cout << endl;
    }
}
void factorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
        
    }
    cout << fact << endl;
}
void Simple(int num)
{
    bool simple = true;

    if (num < 2)
        simple = false;

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            simple = false;
            break;
        }
    }

    if (simple)
        cout << "Number is simple"<<endl;
    else
        cout << "Number isnt simple"<<endl;
}
void cube(int num)
{
    num = num * num * num;
    cout << "cube = " << num << endl;
}
void max(int a,int b)
{
    int max;
    if (a<b)
    {
        max = b;
    }
    else if (a>b)
    {
        max = b;
    }
    cout << "Max = " << max << endl;
}
bool showTrue(int num)
{
    
    if (num<0)
    {
        cout << "False" << endl;
        return true;
    }
    else if(num>0)
    {
        cout << "True" << endl;
        return false;
    }
    
}
