


#include<iostream.h>
#include<conio.h>
class Demo
{
private:int a;
public:  Demo();
	 void show();
};
Demo::Demo()
{
cout<<"Enter the value of a:";
cin>>a;
}
void Demo::show()
{
cout<<"The value Of A is:";
cout<<a;
}
void main()
{
clrscr();
Demo object;
object.show();
getch();
}
