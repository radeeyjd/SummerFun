#include <iostream>
#include <bitset>
#include <vector>
using namespace std;

int main() {
	cout << "Please enter the limit" << endl;
	int n;
	cin >> n;
	vector<int> nums;
	bitset<100> bset;
	bset.set();
	for(int iii = 1; iii <= n; iii++) {
		nums.push_back(iii);
		cout << "Numbers are " << iii << endl;
	}
		cout << endl;
	int count = 0;
	for(int jjj = 1  ; count < n-1; ) {
		bset.reset(jjj);
		cout << "Resetting " << nums[jjj] << " " << endl;
		do { 
		jjj = (jjj+2)%n;
		}while(!bset.test(jjj));
		count++;

	}
	for(int iii = 0; iii < n; iii++) {
		if(bset.test(iii))
			cout << endl << "Answer is"<< nums[iii];
			return 0;
	}
}
