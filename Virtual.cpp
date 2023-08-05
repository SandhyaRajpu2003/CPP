


#include<iostream.h>
#include<conio.h>
class Base
{
 public:void show()
 {
  cout<<"Show() in Base Class....."<<endl;
 }
	virtual void display()
	{
	cout<<"display() in Base Class ....."<<endl;
	}
};
class Derived:public Base
{
public:void show()
{
cout<<"Show() in Base Class......"<<endl;
}
 void display()
    {
      cout<<"display() in Derived Class......"<<endl;
       }
       };
 void main()
 {
 clrscr();
 Base *b;
 Base  b1;
 b=&b1;
 b->display();
 b->show();
 Derived d;
 b=&d;
 b->display();
 b->show();
 getch();
 }
