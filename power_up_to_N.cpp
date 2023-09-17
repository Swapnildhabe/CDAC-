#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int value=10;
    int power=3;
    cout<<"Enter The Base Number::";
    cin>>value;
    cout<<"Enter The Number For Power::";
    cin>>power;
    int Total=value;
    for (int i = 1; i < power; i++)
    {
        value=value*Total;
    }
    cout<<"The Base Number of "<<Total<<" Power is "<<power<<"Total is ::"<<value;
}