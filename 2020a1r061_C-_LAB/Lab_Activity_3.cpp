/*Write a Program to update the details of a student using a member function of student class
Write a Programto delete the details of a student using member function of student class*/
#include <iostream>
using namespace std;
class student
{
private:
    string name;
    int roll_no;
    float mmarks, smarks, emarks;

public:
    student(string n = "", int a = 0, float x = 0, float y = 0, float z = 0)
    {
        name = n;
        roll_no = a;
        mmarks = x;
        smarks = y;
        emarks = z;
    }
    void update(){
        cout << "Enter new name:\n";
        cin >> name;
        cout << "Enter new roll_no:\n";
        cin >> roll_no;
        cout << "Enter updated Maths,Science and English marks:\n";
        cin >> mmarks >> smarks >> emarks;
    }
    void input()
    {

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
    void del(){
        name = "";
        roll_no = mmarks = smarks = emarks = 0;
    }
    ~student()
    {
    }
};
class course
{
private:
    string cname;
    string code;
    string in_charge;

public:
    course(string a = "", string b = "", string c = "")
    {
        cname = a;
        code = b;
        in_charge = c;
    }
    void input()
    {

        cin >> cname >> code >> in_charge;
    }
    void display()
    {
        cout << "Course name: " << cname << endl
             << "course code: " << code << endl
             << "Course in-charge: " << in_charge << endl;
    }
    ~course()
    {
    }
};

int main()
{

    cout << "For student class......." << endl;
    int i, n;

    cout << "enter the number of students: " << endl;
    cin >> n;
    student s[n];
    for (i = 0; i < n; i++)
    {
        cout << "enter name, roll no , marks in maths, science and english of student " << i + 1 << endl;
        s[i].input();
        cout << "Details of student" << i + 1 << endl;
        s[i].print();
        s[i].avg();
    }

    cout << "For course class:-" << endl;
    cout << "enter the number of courses: " << endl;
    cin >> n;
    course c[n];
    for (i = 0; i < n; i++)
    {
        cout << "enter name, code , in-charge of course " << i + 1 << endl;
        c[i].input();
        cout << "Details of course" << i + 1 << endl;
        c[i].display();
    }
    return 0;
}
