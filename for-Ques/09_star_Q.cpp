#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (j<=n-i-1)
            {
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        for (int k = 1; k <= i; k++)
        {
            cout<<"*";
        }
        
        cout<<endl;
        
    }
    
}