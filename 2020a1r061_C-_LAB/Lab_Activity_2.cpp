/*Write a program to allocate appropriate access specifiers to data members of student and course class to add details of a student using parameterized constructor of student class*/
#include <iostream>
using namespace std;
class student
{ // data members are private
private:
    string name;
    int roll_no;
    float mmarks, smarks, emarks;
public:             //public member function
    student(string n, int r, float m, float s, float e) //using constructor here
    {
        name = n;
        roll_no = r;
        mmarks = m;
        smarks = s;
        emarks = e;
    }

    void print()
    { // member function can access private data members like name, roll_no, mmarks, smarks, emarks
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
    ~student()   //destructor used here
    {
    }
};
class course
{
    // private member function which cannot be accessed from outside the class
private:
    string cname;
    string code;
    string in_charge;
    // public member function  can be accessed outside the class
public:
    course(string n, string c, string i)  // using constructor
    {
        cname = n;
        code = c;
        in_charge = i;
    }
    void display()
    { // member function can access private data members
        // cname, code, in_charge
        cout << "Course name: " << cname << endl
             << "course code: " << code << endl
             << "Course in-charge: " << in_charge << endl;
    }
    ~course() //using destructor
    {
    }
};
// the main function starts here
int main()
{
    student s("Arjun", 3, 4, 5, 6);
    student s1("Hrithik", 5, 6, 4, 4);
    s.print();
    s.avg();
    s1.print();
    s1.avg();
    cout << endl
         << "For course class:-" << endl;
    course c("OOPS using c++", "COM-411", "Anil Gupta");
    course c1("RDBMS lab", "COM-412", "Meenu Lochan");
    c.display();
    cout << endl;
    c1.display();

    return 0;
}
