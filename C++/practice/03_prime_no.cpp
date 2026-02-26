#include<iostream>
using namespace std;

int main(){

    int num;
    cin>>num;

    for (int i = 2; i <= num; i++)
    {
        if (i%num==0)
        {
            cout<<"its a prime ";
        }
    }
    cout<<"not prime";
        
}