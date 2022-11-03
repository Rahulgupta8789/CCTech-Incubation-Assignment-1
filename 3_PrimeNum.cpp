//Write a program to accept a number and check if it is prime.

#include <iostream>
using namespace std;

int main()
{
	char selectAgain;

    start:
    char startValue;

    int num, i;
    bool is_prime = true;
    cout<<"Enter a Number: ";    // Take number from user
    cin>>num;

    // 0 and 1 are not prime numbers
    if (num == 0 || num == 1) 
    {
        is_prime = false;
    }

    for(i=2; i<num/2; i++)
    {
        if(num%i == 0)
        {
            is_prime = false;
            break;
        }
    }
    if(is_prime)
        cout<<"\nIt is a Prime Number"<<endl;
    else
        cout<<"\nIt is not a Prime Number"<<endl;
    
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