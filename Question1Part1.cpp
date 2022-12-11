#include <iostream>
using namespace std;
int main() 
{
    float fahren, celcius;

    cout << "Enter the Temperature in Farenheit:";
    cin >> fahren;

    celcius= (fahren - 32) * 5 / 9  ;

    cout << fahren << " Farenheit is equal to " << celcius << " Degrees Celcius"; 

}

// PSEUDOCODE 

/* START
Prompt user to enter the temperature in Farenheit
Assign answer to the variable Fahren
Pass the fahren variable to the function for coverting Farenheit to Celcius using the formula (fahren - 32) * 5 /9 
Display output in the form Farenheit is equal to temperature in Degrees Celcius
END */ 
