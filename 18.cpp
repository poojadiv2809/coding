#include<iostream>
#include<string.h>
#include<stdio.h>
//#include<conio.h>
using namespace std;
class tollbooth
{
	int totcash;
	int totcars;
	public:
	tollbooth()
	{
		totcash=0;
		totcars=0;
	}
	void disp()
	{
		cout<<"\n\t total car passed:"<<totcars;
		cout<<"\n\t total cash collected:"<<totcash;
	}
	void pay_cars();
	void non_pay_cars();
};
void tollbooth::pay_cars()
{
	totcash=totcash+50;
	totcars++;
	cout<<"\ncar passed  with toll\n";
}
void tollbooth::non_pay_cars()
{
	totcars++;
	cout<<"\ncar passed without toll\n";
}
int main()
{
	tollbooth T;
	char ch;
	
	while(1)
	{
		cout<<"eneter P/N/e:";
	    cin>>ch;
		if(ch=='P'||ch=='p')
		{
			T.pay_cars();
		}
		else if(ch=='N'||ch=='n')
		{
			T.non_pay_cars();
		}
		else if(ch=='e')
		{
			T.disp();
			break;
		}
	}
	return 0;
}

		