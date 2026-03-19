#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (j<=n-i) 
            {
                cout<<" ";
            }
            else if (j==n-i+2 || j==n-i+4)
            {
                cout<<"!";
            }
            else{
                cout<<"*";
            }
        }
        for (int k = 0; k < i-1; k++)
        {
            if (k==n-i-2 || k==n-i || k==n-i+2)
            {
                cout<<"!";
            }
            else
            {
                cout<<"*";
            }    
        }

        cout<<endl;
    }
    
}