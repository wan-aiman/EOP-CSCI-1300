
#include <iomanip>
#include <iostream>
using namespace std;

int main(){
	/*int a, b, c;
	
	cout << "Enter three numbers to be sort: " << endl;
	cin >> a >> b >> c;
	
	if(a<b && b<c){
		cout << a << " < " << b << " < " << c;
	}
	else if(a<c && c<b){
		cout << a << " < " << c << " < " << b;
	}
	else if(b<a && a<c){
		cout << b << " < " << a << " < " << c;
	}
	else if(b<c && c<a){
		cout << b << " < " << c << " < " << a;
	}	
	else if(c<a && a<b){
		cout << c << " < " << a << " < " << b;
	}
	else if(c<b && b<a){
		cout << c << " < " << b << " < " << a;
	}
	else{
		cout << "ERROR! Please run the program again";
	}
	
	double h, parkingFee=0;

    cout << "Enter the number of hours: ";
    cin >> h;

    cout << fixed << showpoint;
    cout << setprecision(2);

    if(0<=h && h<=3 ){
        parkingFee = 5;
        cout << "The parking fee is RM" << parkingFee;
    }
    else if(3<h && h<=9){
        parkingFee = 6*int(h+1);
        cout << "The parking fee is RM" << parkingFee;
    }
    else{
        parkingFee = 60;
        cout << "The parking fee is RM" << parkingFee;
    }*/
    

int today, elapsed, future;
    string day1 = " ";
    string day2 = " ";

    cout << "Sunday is 0, Monday is 1, ..., and Saturday is 6." << endl;
    cout << "Enter today's day as a number : ";
    cin >> today;
    cout << "Enter the number of days elapsed since today : ";
    cin >> elapsed;
    future = (today+elapsed)%7;
    switch(today){
    	case 0: day1 = "Sunday"; break;
    	case 1: day1 = "Monday"; break;
    	case 2: day1 = "Tuesday"; break;
    	case 3: day1 = "Wednesday"; break;
    	case 4: day1 = "Thursday"; break;
    	case 5: day1 = "Friday"; break;
    	case 6: day1 = "Saturday"; break;
	}
	
	switch(future){
    	case 0: day2 = "Sunday"; break;
    	case 1: day2 = "Monday"; break;
    	case 2: day2 = "Tuesday"; break;
    	case 3: day2 = "Wednesday"; break;
    	case 4: day2 = "Thursday"; break;
    	case 5: day2 = "Friday"; break;
    	case 6: day2 = "Saturday"; break;
	}
	
	cout << "Today is " << day1 << " and the future day is " << day2 << endl;
	

return 0;
}

