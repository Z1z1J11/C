#include <stdio.h>
#include <iostream>
using namespace std;
#ifdef DEBUG

 // DEBUG

int Compare(char* SqlistLa, char* SqlistLb)
{
	int i = 0;
	//int sf = 0;
	while (i <= sizeof(SqlistLa) && i <= sizeof(SqlistLb))
	{
		if (SqlistLa[i] == SqlistLb[i])
		{
			i++;
			if (i > sizeof(SqlistLa) && i > sizeof(SqlistLb))
				/*sf = 1;*/
			return 1;
		}
		else if (SqlistLa[i] < SqlistLb[i])
		{
			/*sf = 2;*/
			return 2;
		}
		else
		{
			/*	sf = 3;*/
			return 3;
		}
	}
}
int main()
{
	char SqlistLa[4] = { 'c','v','b','f' };
	char SqlistLb[4] = { 'c','v','b','d' };
	int sf = 0;
	 sf=Compare( SqlistLa, SqlistLb);
	if (sf == 1)
	{
		cout << "La=Lb" << endl;
	}
	else if(sf==2)
	{
		cout << "La<Lb" << endl;
	}
	else 
	{
		cout << "La>Lb" << endl;
	}
	return 0;
}
		  //表长三种形式
#endif

