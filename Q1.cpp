#include <iostream>
using namespace std;

int main(){

char c,stop;

while(stop!='n'){
	
	cout << "\nEnter a character: ";
	cin >> c;
	
	cout << "\nThe character you just entered is " << c;
	cout << "\nThe ASCII Value of the entered character is " << c << " is " << int(c);
	cout << "\nThe next character is " << char(c+1);
	
	cout << "\n\nPress any key to continue or n to quit: ";
	cin >> stop;

}

	cout << "\nThank you for using this program!";

return 0;
}
