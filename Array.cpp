
#include<iostream.h>
#include<conio.h>
class Emp
{
private:int Eno,salary;
	char Ename[40];
public:void get();
       void put();
};
void Emp::get()
{
cout<<"Enter the Employee No:";
cin>>Eno;
cout<<"Enter the Employee Salary:";
cin>>salary;
cout<<"Enter the Employee Name:";
cin>>Ename;
}
void Emp::put()
{
cout<<"Employee No:"<<Eno;
cout<<"Employee Salary:"<<salary;
cout<<"Employee Name:"<<Ename;
}
void main()
{
int i;
clrscr();
Emp E[5];
for(i=0;i<5;i++)
{
E[i].get();
}
for(i=0;i<5;i++)
{
E[i].put();
}
}
