#include<iostream>
using namespace std;
class student
{
    public:
virtual void display()=0;
};
 class users:public student{
public:
void display(){
    cout<<"Student details";
}
 };
int main(){
student* s1= new users();
s1-> display();
    return 0;
}