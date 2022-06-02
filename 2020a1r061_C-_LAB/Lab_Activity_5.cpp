/*To add the details of a course using a parameterized constructor 
To update the details of a course using a member function of course class.*/
#include<iostream>
using namespace std;
class course
{
    int cId,months;
    string cName,instructor;

    public:
    course(int i,string n,int m,string ins)
    {
        cId=i;
        cName=n;
        months=m;
        instructor=ins;
    }
    void display()
    {
        cout<<"\nCourse Id: "<<cId<<endl;
        cout<<"Course Name: "<<cName<<endl;
        cout<<"Course Duration(In Months): "<<months<<endl;
        cout<<"Course Instructor: "<<instructor<<endl;
    }
    void update()
    {
        cout<<"Enter Course Id: ";
        cin>>cId;
        cout<<"Enter Course Name: ";
        cin>>cName;
        cout<<"Enter Course Duration(In Months): ";
        cin>>months;
        cout<<"Enter Course Instructor: ";
        cin>>instructor;
    }
};
int main()
{
    course c(101,"C++",6,"John");
    cout<<"\nDetails of Course: ";
    c.display();
    cout<<"\nEnter Details of Course for Updation: \n";
    c.update();
    cout<<"\nDetails of Course After Updation: ";
    c.display();
    return 0;
}
