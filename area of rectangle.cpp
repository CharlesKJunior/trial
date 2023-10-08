//a program which computes and displays the area of a rectangle
#include<iostream>
using namespace std;

int main()
{
	int l;
	int w;
	int a;
	
	cout<<"Please enter any number of your choice that you would like to call your length "     ;
	cin>>l;
	
	cout<<"Please enter any number of your choice that you would like to call your width "     ;
	cin>>w;
	
	a=l*w;
	
	cout<<"The area of the rectangle with length " <<l <<" and width " <<w <<" is " << a ;
	return 0;
}