#include <iostream>
using namespace std;
struct Phone
{
  /* data */
  int areaCode,exchange,number;
};

int main(){
  Phone yourNumber{};
  Phone mynumber{};

  mynumber.areaCode = 910;
  mynumber.exchange = 311;
  mynumber.number =8137;

  cout<<"Enter area code, exchange and number:";
  cin>>yourNumber.areaCode>>yourNumber.exchange>>yourNumber.number;
  cout<<"My number is: ("<<mynumber.areaCode<<")"<<mynumber.exchange<<"-"<<mynumber.number;
  cout<<"\nYour number is:("<<yourNumber.areaCode<<")"<<yourNumber.exchange<<"-"<<yourNumber.number;

}
