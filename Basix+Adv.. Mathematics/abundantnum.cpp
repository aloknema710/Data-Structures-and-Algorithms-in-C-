//sum of divisors are greater than the number itself
/*
Example 1:
Input: 18
Output: Abundant Number
Explanation: Divisors of 18 are 1,2,3,6,9. 1+2+3+6+9=21, Since 21 is greater than 18, 18 is an abundant number.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n = 18;
	int sum = 0;
	for (int i = 1; i <= sqrt(n); i++) {
		if (n % i == 0) {
			if (n / i == i) {
				sum += i;
			}
			else {
				sum += i;
				sum += n / i;
			}
		}
	}
	sum -= n;                          // for removing 18
	if (sum > n) {
		cout << "Abundant Number" << "\n";
	}
	else {
		cout << "Not Abundant Number" << "\n";
	}

}
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n = 18;
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			sum += i;
		}
	}
            sum-=n;
	if (sum > n) {
		cout << "Abundant Number" << "\n";
	}
	else {
		cout << "Not Abundant Number" << "\n";
	}

}
*/