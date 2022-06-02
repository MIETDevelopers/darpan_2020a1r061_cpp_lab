/*Analyze and design classes for student management system.
To create a student class, its constructor, destructor and member functions.
To create a course class, its constructor, destructor and member functions.*/
#include <iostream>
using namespace std;
class student
{
private:
    char name[20];
    int roll_no;
    float mmarks, smarks, emarks;

public:
    student()
    {
        cout << "using constructor......" << endl;
        cout << "Enter the name, roll no and marks in maths, science and english of the student:" << endl;
        cin >> name >> roll_no >> mmarks >> smarks >> emarks;
    }

    void print()
    {
        cout << "Name :" << name << endl
             << "Roll no: " << roll_no << endl
             << "Marks in Maths: " << mmarks << endl
             << "Marks in Science: " << smarks << endl
             << "Marks in English: " << emarks << endl;
    }
    float avg()
    {
        cout << "Average marks of student: ";
        float mark = (mmarks + smarks + emarks) / 3;
        cout << mark << endl;
        return mark;
    }
    //desctructor for the initialised values
    ~student()
    {
    }
};
class course
{
private:
    char cname[20];
    char code[20];
    char in_charge[20];

public:
    //constructor initialization for the integer type member data of the class-course
    course()
    {
        cout << "Enter the course name, course code and course in_charge:" << endl;
        cin >> cname >> code >> in_charge;
    }
    void display()
    {
        cout << "Course name: " << cname << endl
             << "course code: " << code << endl
             << "Course in-charge: " << in_charge << endl;
    }
    // destructor for the class- course
    ~course()
    {
    }
};

int main()
{
    cout << "For student class......." << endl;
    student s, s1, s2;
    s.print();
    s.avg();
    cout << endl;
    s1.print();
    s1.avg();
    cout << endl;
    s2.print();
    s2.avg();
    cout << endl
         << "For course class......." << endl;
    course c, c1, c2;
    c.display();
    cout << endl;
    c1.display();
    cout << endl;
    c2.display();
    return 0;
}
