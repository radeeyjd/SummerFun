#include <iostream>
using namespace std;

int* insSort(int* n_vals, int size);

int main()
{

	int a[] = {2, 3, 1, 5, 4, 7, 5};
	insSort(a, 7);
	for(int iii = 0; iii < 7; iii++)
		cout << a[iii];

}

int* insSort(int* n_vals, int size)
{
	int key, iii;
	for(int jjj = 1; jjj < size; jjj++) //Start from the second element and check backwards for the correct position to insert
	{
		key = n_vals[jjj]; //Temp variable for the value
		iii = jjj - 1;	//Check the behind of the array
		while(iii >= 0 && n_vals[iii]  key)	
		{	//Not reached the first element or value is greater than the key
			n_vals[iii + 1] = n_vals[iii]; //move the value behind the list
			iii--;	//Next smaller element
		}
		n_vals[iii+1] = key; //Place the element in the correct posistion
	}
}
