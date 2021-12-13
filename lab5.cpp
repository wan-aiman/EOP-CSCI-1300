//NO1 EXERCISE
/*#include <iostream>
using namespace std;

bool isMultiple(int x,int y);

int main(){

int x, y;

cout << "Enter two integers: " << endl;
cin >> x >> y;

if(isMultiple(x,y)==true)
cout << y << " is a multiple of " << x;

else
cout << y << " is not a multiple of " << x;

return 0;
}

bool isMultiple(int x,int y)
{
		
	if(x%y==0)
	return true;
	
	else
	return false;
	
}*/

//NO2 EXERCISE

#include <iomanip>
#include <iostream>
using namespace std;
double calculateCharges(int hours);

int main(){
	
	int N, hours, i;
	double charges, sum=0;
	cout << fixed << showpoint << setprecision(2);
	
	cout << "Enter number of cars parked: ";
	cin >> N;
	for(i=1; i<=N; i++){
	cout << "\nEnter number hours of Car(" << i << ") parked: ";
	cin >> hours;	
	cout << "Charges for Car(" << i << ") : RM" << calculateCharges(hours) << endl;
	sum+=calculateCharges(hours);
	
	}

	cout << "\nThe running total of yesterday's receipt is: RM" << sum;
	
	return 0;
}

double calculateCharges(int hours){
	
	double charges;
	
	if(hours<=3){
		charges=2;
	}
	
	
	else if(hours>=19 && hours<=24){
		charges=10;
	}
	
	
	else if(hours>3 && hours<19){
		charges=(hours-3)*0.5 + 2;
	}
	
	return charges;
}

//NO3 EXERCISE

/*#include <iostream>

using namespace std;
void displayPattern (int n);

int main()
{
    int n;

    cout << "Enter the number of rows: ";
    cin >> n;

    displayPattern(n);

    return 0;
}

void displayPattern(int n)
{
    int i, j;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout << j << " ";
        }

        cout << "\n\n";
    }
    
    return;
}*/

//NO4 EXERCISE

/*#include <iostream>

using namespace std;
int reverseDigit(int digit);

int main()
{
    int digit;

    cout << "Enter a digit to be reversed: ";
    cin >> digit;

    cout << "The reversed digit of " << digit << " is " << reverseDigit(digit) << endl;

    return 0;
}

int reverseDigit(int digit)
{
    int reversedNum = 0, remainder;

    while(digit != 0)
    {
        remainder = digit%10;
        reversedNum = reversedNum*10 + remainder;
        digit /= 10;
    }

    return reversedNum;

}*/










