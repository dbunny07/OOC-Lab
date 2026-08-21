#include<iostream>
using namespace std;

class Rectangle
{
private:
double length;
double width;
int area;

public:
Rectangle():length(1.0),width(1.0),area(0){}
Rectangle(double len,double wid):length(len),width(wid),area(0){}
~Rectangle(){
cout<<"Rectangle object destroyed."<<endl;
}
double getLength() const{
return length;
}
double getWidth()const{
return width;
}

void setLength(double len){
length=len;
}
void setWidth(double wid){
width=wid;
}
Rectangle(int a,int b)
{
area=a*b;
}
void disp()
{
cout<<area<<endl;
}
};
int main()
{
Rectangle o1;
Rectangle o2(10,20);

o1.disp();
o2.disp();
return 0;
}
