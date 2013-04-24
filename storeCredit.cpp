/**Google code Jam***/
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

string findItems(int, int[], int);

int main()
{
	int n_total
		,n_numofitems
		,n_items[2000]
		,n_tests;

	ifstream iFile("A-large-practice.in");
	iFile >> n_tests;
	for(int iii = 0; iii < n_tests; iii++)
	{
		iFile >> n_total;
		iFile >> n_numofitems;
		for(int jjj = 0; jjj < n_numofitems; jjj++)
			iFile >> n_items[jjj];
		cout <<"Case #" << iii+1 <<": " << findItems(n_total, n_items, n_numofitems) << endl;
	}
	
}

string findItems(int n_tot, int n_items[],int n_size)
{
	ostringstream items;	
	for(int iii = 0; iii < n_size; iii++)
		for(int jjj = 0; jjj < n_size; jjj++)
			{
				if( iii == jjj)
					break;
				if( n_tot == (n_items[iii] + n_items[jjj]) )
				{
				if(iii < jjj)
					items << (iii+1) << " " << (jjj+1);
				else
					items << (jjj+1) << " " << (iii+1);
				return items.str();	
				}	
			}
	return "Error";
}

/***Improvement****/
/***Sort the items and work from middle / half of total****/
