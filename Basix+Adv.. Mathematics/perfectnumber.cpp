#include<bits/stdc++.h>
using namespace std;
//  brutesol
//  bool isperfect(int n){ 
//     int sum = 0;
//     for(int i = 1; i < n; i++){
//         if(n % i == 0) sum += i;
//     }
//     return sum == n;
// }
bool isperfect(int n){
    int sum = 0;
    for(int i = 1; i*i < n; i++){
        if(n % i == 0){
            sum += i;
        }
        if(n % i == 0 && i != n/i){
            sum += n/i;
            }
        }
    return sum == n;
}
int main(){
    int n;
    cin>>n;
    if(isperfect(n)){
    cout<<"perfect"<<endl;
    }
    else{
        cout<<"not perfect"<<endl;
    }
    return 0;
}