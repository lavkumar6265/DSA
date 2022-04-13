#include<iostream>
using namespace std;

inline int produse(int a , int b){
    return a*b;
}
float mydef(int mony , float intrest = 1.09){
    return mony * intrest;
}
int main(){
    // int a,b;
    // cout<<"Enter a value a and b "<<endl;
    // cin>>a>>b;
    int many = 6000;
    cout<<"all mony "<<mydef(many)<<endl;
    cout<<"all this monys is  a "<<mydef(10000,3.0);
    // cout<<"the value of a and b is"<<produse(a,b)<<endl;
    // cout<<"the value of a and b is"<<produse(a,b)<<endl;
    // cout<<"the value of a and b is"<<produse(a,b)<<endl;
    // cout<<"the value of a and b is"<<produse(a,b)<<endl;
    // cout<<"the value of a and b is"<<produse(a,b)<<endl;
    // cout<<"the value of a and b is"<<produse(a,b)<<endl;
}