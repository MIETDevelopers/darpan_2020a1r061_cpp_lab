/*Write a Program to find the largest number using friend function*/
#include<iostream>
using namespace std;
class q;
class r;
class p
{
      int x;
      public : void input ()
      {
            cout<<"Enter The Value Of X :- \n";
            cin>>x;
      }
      friend void largest(p,q,r);
};

      class q
{
      int y;
      public : void input()
      {
            cout<<"Enter The Value Of Y :-\n";
            cin>>y;
      }
      friend void largest(p,q,r);
};

      class r
{
      int z;
      public : void input()
      {
            cout<<"Enter The Value Of Z :-\n";
            cin>>z;
      }
      friend void largest(p,q,r);
};

 void largest(p ob1,q ob2,r ob3)
 {
       int large=ob1.x;
       if(ob2.y>large)
            large=ob2.y;
       if(ob3.z>large)
            large=ob3.z;
       cout<<"Largest Number Is :-\n"<<large;
 }
 int main()
{
      p ob1;
      q ob2;
      r ob3;
      ob1.input();
      ob2.input();
      ob3.input();
      largest(ob1,ob2,ob3);
      return 0;
}
