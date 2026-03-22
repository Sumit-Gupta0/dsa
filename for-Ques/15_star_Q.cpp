#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i*2; j++)
        {
            cout<<"  ";
        }
        for (int k = 0; k < n-i; k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    // for (int i = 1; i < n; i++)
    // {
    //     for (int j = 0; j < (n-i-1)*2; j++)
    //     {
    //         cout<<" ";
    //     }
    //     for (int k = 0; k <= i; k++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    for (int i = n-2; i >= 0; i--)
    {
        for (int j = 0; j < i*2; j++)
        {
            cout<<"  ";
        }
        for (int k = 0; k < n-i; k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}