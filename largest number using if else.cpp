#include<iostream>
using namespace std;
int main()
{                              
cout<<"Largest of 3 number"<<endl;
  int x,y,z;
  cout<<"Enter 3 number :";
  cin>>x>>y>>z;

  if((x>y)&&(y>z))

  {
    cout<<x<<" is greatest number"<<endl;
  }

  else if((y>x)&&(y>z))

  {
    cout<<y<<" is greatest number"<<endl;
  }

  else
  {
    cout<<z<<" is greatest number"<<endl;
  }
  
  return 0;

}

  