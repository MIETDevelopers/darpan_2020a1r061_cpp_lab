/*Multi-level Inheritance*/
#include<iostream>
using namespace std;
class A{
  protected: float length;
  public: void inputLength(){
    cout<<"Enter the length of rectangle"<<endl;
    cin>>length;
  }
};
class B{
  protected: float breadth;
  public: void inputBreadth(){
    cout<<"Enter the breadth of rectangle";
    cin>>breadth;
  }
};
class C:public B{
public : void area(){
cout<<"Area of Rectangle= " << length * breadth<< endl:
}
};
int main(){
C.obj;
obj.inputLength();
obj.inputBreadth():
obj.area():
return 0;
}
