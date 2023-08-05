


#include<iostream.h>
#include<conio.h>
class Student
{
private:int rollno;
	char Sname[50],Div;
public:void input();
       void output();
};
void Student::input()
{
cout<<"Enter the student Roll number:";
cin>>rollno;

cout<<"Enter the student Name:";
cin>>Sname;

cout<<"Enter the student Division:";
cin>>Div;

}
void Student::output()
{
cout<<"---------------------------Student Information---------------------------"<<endl;
cout<<"Student RollNumber Is:"<<rollno<<endl;
cout<<"Student Name Is:"<<Sname<<endl;
cout<<"Student Div Is:"<<Div<<endl;
}
void main()
{
clrscr();
Student S;
S.input();
S.output();
getch();
}
