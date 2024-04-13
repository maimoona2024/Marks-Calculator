#include<iostream>
using namespace std;
int main() {
    int totalMarks;
    int obtainedMarks;
    int percentage;
    int Class;
    cout<<"Please! Enter your Total marks: ";
    cin>>totalMarks;
    cout<<"Please! Enter your Obtained Marks: ";
    cin>>obtainedMarks;
    percentage = obtainedMarks*100/totalMarks;  //formula for calculating percentage
    if(percentage>=90) //percentage is equal to or more than 90
    {
        cout<<"Congratulations! You got "<<percentage<<"% and your Grade is A++."<<endl; 
    }
    else if(percentage>=80) //percentage is equal to or more than 80
    {
        cout<<"Congratulations! You got "<<percentage<<"% and your Grade is A+."<<endl;
    }
    else if(percentage>=70) //percentage is equal to or more than 70
    {
        cout<<"Very Good! You got "<<percentage<<"% and your Grade is A."<<endl;
    }
    else if(percentage>=60) //percentage is equal to or more than 60
    {
        cout<<"Good! You got "<<percentage<<"% and your Grade is B."<<endl;
    }
    else if(percentage>=50) //percentage is equal to or more than 50
    {
        cout<<"Fair! You got "<<percentage<<"% and your Grade is c."<<endl;
    }
    else if(percentage>=40) //percentage is equal to or more than 40
    {
        cout<<"Unsatisfactory! You got "<<percentage<<"% and your Grade is D."<<endl;
    }
    else if(percentage<=39) //percentage is equal to or less than 30
    {
        cout<<"Very Poor! You got "<<percentage<<"% and your Grade is F."<<endl;
    }
    cout<<"Now! Please Enter your class: "<<endl;
    cin>>Class;
    //if else if block to declare students as promoted or not promoted and displaying their classes on screen
    if(Class<12 && percentage>=40) //if class is less than 12 and percentage is more than or equal to 40
    {
        ++Class;
        cout<<"Congratulations you are promoted to "<<Class<<"."<<endl;
    }
    else if(Class==12 && percentage>=40) //if class is equal to 12 and percentage is more than or equal to 40
    {
        ++Class;
        cout<<"Now! You can join university."<<endl;
    }
    else if(Class<=12 && percentage<40) //if class is less than or equal to 12 and percentage is less than or equal to 40
    {
        cout<<"You are failed! You have to repeat class "<<Class<<endl;
    }
}
    