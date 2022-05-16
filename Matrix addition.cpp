#include<iostream>
using namespace std;
int main()
{
	int row;
	int col;
	int i;
	int j;
	int m1[10][10];
	int m2[10][10];
	int sum[10][10];
	cout<<"\nEnter the number of row and column\n";
	cin>>row >>col;
	cout<<"\nenter the "<<row*col<<" elments of the first matrix\n";
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cin>>m1[i][j];
		}
	}
		cout<<"\nenter the "<<row*col<<" elments of the second matrix\n";
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cin>>m2[i][j];
		}
	}
	//sum of the matrices
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			sum[i][j]=m1[i][j]+m2[i][j];
		}
	}
	cout<<"\nThe first matrix is \n";
		for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<m1[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"\nThe second matrix is \n";
		for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<m2[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"\nThe sum of two matrices is \n";
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<sum[i][j]<<"\t";
		}
		cout<<endl;
	}
	return 0;
	
	
}
