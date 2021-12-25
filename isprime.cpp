#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int n;
	cout << "Enter a number" << endl;
	cin >> n;
	int i;

	if(n <= 1) {
		cout << n << " is not a prime number." << endl;
		return 0;
	}

	if(n == 2){
		cout << n << " is a prime number." << endl;
		return 0;
	}

	else if(n % 2 == 0) {
		cout << n << " is not a prime number." << endl;
		return 0;
	}

	for(i = 3;i <= sqrt(n);i += 2) {
		if(n % i == 0) {
			cout << n << " is not a prime numebr.";
			break;
		}
	}
	
	if(i == n) {
		cout << n << " is a prime number";
	}
return 0;
}
