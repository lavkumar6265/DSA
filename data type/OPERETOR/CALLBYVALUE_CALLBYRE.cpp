#include <iostream>
using namespace std;

int swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int reswap(int &x,int &y){
    int temp = x;
    x = y;
    y = temp;
}
int main()
{
    int a = 22, b = 44;
    cout << "the value of before run swap function " << a <<"  "<< b << endl;
    // swap(&a, &b);
    reswap(a,b);
    cout << "the value of after run swap function" << a <<"  "<< b << endl;

    return 0;
}