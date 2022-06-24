//18/06/22
#include<iostream>
using namespace std;
void Introduction()
{
	                       cout<<"          WELL COME \n";
                                 	cout<<"      TO \n";
                      	cout<<"    GILGIT BALTISAN TOURE\n";
                                            cout<<"  PAGE\n";
}   
void line() 
{
	cout<<"\n***********************************************************************"<<endl;
}
int main()
{
	Introduction();
	line();
	int choice;
	
	cout<<"INTRODUCTION:\n";
    cout<<"             Throug our page , you will be able to know the name of all tourists places of Gilgit Baltistan "<<endl;
	cout<<"and you also know how much distance from islamabad and hwo many times it will take place.\n"<<endl;
	
	cout<<"GILGIT BALTISTAN:"<<endl;
	cout<<"                 Gilgit Baltistan is one ofe the most beautiful places of Pakistan.In million of people from "<<endl;
	cout<<"all over the world,come to the gravel in Gilgit Baltistan."<<endl;
	line();
	
	cout<<"Where you want to go in Gilgit Baltistan\n1.Gilgit\n2.Baltistan"<<endl;
	cin>>choice;

    int a;  //declear to run case 1
    do
	switch(choice)
	{
		
	case 1:
		cout<<"There are most Top 5 Beautiful Places In Gilgit For Tourist:\n1.Altit Fort, Hunza Valley\n2.Nagar Valley\n3.Ishkoman valley, Ghizar River\n4.Darkut Valley ,Yasin ";
		 line();
		 cout<<"\n\nPress given key to check the distance of this place from islamabad"<<endl;
		 cin>>a;
		 if(a==1)
		 {
		 	cout<<"Altit Fort, Hunza Valley (603.3 km) away from the islamabad and it takes 12 hr 50min time"<<endl; 
		 }
		 
		 if(a==2)
		 {
		 		cout<<"Nagar Valley (602.7 km) away from the islamabad and it takes 13 hr 2 min time"<<endl;
		 
		 }
		 
		 if(a==3)
		 {
		 		cout<<"Ishkoman Valley,Ghizar River (640.5km)away from the islamabad and it takes 14 hr 53min time"<<endl;
		 }

		break;
		
		int b;  //declear to run case 2
	case 2:
	
		cout<<"There Are Most Top 5 Beautiful Places In Baltistan For Tourist:\n1.Shangrilla Resort kachura skardu\n2.Deosai National Park Of Skardu\n3.shigar valley\n4.Upper kachura lake Skardu\n5.Manthokha Waterfall Skardu";
	break;
	line();
	
	cout<<"\n\nPress given key to check the distance of this place from islamabad"<<endl;
	cin>>b;
	
	if(b==1)
	{
	cout<<"Shangrilla Resort Kachura Skardu(621.5km) away from the Islamabad and it takes 18hr 50m times "<<endl;
    }
    if(b==2)
    {
    	cout<<"Deosai National Park Skardu(600km)away from the Islamabad and it takes 18hr times and height is  4,114 metres (13,497 ft)"<<endl;
    	
	}
	if(b==3)
	{
		cout<<"Shighar valley (6500km)away from the ISlamabad and it takes almost 24 hr times "<<endl;
	}
	if(b==4)
	{
		cout<<"Upper Kachura Lake Skardu(600km)away from the islamabad "<<endl;
	}
	if(b==5)
	{
		cout<<"SORRY I HAVE NO INFORMATION ABOUT THIS LOCATION"<<endl;
	}
	cout<<"PLEASE ENTER ANY NUMBER TO CONTINUE EXCEPT 0"<<endl;

}

	while(a=0);
  
}
