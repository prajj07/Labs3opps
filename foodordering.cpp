#include<iostream>
using namespace std;
int main()
{
  char name[20],Burger1[]="Veg sauce",Burger2[]="Veg mayo",Burger3[]="Chicken sauce",Burger4[]="Double Chicken with extra mayo";
  char pizza1[]="Veg creamy",pizza2[]="Chicken BQ",pizza3[]="Chicken peri peri",pizza4[]="chicken salty",gotostart;

  int Choice,choice1,choice2,quantity,beginning; 
  
  system("CLS");
  cout<<"\t\t\t\t    ...Adholokam food Jr...     \n\n\n  ";
  cout<<"Please enter your name: ";
  cout<<"Hello"<<name<<"\n\n What would you like to order? "<<endl;

  cout<<"\t\t\t\t  .....MENU.....   \n\n\n  ";
int choice;
  cout<<"1. Burger"<<endl;
  cout<<"2. Pizza"<<endl;
  cout<<"Please Enter your Choice: ";
  cin>>Choice;

  if (choice==1)
  {
    cout<<"\n 1. Burger1"<<endl;
    cout<<"\n 2. Burger2"<<endl;
    cout<<"\n 3. Burger3"<<endl;
    cout<<"\n 4. Burger4"<<endl;
  } 
  if (choice1>=1 && choice1<=5)
  {
    cout<<"\n1)Small Rs90\n"<<"\n2)Regular Rs150\n"<<"Large Rs199\n";
    cout<<"Choose the Size please: "<<endl;
    cin>>Size;
    if(choice1>=1 && choice1<=3)
    cout<<"Please Enter the Quantity";
    cin>>quantity;

    switch (choice1)

    {
    case 1: choice1 = 90*quantity;
    break;
    case 2: choice1 =150*quantity;
    break;
    case 3: choice1 = 199*quantity; 
    break;
    }
    switch (choice1)
    {
    case 1:
    cout<<"\t\t\t\t----YOUR ORDER---\n";
    cout<<""Quantity<<""<<Burger1;
    cout<<"\n Your total bill is"<<choice1<<"Your order will be delivered in 30mints"<<endl;
    cout<<"\nThank you ordering from Adholokam food Jr\n";
    break;
    case 2:
    cout<<"\t\t\t\t----YOUR ORDER---\n";
    cout<<""Quantity<<""<<Burger2;
    cout<<"\n Your total bill is"<<choice1<<"Your order will be delivered in 30mints"<<endl;
    cout<<"\nThank you ordering from Adholokam food Jr\n";
    break;
    case 3:
    cout<<"\t\t\t\t----YOUR ORDER---\n";
    cout<<""Quantity<<""<<Burger3;
    cout<<"\n Your total bill is"<<choice1<<"Your order will be delivered in 30mints"<<endl;
    cout<<"\nThank you ordering from Adholokam food Jr\n";
    break;
    case 4:
    cout<<"\t\t\t\t----YOUR ORDER---\n";
    cout<<""Quantity<<""<<Burger4;
    cout<<"\n Your total bill is"<<choice1<<"Your order will be delivered in 30mints"<<endl;
    cout<<"\nThank you ordering from Adholokam food Jr\n";
    break;
    default:
      break;
    }
    cout<<"Would you like to order anything else? Y/N"<<endl;
    cin>>gotostart;
    if (gotostart=='Y' || gotostart=='y')
    {
      goto beginning;
      //return 0;
    }
    
  }

else if (choice==2)
  {
    cout<<"\n 1. Burger1"<<endl;
    cout<<"\n 2. Burger2"<<endl;
    cout<<"\n 3. Burger3"<<endl;
    cout<<"\n 4. Burger4"<<endl;
  } 
  if (choice2>=1 && choice2<=5)
  {
    cout<<"\n1)Small Rs150\n"<<"\n2)Regular Rs199\n"<<"Large Rs399\n";
    cout<<"Choose the Size please: "<<endl;
    cin>>size;
    if(choice2>=1 && choice2<=3)
    cout<<"Please Enter the Quantity";
    cin>>quantity;

    switch (choice2)

    {
    case 1: choice2 = 150*quantity;
    break;
    case 2: choice2 =199*quantity;
    break;
    case 3: choice2 = 399*quantity; 
    break;
    }

    system ("CLS");
    switch (choice2)
    {
    case 1:
    cout<<"\t\t\t\t----YOUR ORDER---\n";
    cout<<""Quantity<<""<<pizza1;
    cout<<"\n Your total bill is"<<choice2<<"Your order will be delivered in 30mints"<<endl;
    cout<<"\nThank you ordering from Adholokam food Jr\n";
    break;
    case 2:
    cout<<"\t\t\t\t----YOUR ORDER---\n";
    cout<<""Quantity<<""<<pizza2;
    cout<<"\n Your total bill is"<<choice2<<"Your order will be delivered in 30mints"<<endl;
    cout<<"\nThank you ordering from Adholokam food Jr\n";
    break;
    case 3:
    cout<<"\t\t\t\t----YOUR ORDER---\n";
    cout<<""Quantity<<""<<pizza3;
    cout<<"\n Your total bill is"<<choice2<<"Your order will be delivered in 30mints"<<endl;
    cout<<"\nThank you ordering from Adholokam food Jr\n";
    break;
    case 4:
    cout<<"\t\t\t\t----YOUR ORDER---\n";
    cout<<""Quantity<<""<<pizza4;
    cout<<"\n Your total bill is"<<choice2<<"Your order will be delivered in 30mints"<<endl;
    cout<<"\nThank you ordering from Adholokam food Jr\n";
    break;
    default:
      break;
    }
    cout<<"Would you like to order anything else? Y/N"<<endl;
    cin>>gotostart;
    if (gotostart=='Y' || gotostart=='y')
    {
      goto beginning;
      //return 0;
    }
    
  }

  else
  {
    system ("CLS");
    {
     cout<<"Please Select Right Option: \n";
    cout<<"Would you like to order anything else? Y/N"<<endl;
    cin>>gotostart;
    if (gotostart=='Y'|| gotostart=='y')
    {
      goto beginning;
      //return 0;
    }
    
  }
  return 0;
   
}