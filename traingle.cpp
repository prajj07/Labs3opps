#include <iostream>
#include <cmath>
using namespace std;
class Triangle{
    private:
    double a,b,c;
    bool isValid(){
        return(a + b >c && b+c>a && a+c>b &&a>0&&b>0&&c>0);
    }
    public:
    void input(){
        cout<<"Enter the three sides of the triangle: ";
        cin>>a>>b>>c;
    }
    void displaySides(){
        if(isValid() == true){
            cout<<"a: "<<a<<"\nb: "<<b<<"\nc: "<<c;
        }     
        else{
            cout<<"Invalid sides";
            exit(1);
        }
    }
    void displayArea(){
        double area,s;
        s = (a+b+c)/2;
        area = sqrt(s*(s-a)(s-b)(s-b));
        cout<<"\nArea is: "<<area;
    }
};

int main(){
    Triangle triangle;
    triangle.input();
    triangle.displaySides();
    triangle.displayArea();
}