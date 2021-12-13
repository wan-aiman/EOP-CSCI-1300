#include <iostream>
#include <string>
using namespace std;

string boosterEligibility(char type, int lastDose, int age);
double getVolume(char type, int lastDose, int age);
int scheduler(char type, int lastDose, int age);

int main(){
	int age;
	char type;
	string booster;
	int lastDose;
	
	for(;;){
	
	cout << "\nEnter your current age (must be 12 yrs and above) or Enter '999' to exit: ";
	cin >> age;
			
	if(age<12){
		cout << "*** Your age is not elligible for vaccine or booster shot ***" << endl;
	}
	
	else if(age==999){
		break;
	}
	
	else{
		cout << "\nEnter the type of vaccine you last received:\n'P'= Pfizer,'S'= Sinovac, 'A'= Astrazeneca, 'J'= Johnson & Johnson:";
		cin >> type;
	
		cout << "Enter the duration (in weeks) since your final/2nd dose: ";
		cin >> lastDose;
		

		cout << "\nYour booster eligibility is: " << boosterEligibility(type, lastDose, age);
		}
		
		if(getVolume(type, lastDose, age)==0.3 || getVolume(type, lastDose, age)==0.5){
		cout << "\nThe volume of your shot is " << getVolume(type, lastDose, age);	
				
		}
		
		if(boosterEligibility(type, lastDose, age)=="Not eligible for Pfizer"){
			cout << "\nNot due for booster";
			cout << "\nYour booster is due in " << scheduler(type, lastDose, age) << " weeks";
			cout << "\n";
		}
		//if(scheduler(type, lastDose, age)>0){
			
	//	}
			
	}

return 0;
	
}


string boosterEligibility(char type, int lastDose, int age){
	
	string booster;
	

	if(type=='P'){
		if(lastDose>=24 && age>=12 && age<=50){
		booster="Pfizer";
	
		}
		else if(lastDose>=24 && age>=50){
		booster="Astrazeneca";
		}		
		else{
		booster="Not eligible for Pfizer";
		}
	}

	else if(type=='S'){
		if(lastDose>=12 && age>=18 && age<50){
		booster="Sinovac";
		}		
		else if(lastDose>=12 && age>=50){
		booster="Astrazeneca";
		}
		else{
		booster="Not eligible for Sinovac";
		}	
	}
	
	else if(type=='A'){
		if(lastDose>=24 && age>=18){
		booster="Astrazeneca";
		}
		else{
		booster="Not eligible for Astrazeneca";
		}		
	}
	
	else if(type=='J'){
		if(lastDose>=8 && age>=18 && age<50){
		booster="J&J";
		}
		else if(lastDose<=8 && age >=50){
		booster="Astrazeneca";
		}
		else{
		booster="Not eligible for Johnson & Johnson";
		}		
	}
	

	
return booster;	
}

double getVolume(char type, int lastDose, int age){
	
	double volume;
	
	if(type=='P'){
		if(lastDose>=24 && age>=12 && age<=50){
		volume=0.3;
		}
		else if(lastDose>=24 && age>=50){
		volume=0.3;
		}
	}

	else if(type=='S'){
		if(lastDose>=12 && age>=18 && age<50){
		volume=0.5;
		}		
		else if(lastDose>=12 && age>=50){
		volume=0.5;	
		}
	}
	
	else if(type=='A'){
		if(lastDose>=24 && age>=18){
		volume=0.5;
		}
		
	}
	
	else if(type=='J'){
		if(lastDose>=8 && age>=18 && age<50){
		volume=0.5;
		}
		else if(lastDose<=8 && age >=50){
		volume=0.5;
		}

	}
	
	return volume;
}

int scheduler(char type, int lastDose, int age){
	
	double volume;
	int dueShot;
	
	if(type=='P'){
		if(lastDose>=24 && age>=12 && age<=50){
		dueShot=24-lastDose;
		}
		else if(lastDose>=24 && age>=50){
		dueShot=24-lastDose;
		}		
	}

	else if(type=='S'){
		if(lastDose>=12 && age>=18 && age<50){
		dueShot=12-lastDose;
		}		
		else if(lastDose>=12 && age>=50){
		dueShot=12-lastDose;
		}
	}
	
	else if(type=='A'){
		if(lastDose>=24 && age>=18){
		dueShot=24-lastDose;
		}
	}
	
	else if(type=='J'){
		if(lastDose>=8 && age>=18 && age<50){
		dueShot=8-lastDose;
		}
		else if(lastDose<=8 && age >=50){
		dueShot=8-lastDose;
		}
	}
	
	return dueShot;
	 
}







