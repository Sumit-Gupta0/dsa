#include<iostream>
using namespace std;

int main(){
    int marks = 4,a,b=0;
    for (int i = 1; i <= marks; i++)
    {
        cout<<"subject "<<i<<":";
        cin>>a;
        b=b+a;
    }
    cout<<b;
    cout<<"Percentage : "<<b/marks;
    
    
}