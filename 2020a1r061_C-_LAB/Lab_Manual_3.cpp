/*Write a Program to display name with max marks*/
#include<iostream>
using namespace std;
class Student{
    private:char name[10];
            int rollno;
            float marks;
    public:void input(){
   std:: cin>>name>>rollno>>marks;
    }
    float marksreturn(){
    return marks;
    }
    void print(){
    std::cout<<name;
    }
};
int main(){
    Student S[100];
    int i,n,location;
    cout<<"Enter the value of n\n";
    std::cin>>n;
    for(i=0;i<n;i++){
        int k;
        k=i+1;
    cout<<"Enter the name,rollno,marks of student"<<k<<"\n";
    S[i].input();
        }
    float marks=0.0;
        location=0.0;
    for(i=1;i<=n-1;i++){
    if(S[i].marksreturn()>marks)
    marks=S[i].marksreturn();
   location=i;
    }
    S[location].print();
    return 0;
}
