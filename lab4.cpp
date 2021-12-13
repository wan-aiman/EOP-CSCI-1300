#include <iostream>
using namespace std;

int main()
{
	/*int n, sum=0, num1, num2, num3, num4;
	
for(;;){

	cout << "\nEnter an integer number: ";
	cin >> n;
	
	num1 = (n/1000)%10;
	num2 = (n/100)%10;
	num3 = (n/10)%10;
	num4 = n%10;
	
	cout << "The individual digits are " << num1 << " " << num2 << " " << num3 << " " << num4 << endl;
	
	sum = num1 + num2 + num3 + num4;
	
	cout << "The sum of the total individual digits are " << sum << endl;
}*/
	/*int score;
	
	while(score!=-1){
		
	cout << "\nEnter your score: ";
	cin >> score;
	
	if(score>=60 && score<=100){
		cout << "You pass the exam." << endl;
	}
	else if(score<60 && score>=0){
		cout << "You don't pass the exam." << endl;	
	}

	continue;
	}
	
	cout << "No numbers are entered except -1";*/
	
	int num1, num2, count3=0, count5=0, i;
	
	cout << "Please enter two integers: " << endl;
	cin >> num1 >> num2;
	
	for(i=num1; i<=num2; i++){
		if(i%3==0){
			++count3;
		}
		if(i%5==0){
			++count5;
		}
	}
	
	cout << "Numbers of multiples of 3 between the two integers are: " << count3 << endl;
	cout << "Numbers of multiples of 5 between the two integers are: " << count5 << endl;
	

return 0;
}
