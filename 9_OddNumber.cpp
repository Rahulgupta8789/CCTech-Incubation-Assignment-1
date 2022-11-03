//Write a program to accept a number N and print the first N odd numbers.

#include <iostream>

using namespace std;

int main()
{
	char selectAgain;

    start:
    char startValue;
    int num;
	
    // Take number from user
	cout << "Enter any Numbers =  ";
	cin >> num;
	
	cout << "List of Odd Numbers from 1 to " << num << " are : "<<endl; 
	for(int i = 1; i <= num; i++)
  	{
  		if ( i % 2 != 0 )
  		{
  			cout << i <<" ";
		}	
  	}
    cout<<endl<<endl;

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