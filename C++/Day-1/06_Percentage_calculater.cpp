#include<iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cout<<"Enter the marks of a :";
    cin>>a;
    cout<<"Enter the marks of b :";
    cin>>b;
    cout<<"Enter the marks of c :";
    cin>>c;
    d = a+b+c;
    cout<<"Total marks Out of :"<<d<<endl;
    cout<<"Average :"<<(d/3)<<"%"<<endl;
}