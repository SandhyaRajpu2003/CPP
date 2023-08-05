

#include<iostream.h>
#include<conio.h>
class Binary
{
private:int x,y;
public: void get();
	void put();
    friend  Binary operator +(Binary &s,Binary &s1)
};
void Binary::get()
{
cout<<"Enter the value of x:";
cin>>x;
cout<<"Enter the value of Y:";
cin>>y;
}
void Binary::put()
{
cout<<"Value Of x is:"<<x<<endl;
cout<<"value Of y is:"<<y;
}
 Binary operator +(Binary &s,Binary &s1)
 {
 Binary S3;
 S3.x=s.x+s1.x;
 S3.y=s.y+s1.y;
 return(S3);
 }
void main()
{
clrscr();
Binary b1,b2,b3;
b1.get();
b2.get();
cout<<"***********************Addition Of Objects Is***********************"<<endl;
b3=b1+b2;
b3.put();
getch();
}
