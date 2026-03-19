#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ()
            {
                /* code */
            }
            
        }
        
        for (int k = 0; k < n-3; k++)
        {
            if (k<=n%(i+1))
            {
                cout<<"_";
            }
            else
            {
                cout<<"*";
            }
            
        }
        cout<<endl;
    }
    
}