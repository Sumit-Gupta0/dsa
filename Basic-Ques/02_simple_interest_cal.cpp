#include<iostream>
using namespace std;
int main(){
    int p, r, t, si;
    cout<<"Enter the of principle : ";
    cin>>p;
    cout<<"Enter the of rate : ";
    cin>>r;
    cout<<"Enter the of time : ";
    cin>>t;
    si = p*r*t/100;
    cout<<"Simple interest is : "<<si;
}