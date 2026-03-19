#include<iostream>
using namespace std;

int main(){
    int n = 0;
    cout<<"Enter a number : ";
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j<=n-i || j==n-i+2 || j==n-i+4)
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }
            
        }
        for (int k = 0; k < i-1; k++)
        {
            if (k==n-i+2 || k==n-i || k==n-i-2)
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }
            
            
        }
        
        cout<<endl;
        
    }
    return 0;
}