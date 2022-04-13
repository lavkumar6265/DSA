#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    // constant is a unchengebal
    // const int a = 5;
    // cout << "the value of a is : " << a << endl;
    // a = 8;
    // cout << "the value of a is : " << a;

    // manipuletor
    int b = 2, c= 87, d = 123;
cout<<"the vale of b is :"<<setw(5)<<b<<endl;
cout<<"the vale of b is :"<<setw(5)<<c<<endl;
cout<<"the vale of b is :"<<setw(5)<<d<<endl;

//operetor presitance 

cout<<(5*b)+87-32;

    return 0;
}