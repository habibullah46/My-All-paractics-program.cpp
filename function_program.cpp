#include<iostream>
using namespace std;
void line()
{
	cout<<"X*********************X*********************X*********************X"<<endl;
}
struct Habibullah
{
	int ID;
    string Name;
	string  Class;
	int Roll_No;

};

struct Ashir;
{
	int ID;
    string Name;
	string  Class;
	int Roll_No;

};

int main()
{
    Habibullah Detail;
    
   Detail.ID=123456789;
   
   Detail.Name="habibullah";
   Detail.Class="BSCS";
   Detail.Roll_No=46;

   cout<<"ID is:"<<Detail.ID<<endl;
   cout<<"Name:"<<Detail.Name<<endl;
   cout<<"class:"<<Detail.Class<<endl;
   cout<<"Roll_No:"<<Detail.Roll_No<<endl;
   line();
   
   Ashir Details;
   Detail.ID=1234546546;
   Detail.Name="Hasnain";
   Detail.Class="BSCS";
   Detail.Roll_No=46;
   
   cout<<"ID is: "<<Detail.ID<<endl;
   cout<<"Name:"<<Detail.Name<<endl;
   cout<<"Class:"<<Detail.Class<<endl;
   cout<<"Roll_No:"<<Detail.Roll_No<<endl;
 
}
