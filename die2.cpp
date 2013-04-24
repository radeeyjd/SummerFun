#include <iostream>
#include <cstdlib>
using namespace std;

class die {
	private:
		int n_die;
	public:
		int roll() {
			return (rand()%6 + 1);
		}
};

int main() {
	die die1, die2;
	int value;
	int rolls[11] = { 0 };
	for(int iii = 0; iii < 1000; iii++) {
		value = die1.roll() + die2.roll();
		rolls[value - 1] ++;
	}
for(int iii = 0; iii < 12; iii++)
	cout << "Number " << iii + 1 << ", occured " << rolls[iii] <<" times" << endl;
	int total = 0;
for(int iii = 0; iii < 12; iii++)
	total += rolls[iii];

	cout << "Total " << total;
}
