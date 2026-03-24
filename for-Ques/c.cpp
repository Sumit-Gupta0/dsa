#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter : ";
    cin>>n;

    int rev = 0;
    int count = 0;
    while (n>0)
    {
        int rem = n%10;
        int rev = rev*10+rem;
        count++;
        n= n/10;
    }
    cout<<rev;


    
}