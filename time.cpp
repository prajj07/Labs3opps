  #include<iostream>
using namespace std;

class Time{
    public:
    int hours,minutes,seconds;
    
    void input(){
        cout<<"Enter hours: ";
        cin>>hours;
        cout<<"Enter minutes: ";
        cin>>minutes;
        cout<<"Enter seconds: ";
        cin>>seconds;
    }
    
    void display(){
        cout<<"Time is: "<<hours<<":"<<minutes<<":"<<seconds;
    }
    
    friend void operator --(Time &t1);
};

    void operator --(Time &t1){
        if((t1.hours==0)&&(t1.minutes==0)&&(t1.seconds==0)){
            t1.hours=23;
            t1.minutes=59;
            t1.seconds=59;
        }else if((t1.minutes==0)&&(t1.seconds==0)){
            --t1.hours;
            t1.minutes=59;
            t1.seconds=59;
        }else if(t1.seconds==0){
            t1.hours=t1.hours;
            t1.seconds=59;
            t1.minutes--;
        }else{
            t1.hours=t1.hours;
            t1.minutes=t1.minutes;
            t1.seconds--;
        }
    }

int main(){
    Time t1;
    t1.input();
    t1.display();
    --t1;
    cout<<"\n-------------------------"<<endl;
    t1.display();
}