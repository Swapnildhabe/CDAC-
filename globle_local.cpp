#include<iostream>

using namespace std;
int x=10;
int main()
{
    int x=100;

    cout<<"The Globle value is"<<::x<<endl;
    cout<<"The local value is"<<x;
}