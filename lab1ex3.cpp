/*
*@author Wan Aiman bin Wan Ibrahim
*Matric no: 2113615
*Lab#1 Section 1
*/

#include <iostream>
using namespace std;

int main()
{
	int n, sum, num1, num2, num3;
	
	cout << "Enter a number between 0 and 1000: ";
	cin >> n;
	
	num1 = (n/100)%10;
	num2 = (n/10)%10;
	num3 = n%10;

	sum = num1 + num2 + num3;

	cout << "The sum of the digits is " << sum;
	
	
return 0;
}

