#include<iostream>
using namespace std;

int main(){
    int n; 
    cout<<"Enter a number : ";
    cin>>n;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i ; j++)
    //     {
    //         cout<<" ";
    //     }
    //     for (int k = i; k <= i; k++)
    //     {
    //         cout<<"*";
    //     }
    //     for (int l = 0; l < n; l++)
    //     {
    //         if (l == n-i)
    //         {
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
        
    //     cout<<endl;
        
        
    // }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i==j || j==n-i-1)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
        
    }
    
    
}