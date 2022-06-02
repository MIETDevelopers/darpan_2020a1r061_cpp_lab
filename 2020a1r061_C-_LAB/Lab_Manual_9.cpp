/*Write a Program of sample class using constructor*/
#include<iostream>
using namespace std;
class Sample{
private:int x;
        float y;
public:Sample(){
    x=10;
    y=20.5;
}
Sample(Sample &c){
    x=c.x;
    y=c.y;    
}
void display(){
    cout<<x<<" "<<y;
}
~Sample(){

}
};
int main(){
    Sample S1,S2(S1);
    S1.display();
    S2.display();
    return 0;
}
