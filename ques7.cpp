#include<iostream>
using namespace std;
class Shape
{
  protected :
  float l;
  public:
  void getdata();
  virtual float calculateArea()=0;
  
};
void Shape:: getdata()
{
    cin>>l;
}
class Square:public Shape
{
   public:
   float calculateArea()
   {
      return l*l; 
   }
};
class Circle:public Shape
{
   public:
   float calculateArea()
   {
      return 3.14*l*l; 
   }
};
int main()
{
Shape *o,*o1;
//int a,b;
//cin<<a,b;
float l;
cin>>l;
o=new Square(l);
o1=new Circle(l);

cout<<"area of Square"<<o->calculateArea()<<endl;
cout<<"area of Cube"<<o1->calculateArea()<<endl;//o and o1 are the pointer of shape class.
return 0;
}