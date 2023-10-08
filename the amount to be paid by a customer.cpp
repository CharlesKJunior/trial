//a program which computes and displays the total amount of money to paid by a customer after receiving the unit cost and quantity of three products from the user
// d-total amount, e for computers, f for phones, g for wires h is computer qty , i is phone qty, j is wire qty
# include <iostream>
using namespace std;
int main()
{
	float d,e=500,f=250,g=50,h,i,j;
	cout<<"welcome to our Tech shop, We sell computers, Phones, and wires"<<endl;
	cout<<"Enter how many computers you would like to buy";
	cin>>h;
	cout<<"Enter how many phones you would like to buy";
	cin>>i;
	cout<<"Enter how many wires you would like to buy";
	cin>>j;
	d=e*h+f*i+g*j;
	cout<<"Our dear customer, you are required to pay "<<d <<"for the products that you have purchased";
 } 