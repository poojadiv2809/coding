#include<iostream>
using namespace std;
class timet
{
	int hr,min, sec;
	public:
	void accept();
	void sum(timet,timet);
	void disp_12();
	void disp_24();
	void convert();
};
void timet::accept()
{
	cout<<endl<<"enter the hr min sec=";
	cin>>hr>>min>>sec;
	convert();
}
void timet::sum(timet A,timet B)
{
	sec=A.sec=B.sec;
	min=A.min+B.min;
	hr=A.hr+B.hr;
	convert();
}
void timet::convert()
{
	min=min+(sec/60);
	sec=sec%60;
	hr=hr+(min/60);
	min=min%60;
	hr=hr%24;     //hour within 24 hours
}
void timet::disp_12()
{
	int disp_hr;
	disp_hr=hr%12==0?12:hr%12;
	string period=hr>=12?"pm":"am";
	
	cout<<"\n"<<disp_hr<<":"<<min<<":"<<sec<<period;
}
void timet::disp_24()
{
	cout<<"\n"<<hr<<":"<<min<<":"<<sec;
}
int main()
{
	timet t1,t2,t3;
	t1.accept();
	t2.accept();
	t3.sum(t1,t2);
	
	cout<<"\n\n Time 1 (24 hrs format)";
	t1.disp_24();
	cout<<"\nTime 2 (24 hrs format)";
	t2.disp_24();
	cout<<"\n********************************************************************";
    cout<<"\n time 3 24 hrs format";
    t3.disp_24();
	cout<<"\n tme 3 12 hrs display";
	t3.disp_12();
	
	return 0;
}