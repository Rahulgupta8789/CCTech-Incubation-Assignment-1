//Write a program to accept a number and check if it is positive & negative.

#include <iostream>
using namespace std;

int main()
{
	char selectAgain;

    start:
    char startValue;

    float num;

    // Take number from user
    cout << "Enter the number to be checked : "<<endl;
    cin >> num;
    if (num >= 0)
        cout << num << " is a positive number."<<endl;
    else 
        cout << num << " is a negative number."<<endl;
	
    cout<<"Do you want to use the application again ? y or n : "<<endl;

    cin>>selectAgain;
    typeAgain:                //take goto statement Label
    if(selectAgain=='y' || selectAgain=='Y')
    {
        goto start;
    }
    else if(selectAgain=='n' || selectAgain=='N')
    {
        cout<<"Thank you for using our application !!..."<<endl;
    }
    else
    {
        cout<<"You have entered wrong value, please type Again..."<<endl;
        goto typeAgain;         //create Label
    }

	return 0;
}