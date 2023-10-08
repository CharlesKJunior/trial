// aprogram to calculate and display the area of a triangle
# include <iostream>
//using namespace std;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	float a,b,h;
	cout<<"We are going to calculate the area of the triangle"<<endl;
	cout<<"please input your base length:"<<endl;
	cin>>b;
	cout<<"please input your height length:"<<endl;
	cin>>h;
	a=0.5*b*h;
	cout<<"The area of our triangle with base length "<<b <<"and height length " <<h <<" is: " <<a;
	return 0;
}