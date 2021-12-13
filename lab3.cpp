#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;

const float MIN_TO_HOUR = 60.0;
//const float RATIO = 1.5;
//const float CONVERT = 2.2;
int main()
{
	/*float weightKg, weightPound;
	
	cout << fixed << showpoint << setprecision(2);
	cout << "Enter your weight (kg)" << endl;
	cin >> weightKg;
	weightPound = weightKg*CONVERT;
	cout << "Your weight in kilograms is: "<< weightKg << " kg" << endl;
	cout << "Your weight in pounds is: "<< weightPound << " lbs" << endl;
	
	float length, width;
	
	cout << "Enter the length: " << endl;
	cin >> length;
	width = length/RATIO;
	cout << "The length is " << length << endl;
	cout << "The width is " << width << endl;*/
	
	float speedA, speedB, totalTime, hour, min, distanceA, distanceB,
	displacement;
	
	cout << "Enter the speed for car A: " << endl;
	cin >> speedA;
	cout << "Enter the speed for car B: " << endl;
	cin >> speedB;
	cout << "Enter time elapsed (hour and minutes)" << endl;
	cin >> hour >> min;
	
	totalTime = hour + (min/MIN_TO_HOUR);
	distanceA = speedA*totalTime;
	distanceB = speedB*totalTime;
	displacement = sqrt(pow(distanceA,2) + pow(distanceB,2));
	
	cout << "The shortest distance between car A and B is: " << displacement
	<< " miles" << endl;
		
return 0;
}

