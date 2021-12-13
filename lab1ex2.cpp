/*
*@author Wan Aiman bin Wan Ibrahim
*Matric no: 2113615
*Lab#1 Section 1
*/

#include <iostream>
using namespace std;

int main()
{
	double subTotal, gratuityRate;

	cout << "Enter the subtotal and  a gratuity rate: ";
	cin >> subTotal >> gratuityRate;
	gratuityRate /= 10.0;
	cout << "The gratuity is $" << gratuityRate << " and total is $" << gratuityRate*subTotal;

return 0;
}

