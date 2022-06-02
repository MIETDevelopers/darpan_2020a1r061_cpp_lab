/*To get the details of a course by using course_id and to delete the details of a course using a member function of course class.*/
#include<iostream>
using namespace std;
class course
{
    int cId,months;
    string cName,iname;
    public:
    void get()
    {
        cout <<"Enter Course Id: ";
        cin>>cId; 
        cout <<"Enter Course Name: ";
        cin>>cName;
        cout<<"Enter Course Duration(In Months): ";
        cin>>months;
        cout<<"Enter Instructor Name: ";
        cin>>iname; 
    }
    void display()
    {
        cout<<"\nCourse Id: "<<cId<<endl;
        cout<<"Course Name: "<<cName<<endl;
        cout<<"Course Duration(In Months): "<<months<<endl;
        cout<<"Course Instructor: "<<iname<<endl;
    }
    int CourseID()
    {
        return cId;
    }
    void del()
    {
        cout<<"Course Details Deleted!";
    }    
};
int main()
{
    int x;
    course c[2];
    for (int i = 0; i < 2; i++)
    {
        cout<<"\nEnter Details of Course "<<i+1<<endl;
        c[i].get();
    }
    cout<<"\nEnter the Course ID to display Details of Course you want: ";
    cin>>x;
    for (int i = 0; i < 2; i++)
    {
        if (c[i].CourseID()==x)
        {
            c[i].display();
        }
    }
    cout<<"\nEnter the Course ID to delete Details of Course you want: ";
    cin>>x;
    for (int i = 0; i < 2; i++)
    {
        if (c[i].CourseID()==x)
        {
            c[i-1]=c[i];
            c[i].del();
        }
    }
    return 0;
}
