//C++ Event Managemdnt System
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
class event
{
	public:
	int min;
	float g;
	char ev[20],name[50];
	void input()         //Input function to take input for event management system
	{
		cout<<"**************Event Management System**************";  
		cout<<endl<<"Enter the name of the event ";
		cin>>ev;
		if(strcmp("wedding",ev)==0||strcmp("Wedding",ev)==0||strcmp("WEDDING",ev)==0)
		{
			fflush(stdin);
			cout<<"Enter the customer's first and last name ";  //Getting input for wedding event   
			gets(name);                                          //like name,no of guests and minutes of event
			fflush(stdin);
			cout<<"Enter the number of guests ";
			cin>>g;
			cout<<"Enter the number of minutes in the event ";
			cin>>min;
		}
		else
		{
			cout<<"This is Only for wedding";
		}
	}
};
class cost : public event  
{
	public:
	float servers,cph=18.5,cpm=0.4,cd=20.70,costforoneserver,cost1,cost2,totalfoodcost,totalcost;
	void costs()                             
	{
		servers=ceil(g/20);          // Calculations like no. of servers cost for servers,food and 
		cost1=(min/60)*cph;          //total cost
		cost2=(min%60)*cpm;
		costforoneserver = cost1 + cost2;
		totalfoodcost=g*cd;
		totalcost=totalfoodcost+(costforoneserver*servers);
	}
};
class estimate: public cost                        // This is an example of multilevel inheritance
{              
    public:                             
	void display()                                     
	{
		cout<<endl<<endl<<"====================Event estimate for: "<<name<<"==================== ";
		cout<<endl<<"Number of server: "<<servers;
		cout<<endl<<"The Cost for Servers: "<<costforoneserver;
		cout<<endl<<"The Cost for Food is: "<<totalfoodcost;
		cout<<endl<<"Average Cost Per Person: "<<cd;
		cout<<endl<<endl<<"Total cost is: "<<totalcost;
		cout<<endl<<"Please deposit a 25% deposit to reserv the event";
		cout<<endl<<"The deposit needed is: "<<0.25*totalcost;
	}
};
main()
{
   estimate e;
   e.input();
   e.costs();
   e.display();
}

