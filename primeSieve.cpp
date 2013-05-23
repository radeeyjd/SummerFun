#include <iostream>
#include <bitset>
#include <vector>
using namespace std;

vector<int> findprimes(int n_maxPrime)
{
	
	bitset<10000000> sieve; //Bitset to store the values from 0
	sieve.set(); //Set the values of bitset to 1
	vector<int> primes;	//Vector to store the primes	
	int prime = 2; //Starting with the first prime
	while(prime * prime <= n_maxPrime)
	{ //Run till the square root of prime is reached
		for(int mult = 2 * prime; mult <= n_maxPrime; mult += prime) //Traverse throught the prime list starting from 2*, 3*, ..
			sieve.reset(mult);	//reset if the result is the product of the smalles prime
		do
			prime++;  //Check the last unchecked number
		while(!sieve.test(prime));	//Check if it is unchcked
	}

	for(int i = 2; i < n_maxPrime; i++)
	{	//Add the prime number to the vector
		if(sieve.test(i))
			primes.push_back(i);
	}
	return primes; //Return happily the generated primes
}

int main()
{
	vector<int> prime;
	prime = findprimes(1000000);
	cout <<"Number of primes under " << 1000 << " is " << prime.size() << endl;
	for(int i = 0; i < prime.size(); i++)
		cout << prime[i] << " ";
	cout << endl;
}
