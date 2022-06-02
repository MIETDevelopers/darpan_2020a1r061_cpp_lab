/*Write a C++ Program to display name, rollno, marks of student*/
#include<iostream>
using namespace std;
class Student{
    private: char name[10];
            float marks;
            int rollno;

public:void input(){
   std::cout<<"Enter the name,rollno,marks of student\n";
   std::cin>>name>>marks>>rollno;
}
public:void display(){
   std::cout<<name<<"\n"<<marks<<"\n"<<rollno;
}
};

int main(){
    Student S;
    S.input();
    S.display();
}
