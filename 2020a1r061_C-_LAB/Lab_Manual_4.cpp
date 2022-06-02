/*Write a Program to display name, rollno, marks of student using structure*/
#include<iostream>
using namespace std;
struct student{
    float marks;
    char name[10];
    int rollno;
};
int main(){
    student s[100];
    int n,i,loc;
    float marks1;
    cout<<"Enter the no of student\n";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"Enter the name,rollno,marks of students"<<i+1;
        cin>>s[i].name>>s[i].rollno>>s[i].marks;
    }
    marks1=0.0;
    loc=0;
    for(i=0;i<n;i++){
        if(s[i].marks>marks1){
            loc=i;
            marks1=s[i].marks;
        }
    }
    cout<<"The name of student with maximum  marks is " <<s[loc].name<<endl;
    return 0;
}
