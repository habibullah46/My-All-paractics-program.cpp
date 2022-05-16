#include<iostream>
using namespace std;
void line();
int main()
{
	int programming;
	int computer ;
	int english;
	int physics;
	int pak_study;
	int total;
	int Average;
	int percentage;
	{
		cout<<"student name==> habibullah"<<endl;
		line();
		cout<<"Class==> BSCS(1st)"<<endl;
		line();
		cout<<"subject name==> programming"<<endl;
		line();
		cout<<"subject name:"<<endl;
		cout<<"1:Programming"<<endl<<"2:computer"<<endl<<"3:English"<<endl<<"4:Pysics"<<endl<<"5: Pak_study"<<endl;
		line();
		cout<<"\n1:Enter the  marks of programming\n";
		cin>>programming;
		cout<<"2:Enter the  marks of computer \n";
		cin>>computer;
		cout<<"3:Enter the  marks of english \n";
		cin>>english;
		cout<<"4:Enter the  marks of physics\n";
		cin>>physics;
		cout<<"5:Enter the  marks of pak study\n";
		cin>>pak_study;
		line();
		total=programming+computer+english+physics+pak_study;
		cout<<"total marks of 5 subject is ="<<total<<endl;
		line();
		Average= total/5;
		cout<<" the average marks is="<<Average<<endl;
		line();
		percentage= (total*100)/500;
		cout<<"percentage of student is="<<percentage<<"%";
		
		if(percentage>64)
		{
			cout<<"pass";
			cout<<" very good ";
		}
		else
		{
		
		cout<<"fail";
		cout<<" Don't Worry!!!! AND !!! TRY AGAIN !!! BEST OF LUCK";
	}
	}

}
	void line()
	
{
			cout<<"<======================>"<<endl;
}
