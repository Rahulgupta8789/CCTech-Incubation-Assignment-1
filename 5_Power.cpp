//Write a program to accept 2 numbers a A,B and calculate A ^ B(A to the powe B). 

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	char selectAgain;

    start:
    char startValue;

    float A, B;
    float base = A;
    float exponent = B;
    float result;

    // Take number from user
    cout << "Enter base Value A :  ";
    cin >> A ;

    cout<<"Enter exponent Value B : ";
    cin >> B;

    result = pow(A, B);

    cout <<"Result : " << A << "^" << B << " = " << result <<endl;

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