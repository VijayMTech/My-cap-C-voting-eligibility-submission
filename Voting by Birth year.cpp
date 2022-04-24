//*C++ program to check if the user is eligible for voting by entering the user's birth year
#include<iostream>
using namespace std;

int main()
{
    int curr_year=2022;
    int age;
    int  Birth_year; 
    cout<<"\nENTER YOUR BIRTH YEAR:";
    cin>> Birth_year;
    
    age = curr_year-Birth_year;
    
    std::cout << "YOUR AGE IS :" << age;
    
    if (age>=18)
    {
        cout<<"\nYOU ARE ELIGIBLE FOR VOTING!";
    }
    else
    {
            cout<<"\nYOU ARE NOT ELIGIBLE FOR VOTING!";
    }
return 0;
}
