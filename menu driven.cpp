#include<iostream>
using namespace std;
int main()
{
  cout<<"Arithematic Operations Program"<<endl;
  cout<<"1.Addition"<<endl<<"2.Subtraction"<<endl<<"3.multiplication"<<endl<<"4.division"<<endl<<"5.modulo"<<endl;
  cout<<"Enter the Operation Number to perform the appropriate operation"<<endl;
  
  
  int option_no;
  cin>>option_no;
  int x,y;

  switch(option_no)
  {
    case 1:
     cout<<"Addition Operation"<<endl<<"Enter two numbers"<<endl;
     cin>>x>>y;
     cout<<"The additon of : "<<x<<" and "<<y<<" is: "<<(x+y);
     break;

    case 2:
     cout<<"Subtraction Operation"<<endl<<"Enter two numbers"<<endl;
     cin>>x>>y;
     cout<<"The subtraction of : "<<x<<" and "<<y<<" is: "<<(x-y); 
     break;

    case 3:
     cout<<" Mutliplication Operation"<<endl<<"Enter two numbers"<<endl;
     cin>>x>>y;
     cout<<"The multipication of : "<<x<<" and "<<y<<" is: "<<(x*y);
     break;

    case 4:
     cout<<"Divion Operation"<<endl<<"Enter two numbers"<<endl;
     cin>>x>>y;
     cout<<"The division of : "<<x<<" and "<<y<<" is: "<<(x/y); 
     break;

    case 5:
     cout<<"Modulo Operation"<<endl<<"Enter two numbers"<<endl;
     cin>>x>>y;
     cout<<"The Modulo of : "<<x<<" and "<<y<<" is: "<<(x%y);
     break; 
    
    default:
     cout<<"Error :Invalid option number";

  }   

  return 0;
}