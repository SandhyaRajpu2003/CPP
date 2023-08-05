

#include<iostream.h>
#include<conio.h>
class B;
class A
{
  private:int a;
  public:A();
	 friend B;

};
A::A()
{
 a=10;
}
class B
{
  private:int b;
  public:B();
	void add(A &x);
};
B::B()
{
      b=10;
}
void B::add(A &x)
{
cout<<x.a+b;
}
void main()
{
clrscr();
A p;
B q;
q.add(p);
getch();
}
