/*Write a Program to find average of players*/
#include<iostream>
using namespace std;
struct player
{
      char name[20];
      int innings;
      int runs;
      int notout;
      float avg;
};
int main ()
{
      int i,n;
      cout<<"Enter Number Of Players\n"<<endl;
      cin>>n;
      player p[n];
      for (i=0;i<n;i++)
      {
            cin>>p[i].name>>p[i].innings>>p[i].notout>>p[i].runs;
            p[i].avg=(float)p[i].runs/(p[i].innings=p[i].notout);
      }
      for(i=0;i<n;i++){
            if(p[i].avg>50)
            cout<<p[i].name <<"average"<<p[i].avg;
      }
      return 0;
}
