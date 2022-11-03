//Write a program to accept a number N and print the first N terms of the Fibonacci series.

#include <iostream>

using namespace std;

int main()
{
	char selectAgain;

    start:
    char startValue;
	
	int num, n1 = 0, n2 = 1, nextTerm = 0;

    // Take number from user
    cout << "Enter a positive number: ";
    cin >> num;

    // displays the first two terms which is always 0 and 1
    cout << "Fibonacci Series: " << n1 << ", " << n2 << ", ";

    nextTerm = n1 + n2;

    while(nextTerm <= num) {
        cout << nextTerm << ", ";
        n1 = n2;
        n2 = nextTerm;
        nextTerm = n1 + n2;
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