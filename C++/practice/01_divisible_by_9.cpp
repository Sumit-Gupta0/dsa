#include<iostream>
using namespace std;

int main(){
    int num, sum, a, b, c ;

    cout<<"Enter the value :";
    cin>>num;
    a = num%10;
    b = (num%100)/10;
    c = (num%1000)/100;
    
    sum = a+b+c;
    if (sum%9==0)
    {
        cout<<"Yes, It divisible by 9";
    }
    else{
        cout<<"Not divisible by 9";
        
    }
    
}