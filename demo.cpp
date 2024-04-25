#include<iostream>
using namespace std;
void TablePrint(int, int);
void TableRepeater(bool,string,string);
void His();

int main()
{
	
	TableRepeater(true,"Please enter a number","Please enter limit");
	//TableRepeater(false,"ABC","DEF");
}


void TablePrint(int number, int _limit)
{
		int Number,limit;
		Number = number;
		limit = _limit;
		for(int i=0;i<limit;i++)
		{
			cout<<Number<<"x"<<i<<"="<<Number*i<<endl;
		}
}

void His()
{
	int history_counter;
	char history_maintainer;
			do
			{
				cout<<"Do you want to keep the history? (Y/N)?";
				cin>>history_maintainer;
			}
			while((history_maintainer != 'Y' && history_maintainer != 'y') && (history_maintainer != 'N' && history_maintainer != 'n'));
			
			if(history_maintainer == 'N' || history_maintainer == 'n')
			{
				system("cls");
				history_counter++;
				if(history_counter == 1)
				{
					cout<<"History cleaned "<<history_counter<<" Time"<<endl;
				}
				else
				{
					cout<<"History cleaned "<<history_counter<<" Times"<<endl;
				}
	
				cout<<"Welcome to the table generator program"<<endl;
	
			} //history maintain if closing. . .	
}

void TableRepeater(bool RepeatProgram,string MessageOne, string MessageTwo)
{
	int flag=1;
	int choice, limit;
	while(flag==1)
	{
		cout<<MessageOne;
		cin>>choice;
	
		cout<<MessageTwo;
		cin>>limit;
		
		TablePrint(choice, limit);
		if(RepeatProgram == true)
		{
			cout<<"Press 1 to Continue or any other key to exit ";
			cin>>flag;
		}
		else
		{
			flag = 0;
		}
		if(flag ==1)
			His();
	}
}