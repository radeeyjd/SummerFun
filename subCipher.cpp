#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

int main(int argc, char *argv[])
{
	string plainText,
			cipherText,
			iFile,
			oFile;
	int key;
	char let;


	ifstream ipFile("../op");
	ofstream opFile("../ip");
	cout << "Please enter the secret key shift: " << iFile << oFile ;
	cin >> key;	
	let = ipFile.get();
	ostringstream ostr;
	while(ipFile.good())
	{
		opFile << (char)(let - key);
		let = ipFile.get();
	}
	ipFile.close();
	opFile.close();
	return 0;
}
