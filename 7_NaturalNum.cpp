//Write a program to accept a number N and print the first N natural numbers.

#include <iostream>

using namespace std;

int main()
{
	char selectAgain;

    start:
    char startValue;

    int num , i;

    // Take number from user
    cout << "Enter any number : ";
    cin >> num;

    cout << "Natural numbers from 1 to " << num << " : " << endl;

    for(i = 1; i <= num; i++) 
    {
        cout << i << " " ;
    }
    cout<<endl;

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