#include<iostream>
using namespace std;
int main()
{
    int i;
    float mark, sum=0, avg;
    cout << "Enter Marks obtained in 5 Subjects: ";
    for(i=0; i<5; i++)
    {
        cin >> mark;
            cout << "\nGrade = ";
    if(mark>=80 && mark<=100)
        cout << "A";
        
    else if(mark>=75 && mark<=79)
        cout << "A-";
        
    else if(mark>=70 && mark<=74)
        cout<<"B+";
        
    else if(mark>=65 && mark<=69)
        cout<<"B";
    }
    

        

    cout<<endl;
    return 0;
}
