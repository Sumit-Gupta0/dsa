#include<iostream>
using namespace std;

int main(){

    int n,sum = 0;
    cout<<"Enter value : ";
    cin>>n;
    for (int i = 0; i <= n; i++)
    {
        sum = i+sum;
    }
    cout<<sum;
    

    return 0;
}