#include<iostream>
using namespace std;
int main()
{
  cout<<"SWAPPING THE NUMBERS"<<endl;
  int x,y,temp;
  x=5;
  y=6;
  cout<<"Before swapping"<<endl;
  cout<<"x= "<<x<<endl;
  cout<<"y= "<<y<<endl;
 
  temp=x;
  x=y;
  y=temp;

  cout<<"After swapping"<<endl;
  cout<<"x= "<<x<<endl;
  cout<<"y= "<<y<<endl;
  return 0;
}