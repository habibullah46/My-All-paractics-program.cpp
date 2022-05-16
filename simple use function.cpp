#include<iostream>
using namespace std;
void add(); // Declaring add function.
int main()
{
	int x;
	do
	{
		system("cls");
		add();
		cout<<"\ndo you want to continue \n Press 0 to exit any other number continue.";
		cin>>x;
		
	} while(x!=0);
}
void add()
{
	
	int valueOne;
	int valueTwo;
	
	cout<<"Please enter a number ";
	cin>>valueOne;
	cout<<"please enter a number ";
	cin>>valueTwo;
	cout<<valueOne+valueTwo;

}

