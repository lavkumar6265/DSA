#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age :"<<endl;
    cin>>age;

    if(age<18 || age>=100 ){
        cout<<"you con't drive"<<endl;
    }

    else if(age == 18){
        cout<<"depend your choice"<<endl;
    }

    else{
        cout<<"you drive car"<<endl;
    }
    return 0;
}