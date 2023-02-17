#include<iostream>
using namespace std;
class Weight
{
  public:
  float kg,g;

  void input(){
  cout<<"Enter your weight\n"<<"kilogram: "<<endl;
  cin>>kg;
  cout<<"Enter gram";
  cin>>g;
  }

  friend void operator --(Weight);

};

void operator --(Weight w)
{
 w.kg=w.kg-1;
 w.g=w.g-1;
 cout<<"new weight is: "<<w.kg<<"kg"<<w.g<<"g"<<endl;
}
int main()
{
  Weight w;
  w.input();
  --w;
}