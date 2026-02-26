#include<iostream>
using namespace std;

int main(){
    int l, b, area, peri;
    cout<<"Length of Rectangle :";
    cin>>l;
    cout<<"Breadth of Rectangle :";
    cin>>b;
    area = l*b;
    cout<<"Area of Rectangle :"<<area<<endl;
    peri = (l+b)*2;
    cout<<"Perimeter of Rectangle :"<<peri<<endl;
}