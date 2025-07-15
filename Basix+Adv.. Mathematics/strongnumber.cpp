#include<bits/stdc++.h>
using namespace std;
unsigned int factorial(unsigned int n){    // unsigned int represent only non negative{
	if (n == 0 || n == 1)
		return 1;
	return n * factorial(n - 1);
}
bool isstrong(int n){
    int sum = 0;
    int num = n;
    while (n > 0){
        int id = num % 10;
        sum += factorial(id);
        num /= 10;
    }
    return (sum == n);             //If the sum is equal to n, sum == n evaluates to true.
//                                  If the sum is not equal to n, sum == n evaluates to false.
}
int main(){
    int n;
    cin >> n;
    if(isstrong(n)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
        }
    return 0;
}