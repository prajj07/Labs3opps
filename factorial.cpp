#include<iostream>
using namespace std;
int main()
{
  cout<<"Enter the number to calculate the factorial number"<<endl;
  int x,fact;
  cin>>x; //x=5
  fact=x;

  while(x>1)
  {
    x--;              //x=4,3
    fact=fact*x;      //fact=5*4=20, 20*3=60.....
  }

 cout<<"Factorial number is:  "<<fact;
 
 return 0;
}