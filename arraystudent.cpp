#include<iostream>
using namespace std;
class student{
  string name;
  int mark1,mark2,mark3,attendence;
  public:
  void input(){
    cout<<"Enter the student name: "<<endl;
    cin>>name;
    cout<<"Enter subject 1 marks: "<<endl;
    cin>>mark1;
    cout<<"Enter subject 2 marks: "<<endl;
    cin>>mark2;
    cout<<"Enter subject 3 marks: "<<endl;
    cin>>mark3;
    cout<<"Enter the attendence percentage: "<<endl;
    cin>>attendence;
  }
  void display()
  {
   cout<<"Student name is: "<<name<<"\nsubject 2 marks: "<<mark1<<"\nsubject 2 marks: "<<mark2<<"\nsubject 3 marks: "<<mark3<<"\nstudent's attendence: "<<attendence<<endl;

   if(mark1>50&&mark2>50&&mark3>50&&attendence>75)
   {
     cout<<"Student is passed"<<endl;
   }
   else
   {
      cout<<"Student is failed"<<endl;
   }
  }
};

int main()
{
  student obj[10];
  int n,i;
  cout<<"Enter number of students: ";
  cin>>n;
  for(i=0;i<n;i++)
  {
    obj[i].input();
  }
   for(i=0;i<n;i++)
  {
    obj[i].display();
  }
  return 0;
}