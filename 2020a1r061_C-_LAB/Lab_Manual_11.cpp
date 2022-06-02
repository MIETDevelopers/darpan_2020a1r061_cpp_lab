/*Write a Sample Program to see the Use of Inheritance*/
#include<iostream>
using namespace std;
class Sample1{
    private:float x,y;
    public:float z;
    void input(){
        cout<<"Enter the value of x and y"<<endl;
        cin>>x>>y;
    }
    void display(){
        cout<<z;
    }
    void add(){
        z=x+y;
    }
    void diff(){
        if(x>y){
            z=x-y;
        }
        else{
            z=y-x;
        }
    }
};
int main(){
    Sample1 s1,s2;
    cout<<"For addition..."<<endl;
    s1.input();
    s1.add();
    s1.display();
    cout<<endl<<"For difference..."<<endl;
    s2.input();
    s2.diff();
    s2.display();
    return 0;
}
