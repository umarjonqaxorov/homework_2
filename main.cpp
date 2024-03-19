
//
// Created by ...
// Date:

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {

    cout << "PROBLEM 1\n";
    int num1, num2;
    cout << " enter the first  the number" ;
    cin >> num1 ;
    cout <<  " enter the second the number" ;
    cin >> num2 ;
    double average = ( num1 + num2 ) / 2 ;
    int product = num1*num2 ;
    cout << " The first result is equal to" << average << endl ;
    cout << " The second result is equal to" << product << endl;

    cout << "PROBLEM 2\n";
    int base, height ;
    cout << " Enter the base of triangle" ;
    cin >> base ;
    cout << " Enter the height of triangle" ;
    cin >> height;
    double area = 1/2 * base * height;
    cout  << " The are of triangle is equal to" << area << endl ;

    cout << "PROBLEM 3\n";
    double celsius , fahrenheit;
    cout << " Enter the celsius" ;
    cin >> celsius ;
    fahrenheit = ( celsius *  9 /5) +32 ;
    cout << " Temperature in fahrenheit" << fahrenheit << endl ;




    cout << "PROBLEM 4\n";
    int a , b , c ;
    cout  << " Enter th a" ;
    cin >> a ;
    cout  << " Enter th b" ;
    cin >> b ;
    cout  << " Enter th c" ;
    cin >> c ;
    double answer =( a^b) ^c ;
    cout << " the answer is equal to" << answer << endl ;

    cout << "PROBLEM 5\n";
    double N ;
    cout << " Enter the number" ;
    cin >> N ;
    cout << std::fixed << std::setprecision(2);
    for (int i = 1; i <= 10; ++i) {
        std::cout << N << "^" << i << "=" << pow(N, i) << std::endl;
    }

    return 0;
}



