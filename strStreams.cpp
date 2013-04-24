#include <iostream>
#include <fstream>
#include <sstream>
#include <cassert>
using namespace std;

int main()
{
	string date = "Today: April 21, 2013";
	string s1, s2, s3, s4;
/****New Input stream****/
	istringstream istr(date);
/****Move Data from input stream to variables****/
	istr >> s1 >> s2 >> s3 >> s4;
	cout << s1 << endl << s2 << endl << s3 << endl << s4 << endl;
/****New File output Stream****/
	ofstream outfile("../outS.out");
/****Move Data to the output Stream****/
	outfile << date;
}
