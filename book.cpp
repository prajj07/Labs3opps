#include<iostream>
#include<string>
using namespace std;
class library
{
  protected:
  string book_name;
  int book_no;
};
class library1
{
  public:
  string author_name;
  protected:
  string publisher_name;
};
class library2:public library,public library1
{
  public:
  int cost;
  protected:
  int n_page,yr_of_publish;
  public:
  void initial()
  {
    cout<<"Enter the Book name: "<<endl;
    cin>>book_name;
    cout<<"Enter the Book no: "<<endl;
    cin>>book_no;
    cout<<"Enter Authors name: "<<endl;
    cin>>author_name;
    cout<<"Enter publisher's name: "<<endl;
    cin>>publisher_name;
    cout<<"Enter book cost: ";
    cin>>cost;
    cout<<"Enter No. of page: ";
    cin>>n_page;
    cout<<"Enter year of publish: ";
    cin>>yr_of_publish;

  }
  void display()
  {
    cout<<book_name<<"\t"<<book_no<<"\t"<<author_name<<"\t"<<publisher_name<<"\t"<<cost<<"\t"<<n_page<<"\t"<<yr_of_publish<<endl;
  }
};
int main()
{
  library1 l;
  int n,total=0;
  string auth_name;
  cout<<"Enter the number of books in Library: "<<endl;
  cin>>n;
  for (int i = 0; i < n; i++)
  {
   cout<<"-------Details of the Books"<<i+1<<"-------"<<endl;
   l[i].initial();
   total=total+l[i].cost;
  }
  cout<<"Enter the name of author whose details to be displayed: "<<endl;
  cin>>auth_name;
  cout<<"----DETAILS OF BOOK WRITTEN BY AUTHOR: "<<auth_name<<"------"<<endl;
  cout<<"BOOK NAME"<<"\t"<<"BOOK NO."<<"\t"<<"PUBLISHER NAME"<<"\t"<<"COST"<<"\t"<<"NO OF PAGES"<<"\t"<<"YEAR OF PUBLISH"<<endl;
  for (int i = 0; i < n; i++)
  {
    if(l[i].author_name==auth_name)
    {
      l[i].display();
    }
  }
  
  cout<<"TOTAL COST OF ALL BOOKS IN LIBRARY: "<<total<<"/-"<<endl;
}






