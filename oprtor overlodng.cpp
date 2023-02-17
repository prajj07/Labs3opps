#include<iostream>
using namespace std;
class Complex
{
  public:
  int real,img;
  
  void input()
  {
    cout<<"Enter the real part: ";
    cin>>real;
    cout<<"Enter the imaginary part ";
    cin>>img;
  }
  void display()
  {
    cout<<"\nEntered number is: "<<real<<"+"<<img<<"i";
  }
    Complex operator +(Complex c2)
    {
      Complex temp;
      temp.real=real+c2.real;
      temp.img=img+c2.img;
      return temp;
    }
};
int main()
{
  Complex c1,c2,c3;
  c1.input();
  c2.input();
  c1.display();
  c2.display();
  c3 = c1+c2;
  c3.display();
}