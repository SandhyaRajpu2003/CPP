


#include<iostream.h>
#include<conio.h>
class Demo
{
private:int a,b;
public:Demo(int x,int y);
       Demo(Demo &ref);
       void show();
 };
Demo::Demo(int x,int y)
{
a=x;
b=y;
}
Demo::Demo(Demo &ref)
{
a=ref.a;
b=ref.b;
}
void Demo::show()
{
cout<<"a="<<a<<endl;
cout<<"b="<<b<<endl;
}
void main()
{
clrscr();
Demo D1(20,30);
Demo  D2=D1;
D2.show();
getch();
}
