#include<iostream>
using namespace std;
int a;
int b=18;
int main()
{
	cout<<"Please Enter your Age:=>";
	cin>>a; 
	cout<<"your age is:"<<a<<endl;

	if(a>18)
	
	{
		cout<<"YOU ARE  ELIGIBLE FOR VOTE";
	}
	else
	{
		cout<<"YOU ARE NOT ELIGIBLE FOR VOTE\n";
		cout<<"wait for "<<b-a<<"  years more";
	}

}
