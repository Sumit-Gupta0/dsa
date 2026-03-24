#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    // int var = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         if (j == n/2+1-i )
    //         {
    //             for (int k = n/2+1-i; k <= n/2+1-i+var; k++)
    //             {
    //                 cout << "  ";
    //                 j = k;
    //             }

    //             var = var + 2;
    //         }
    //         else
    //         {
    //             cout << "* ";
    //         }
    //     }
    //     cout << endl;
    // }

    int mid = n/2+1;
    for (int i = 0; i < mid; i++)
    {
        for (int j = 0; j < mid-i-1; j++)
        {
            cout<<"* ";
        }
        for (int k = 0; k < 2*i+1; k++)
        {
            cout<<"  ";
        }
        for (int l = 0; l < mid-i-1; l++)
        {
            cout<<"* ";
            
        }
        cout<<endl;
    }
    for (int i = 0; i < mid-1; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<"* ";
        }
        for (int k = 0; k < 2*(mid-i-1)-1; k++)
        {
            cout<<"  ";
        }
        for (int l = 0; l < i+1; l++)
        {
            cout<<"* ";
        }
        
        cout<<endl;
    }
    
    
}