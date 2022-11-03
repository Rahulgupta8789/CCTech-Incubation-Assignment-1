//Write a program to accept 2 numbers A,B and check if A is divisible by B.

#include <iostream>
using namespace std;

int main()
{
	char selectAgain;

    start:
    char startValue;

    int A,B;
    int first_Num = A;
    int second_Num = B;
    
    // Take number from user
    cout << "Enter the First numbers A : ";
    cin >> A ;

    cout << "Enter the Second numbers B : ";
    cin >> B ;
    
    //To check Divisibility
    if (A % B == 0)
    {
        cout << "first number " << A
             << " is divisible by second number " << B <<endl;
    }       
    else
    {
        cout << "First number " << A 
             << " is not divisible by second number "
             <<B<<endl;
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