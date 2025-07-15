//3+7+8=18. 378 is divisible by 18
#include<bits/stdc++.h>
using namespace std;
bool isharshad(int n){
    int temp = n;
	int sum = 0;
	while (temp!=0) {
		sum += temp % 10;
		temp /= 10;
	}
    return n % sum == 0;
}
int main(){
    int n = 378;
    if (isharshad(n)) cout << n << " is a harshad number" << endl;
    
    else cout << n << " is not a harshad number" << endl;
    return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int num=378;
	string s = to_string(num);
	int sum = 0;
	for (int i = 0; i < s.length(); i++) {
		sum += s[i] - '0';
	}
	if (num % sum == 0) {
		cout << "YES it is Harshad Number" << "\n";
	}
	else {
		cout << "NO it is not a Harshad Number" << "\n";
	}

}
*/ 