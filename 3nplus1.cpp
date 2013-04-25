#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int getCycleLength(int);

int main()
{
	ifstream iFile("110101.inp");
	ofstream oFile;
	ostringstream cycleop;
	for(int iii = 0; iii < 4; iii++)
	{
		int n_val1, n_val2;
		int n_maxCycle = 0;
		iFile >> n_val1 >> n_val2;
		for(int jjj = n_val1; jjj <= n_val2; jjj++)
		{
			int n_Clen = getCycleLength(jjj);
			if( n_maxCycle < n_Clen)
	 			n_maxCycle = n_Clen;
		}
		cycleop << n_val1 << " " << n_val2 << " " << n_maxCycle << endl;
	}
		oFile.open("110101.oup");
		oFile << cycleop.str();
		oFile.close();
}

int getCycleLength(int n_number)
{
	int n_cycleLength = 1;
	while(n_number != 1)
	{
		if(n_number % 2 == 0)
			n_number /= 2;
		else
			n_number = n_number * 3 + 1;
		n_cycleLength++;
	}
	
	return n_cycleLength;
}
