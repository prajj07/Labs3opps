#include<iostream>
using namespace std;
class BankAccout{
  private:
  string name,accountType;
  long int accountNo;
  double balance;

  public:
  void init()
  {
    cout<<"Enter depositor name: "<<endl;
    cin>>name;
    cout<<"Enter accountNo: "<<endl;
    cin>>accountNo;
    cout<<"Enter account type: "<<endl;
    cin>>accountType;
    cout<<"Enter accountBalance: "<<endl;
    cin>>accountBalance;
  }
  void depoist()
  {
    double temp;
    cout<<"Enter the amount to depoist: "<<endl;
    cin>>temp;
    balance+=temp;
    cout<<"Your current Balance is: "<<balance<<endl;
  }
void withdraw()
    {
    double temp;
    cout<<"Your current Balance is: "<<balance<<endl;
    cout<<"Enter the amount you want to withdraw: "<<endl;
    cin>>temp;
    if(temp>balance)
    {
      cout<<"Not enough balance: ";
      exit(1);
    }
      balance-=temp;
      cout<<"Account balance: "<<balance<<endl;
    }  
    void accountDetails()
    {
      cout<<"\nDepoiter name: "<<name;
      cout<<"Account balance: "<<balance<<endl;
    }
  };
  int main()
  {
    int choice;
    BankAccount.userAccount;
    userAccount.init();
    while(choice<4){
      cout<<"Enter 1 to depositor name ,2 to withdraw,3 to view the account detail,4 to cancel: "<<endl;
      cin>>choice;

      switch(choice)
      {
        case 1:
         userAccount.deposit();
         break;


        case 2:
        userAccount.withdraw();
        break;
      }
      case 3:
      userAccount.accountDetails();
      break;

      case 4;
      exit(1);
      break;
    }
    cout<<endl;

  }

}