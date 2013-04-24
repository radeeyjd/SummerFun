#include <iostream>
#include <cstdlib>
using namespace std;

class die {
	private:
		int n_dieVal;
	public:
		int roll() {
			n_dieVal = (random() % 6) + 1;
			return n_dieVal;
		}
};

int main() {
	int n_points, n_winPoints;
	die die1, die2;
//	n_points = die1.roll() + die2.roll();
	n_points = 2;
	cout << n_points << endl;
	if(n_points == 7) {
		cout << "Hurray, You won" << endl;
		return 0;
		}
	else if(n_points == 2 || n_points == 11 || n_points == 12) {	
		cout << "Oops, Craps " << endl;
		return 0;
		}
	else {
		n_winPoints = n_points;
		for(int iii = 0 ; iii < 7 ; iii++) {
			n_points = die1.roll() + die2.roll();
			if(n_points == n_winPoints) {
				cout << "Hurray, You Won" << endl;
				return 0;
				}
			}
		}
	cout << "Oops, Craps " <<endl;
	return 0;
}

			
		
		
			
