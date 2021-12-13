#include <iostream>
using namespace std;

void printGrade(int mark);
double sum=0;
int n=0;

int main()
{

int markPG, markMT, markDS, markSE, markBF;

cout << "Mark for the Programming is: ";
cin >> markPG;

cout << "Mark for the Mathematics is: ";
cin >> markMT;

cout << "Mark for the Database Systems is: ";
cin >> markDS;

cout << "Mark for the Software Engineering is: ";
cin >> markSE;

cout << "Mark for the Business Fundamental is: ";
cin >> markBF;
cout <<"\n";

cout << "Letter grade for Programming is: ";
printGrade(markPG);
cout <<"\n";

cout << "Letter grade for Mathematics is: ";
printGrade(markMT);
cout <<"\n";

cout << "Letter grade for Database is: ";
printGrade(markDS);
cout <<"\n";

cout << "Letter grade for Software is: ";
printGrade(markSE);
cout <<"\n";

cout << "Letter grade for Business is: ";
printGrade(markBF);
cout <<"\n";

return 0;
}

void printGrade(int mark)
{
	double gpa, cgpa;
	
	if(mark>=80 && mark<=100){
	cout << "A";
	gpa=4.0;
	}
	
	else if(mark>=75 && mark<80){
	cout << "A-";
	gpa=3.67;
	}

	else if(mark>=70 && mark<75){
	cout << "B+";
	gpa=3.33;		
	}

	else if(mark>=65 && mark<70){
	cout << "B";
	gpa=3.0;		
	}
	
	else if(mark>=60 && mark<65){
	cout << "B-";
	gpa=2.67;
	}
	
	else if(mark>=55 && mark<60){
	cout << "C+";
	gpa=2.33;
	}
	
	else if(mark>=50 && mark<55){
	cout << "C";
	gpa=2.0;
	}
	
	else if(mark>=45 && mark<50){
	cout << "C-";
	gpa=1.67;		
	}
		
	else if(mark>=40 && mark<45){
	cout << "D";
	gpa=1.33;
	}

	else if(mark>=35 && mark<40){
	cout << "D-";
	gpa=1.0;
	}
	
	else if(mark>=0 && mark<35){
	cout << "E";
	gpa=0.0;	
	}
	
	sum+=gpa;
	n++;
	
	if(n==5){
		
		cgpa=sum/5.0;
		cout << "\n\nCGPA: " << cgpa << endl;
		cout << "Remark: ";
		
		if(cgpa==4.0){
		cout << "Excellent";	
		}
		
		else if(cgpa>=3.67 && cgpa<4.0){
		cout << "As";
		}
		
		else if(cgpa>=3.33 && cgpa<3.67){
		cout << "bs";
		}
		
		else if(cgpa>=3.0 && cgpa<3.33){
		cout << "cs";
		}
		
		else if(cgpa>=2.67 && cgpa<3.0){
		cout << "ds";
		}
		
		else if(cgpa>=2.33 && cgpa<2.67){
		cout << "es";
		}
		
		else if(cgpa>=2.0 && cgpa<2.33){
		cout << "fs";
		}
		
		else if(cgpa>=1.67 && cgpa<2.00){
		cout << "gs";
		}
		
		else if(cgpa>=1.33 && cgpa<1.67){
		cout << "hs";
		}
		
		else if(cgpa>=1.00 && cgpa<1.33){
		cout << "is";
		}	
		
		else if(cgpa>=0.0 && cgpa<1.00){
		cout << "Fail";
		}	
	}
	return;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
