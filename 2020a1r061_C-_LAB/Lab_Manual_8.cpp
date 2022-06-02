/*Write a program to see the use of Constructor*/
#include<iostream>
using namespace std;
class X{
    private:int l,m;
    public:X(){
        l=10;
        m=20;
    }
    void display(){
        cout<< "l=\t"<<l<<"\n m=\t"<<m;
    }
};
int main(){
    X ob;
    ob.display();
    return 0;   
}
