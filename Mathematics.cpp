#include<iostream>
using namespace std;
void Calculator();
void Table();
int main()
{
	int x;
	cout<<"Welcome To My Program"<<endl;
	cout<<endl;
	cout<<"What did you want "<<endl;
	cout<<"1.Calculator\n 2.Table "<<endl;
	cin>>x;
	
	switch(x)
	{
		case 1:
			Calculator();
			
		case 2:
			Table();	
	}	
}
void Calculator()
{
	label:
	int valueOne,valueTwo,Numb;
	cout<<"Please Enter Value One "<<endl;
	cin>>valueOne;
	cout<<"Please Enter Value Two "<<endl;
	cin>>valueTwo;
	
	//label:
//	int Numb;
	cout<<"Which Method do you want to Performed"<<endl;
	cout<<"1.Addition\n2.Subtraction\n3.Multiplication"<<endl;
	cin>>Numb;
	
	switch(Numb)
	{
		case 1:
				cout<<valueOne+valueTwo<<endl;
				break;
		
		case 2:
				cout<<valueOne-valueTwo<<endl;
				break;
		
		case 3:
				cout<<valueOne*valueTwo<<endl;
				break;
		
		default:
				cout<<"Enter Invalid Number "<<endl;
				cout<<"Please try again "<<endl;
				
	}
			goto label;
	
}
void Table()
{
	int num,lim;
	cout<<"Enter Number "<<endl;
	cin>>num;
	cout<<"Enter Limit "<<endl;
	cin>>lim;
	
	for(int i=1;i<lim;i++)
	{
		cout<<num<<"x"<<i<<"="<<num*i<<endl;
	}
}