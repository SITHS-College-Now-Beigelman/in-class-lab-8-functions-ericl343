//Eric Lin
//November 4th, 2024
//Lecture 8


#include <iostream>  
#include <cmath>        // Include for mathematical functions
#include <cctype>       // Include for character handling functions

using namespace std;    // Makes all the names in the std namespace available

//For Part 2
int doubleMultiply(int a, int b) {
    int pro;
    pro = a * b * 2;
    return pro; 
}
//For Part 3
double getSum(double x, double y, double z) {
    return x + y + z;
}

//Part 1
int main() {
double num;
cout << "Enter a floating point number: ";
cin >> num;
    
//Printing results after calculating
cout << "Square root of the number: " << sqrt(num) << endl;
cout << "Number raised to the 4th power: " << pow(num, 4) << endl;
cout << "Floor of the number: " << floor(num) << endl;

/*
Enter a floating point number: 4.5
Square root of the number: 2.12132
Number raised to the 4th power: 410.062
Floor of the number: 4
*/

//Part 2
int num1, num2;
cout << "Enter two integers: ";
cin >> num1 >> num2;
cout << "Twice the product of the number is: "
<< doubleMultiply(num1, num2) << endl;

/*
Enter two integers: 3 2
Twice the product of the number is: 12
*/
    
//Part 3
double a, b, c;
cout << "Enter three floating point numbers: ";
cin >> a >> b >> c;
double result = getSum(a, b, c);
cout << "The sum of the numbers is: " << result << endl;

/*
Enter three floating point numbers: 1.6 5.8 3.7
The sum of the numbers is: 11.1
*/

return 0;
}
