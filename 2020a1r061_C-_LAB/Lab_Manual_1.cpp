/*Write a program to find area of circle using classes*/
#include<iostream>
using namespace std;

class circle
{
	private : int radius;
				float area;
	public : void input ()
	{
		cin>>radius;
	}
	void display ()
	{
		area=3.14*radius*radius;
		cout<<"area of circle is\n"<< area;
	}
};
	int main()
	{
		circle c;
		c.input();
		c.display();
	}
