//Write a program to accept a number N and calculate N!.

#include <iostream>

using namespace std;

int main()
{
	char selectAgain;

    start:
    char startValue;

    int num;
    long fact = 1.0;

    // Take number from user
    cout << "Enter a positive integer : ";
    cin >> num;

    if (num < 0)
    {
        cout << "Error! Factorial of a negative number doesn't exist."<<endl;
    }
    else 
    {
        for(int i = 1; i <= num; ++i) 
        {
            fact *= i;
        }
        cout << "Factorial of " << num <<"!"<< " = " << fact <<endl;    
    }

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