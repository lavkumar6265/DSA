#include<iostream>
using namespace std;
int sum(int  , int );
void g(void);

int main(){
    int num1,num2;

    cout<<"Enter a first number :"<<endl;
    cin>>num1;

    cout<<"Enter a second number :"<<endl;
    cin>>num2;
    sum(num1,num2);
    g();
    return 0;
}

int sum(int a , int b){
    int c;
    c = a+b;
    cout<<"the sum is :"<<c<<endl;
}
void g(void){
    cout<<"good morning"<<endl;
}