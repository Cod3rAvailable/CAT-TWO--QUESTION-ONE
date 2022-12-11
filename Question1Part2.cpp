#include <iostream>
using namespace std;
int main() {
    int num, num1, num2, num3;

    cout<< "Enter the First Number: " <<endl;
    cin >> num1;

    cout << "Enter the Second Number: " <<endl;
cin >> num2;

cout << "Enter the Third Number: " <<endl;
cin >> num3; 

if (num1>=num2 &&num1 >=num3)
{
    cout<< "The First Number is greatest" << endl << "which is=" <<num1;

}
else if (num2 >= num1 && num2>=num3)
{
    cout << "The Second Number is greatest" <<endl << "which is= "<<num2;
    }
    else 
    { cout<< "The Third Number is g1reatest" <<endl <<"which is=" <<num3;
    }
}

// PSEUDOCODE 

/*Prompt user to enter the First Number
Assign answer to num1
Prompt user to enter the Second Number 
Assign answer to num2
Prompt user to enter the Third Number
Assign answer to num3

Compare num1, num2 and num3
IF the num1 is greater than num2 and num1 is greater than  num3
DISPLAY the First Number is the Greatest

IF num2 is greater than num1 and num2 is greater than num3
DISPLAY the Second Number is the Greatest

ELSE 
DISPLAY the Third Number is the Greatest */