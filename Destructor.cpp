


#include<iostream.h>
#include<conio.h>
class A
{
public:A();
       ~A();
};
A::A()
{
cout<<"Constroctor Called"<<endl;
}
A::~A()
{
cout<<"Destroctor Called"<<endl;
}
void main()
{
clrscr();
A a,b,c,d;
getch();
}
