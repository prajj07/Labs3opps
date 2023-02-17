#include<iostream>
using namespace std;
int main()
{
  cout<<"SWAPPING THE NUMBERS without using 3rd variable"<<endl;
  int x,y;
  x=5;
  y=6;
  cout<<"Before swapping"<<endl;
  cout<<"x= "<<x<<endl<<"y= "<<y;
 
  x=x+y;
  x=x-y;
  y=y-x;

  cout<<endl<< "After swapping"<<endl;
  cout<<"x= "<<x<<endl<<"y= "<<y;
 
  return 0;
}