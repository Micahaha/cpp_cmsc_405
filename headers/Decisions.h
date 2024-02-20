// pre-processor directives 
#include <iostream>
#include <iomanip>

// create macro values (constants)
#define NUM 34568.8

// use C++ Standard Library namespace
using namespace std;

// this function uses the comparison operators
// and the if, if-else and if-else-if statements
void decisions1(void){

    // declare variable of type float that will be used in conditions
    // initialize it using macro value defined in header file
    float num = NUM;
    
    // show decimal point notation and trailing zeroes on cout 
    cout << fixed << showpoint;

    // show three digits to the right of the decimal on cout
    cout << setprecision(3);

    // use an if statement
    if (num < 40000.0)
    {
       // printf("%.1f is less than 40000.0\n", num);
        cout << num << " is less than 40000.0\n" << endl;
    }

    // change value in variable
    num += num;

    // use an if-else statement
    if (num < 40000.0)
    {
        cout << num << " is less than 40000.0\n" << endl;

    }
    else 
    {
        cout << num << " is less than 40000.0\n" << endl;
    }
    num = 0;

    // use an if-else-if statement
    if(num == 0.0)
    {
        cout << num << " is equal to 0.0" << endl;
    } 
    else if (num < 0.0)
    {
        cout << num << " is less than 0.0" << endl;
    }
    else 
    {
        cout <<  num << " is greater than 0.0" << endl;
    }
}
