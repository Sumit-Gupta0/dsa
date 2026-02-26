#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"Enter the vale of a : ";
    cin>>a;
    cout<<"Enter the vale of b : ";
    cin>>b;
    cout<<"Enter the vale of c : ";
    cin>>c;
    if (a>=b && a>=c)
    {
        cout<<"The value of a is maximunm : "<<a;
    }
    else if (b>=c && b>=a)
    {
        cout<<"The value of b is maximunm : "<<b;
    }
    else{
        cout<<"The value of c is maximunm : "<<c;

    }
    
    
}