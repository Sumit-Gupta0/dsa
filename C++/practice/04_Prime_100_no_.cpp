#include<iostream>
using namespace std;

int main(){
    // for (int i = 2; i < 10; i++)
    // {
    //     for (int j = 2; j < 10; j++)
    //     {
    //         if (i%j==0 && )
    //         {
    //             cout<<i<<endl;
    //         }
            
    //     }
        
    // }

    bool is_prime = true;
    for (int i = 0; i < 100; i++)
    {
        if (is_prime%i==0)
        {
            cout<<i;
        }
        
    }
    
}