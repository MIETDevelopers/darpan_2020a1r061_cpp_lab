/*Write a Program to create and display a complex number*/
#include <iostream>
using namespace std;
class complex
{
      private: int real, imag;
      public: void input()
      {
            cout<<"Enter The Real Part For The First Number:\n";
            cin>>real;
            cout<<"Enter The Imaginary Part For The First Number:\n";
            cin>>imag;
      };
      void input_val()
      {
            cout<<"Enter The Real Part For Second Number:\n";
            cin>>real;
            cout<<"Enter The Imaginary Part For Second Number:\n";
            cin>>imag;
      }
      complex add(complex c)
      {
            complex temp;
            temp.real = real+c.real;
            temp.imag = imag+c.imag;
            return temp;
      }
      void display()
      {
            cout<<"\n"<<"The Complex Number is:\n";
            cout<<real<<"+"<<imag<<"i";
      }
};
int main()
{
      complex c1, c2, c3;
      c1.input();
      c2.input_val();
      c3=c1.add(c2);
      c3.display();
      return 0;
}
