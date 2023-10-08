//a program which computes and displays the total amount of money to paid by a customer after receiving the unit cost and quantity of three products from the user
// d-total amount, e for computers, f for phones, g for wires h is computer qty , i is phone qty, j is wire qty k is for fridges l is for fridge qty
# include <iostream>
using namespace std;
int main()
{
	float d,e=500,f=250,g=50,h,i,j,k=75,l;
	cout<<"welcome to our Tech shop, We sell computers, Phones, and wires and fridges"<<endl;
	cout<<"Computers cost 500 each, phones cost 250 each and wires cost 50 each and fridges cost 75 each"<<endl;
	cout<<"Enter how many computers you would like to buy: ";
	cin>>h;
	cout<<"Enter how many phones you would like to buy: ";
	cin>>i;
	cout<<"Enter how many wires you would like to buy: ";
	cin>>j;
	cout<<"Enter how many fridges you would like to buy: ";
	cin>>l;
	d=e*h+f*i+g*j+k*l;
	cout<<"Our dear customer, you are required to pay "<<d <<" for the products that you have purchased";
 } 