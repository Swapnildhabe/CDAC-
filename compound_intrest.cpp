#include<iostream>
using namespace std;

int main ()
{   float tamount=100;
    int year;
    cout<<"Enter The Total Vlaue of loan::";
    cin>>tamount;
    cout<<"Enter The How many year you want Loan::";
    cin>>year;
    int base_amount=tamount;
    for (int i = 1; i <= year; i++)
    {
        tamount=tamount+(tamount*.1);
    }
    cout<<"Total Intrest of "<<base_amount <<" is= "<<tamount;

    return 0;
}