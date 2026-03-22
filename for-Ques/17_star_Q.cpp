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
            int k = n/2;
            if (i==k || j==k)
            {
                cout<<"  ";   
            }
            else
            {
                cout<<"* ";
            }
            
        }
        cout<<endl;
    }
    
}