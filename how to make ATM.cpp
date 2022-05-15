
#include<iostream>
using namespace std;
void line();

int main()
{
	int password;
int option;
int enter;
{
	cout<<"ACCOUNT NAME:             HABIBULLAH\n";
	cout<<"ENTER YOUR PASSWORD       ";
	cin>>password;
	cout<<"1) CURRENT ACCOUNT\n"<<"2) SAVING ACCOUNT\n";
	line();
	cin>>option;
	
	
		cout<<"1) TRANSFER MONEY\n"<<"2) WITHDRAW MONEY\n"<<"3) BALANCE INQUIRY \n";
    
	cin>>enter ;
	
	
	
	 if(enter ==1)
	 {int your_account_number;
	 int transfer_number;
	 int amount;
	 	cout<<"ENTER YOUR ACCOUNT NUMBER\n";
	 	cin>>your_account_number;
	 	
	 	cout<<"ENTER TRANSFER ACCOUNT NUMBER \n";
	 	cin>>transfer_number;
	 	cout<<"ENTER AMOUNT NUMBER \n";
	 	cin>>amount;
	
	 	if(amount>15000)
	 	{
	 		cout<<"THERE IS ONLY 15000 IN YOUR ACCOUNT \n";
	 		cout<<"PLEASE TRY AGAIN LATER ";
		 }
		 else if(amount<=15000)
		 {
		 	cout<<"YOUR TRANSECTION IS COMPELETER\n";
		 	cout<<"THANK YOU!";
		 }
	 }
	 else if (enter==2)
	 {int amount; 
	 	cout<<"ENTER YOUR AMOUNT\n";
	 	cin>>amount;
	 	if(amount>15000)
	 	{
	 		cout<<"THERE IS ONLY 15000 IN YOUR ACCOUNT \n";
	 		cout<<"PLEASE TRY AGAIN LATER ";
		 }
		 else if(amount<=15000)
		 {
		 cout<<"YOUR TRANSECTION IS COMPELETE\n";
	 	cout<<"THANK YOU FOR YOUR COOPERATION\n ";
		 }
	 }
	 else if(enter==3)
    {
    	cout<<"YOUR CURRENT BALANCE =150,000";
	}
}
}void line()
{
	cout<<"************************************";
}

