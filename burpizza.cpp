#include<iostream>
using namespace std;
class Hotel
{
  public:
  int 
  bur,piz,san,bprice,pprice,sprice,total;
  static int burger;
  static int pizza;
  static int sandwitch;
  static int bpr;
  static int ppr;
  static int spr;


  void input()
  {
    cout<<"We have "<<burger<<"burgers in th hotel"<<endl;
    cout<<"We have "<<pizza<<"pizza in th hotel"<<endl;
    cout<<"We have "<<sandwitch<<"sandwitch in th hotel"<<endl;
  }
  void display()
  {
    cout<<"How much burger do you want: "<<endl;
    cin>>bur;
    cout<<"How much pizza do you want: "<<endl;
    cin>>piz;
    cout<<"How much sandwitch do you want: "<<endl;
    cin>>san;
  }
  
  void calculate()
  {
     bprice=bur*bpr;
     pprice=piz*ppr;
     sprice=san*spr;
     total=bprice+pprice+sprice;
  }
  void display1()
  {
   cout<<"Item\t\tQuantity\tPrice\t\tTotal"<<endl;
   cout<<"Burger\t\t"<<bur<<"\t\t"<<bpr<<"\t\t"<<bprice<<endl;
   cout<<"pizza\t\t"<<piz<<"\t\t"<<ppr<<"\t\t"<<pprice<<endl;
   cout<<"sandwitch\t"<<san<<"\t\t"<<spr<<"\t\t"<<sprice<<endl;
   cout<<"\t\t\t                \t "<<total;
  }
};

int Hotel::burger=100;
int Hotel::pizza=50;
int Hotel::sandwitch=70;
int Hotel::bpr=50;
int Hotel::ppr=60;
int Hotel::spr=70;

int main(){
  Hotel h1;
  h1.input();
  h1.display();
  h1.calculate();
  h1.display1();
}