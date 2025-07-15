#include<bits/stdc++.h>
using namespace std;
int secondlargest(int n, vector<int> &a){
    int largest=a[0];
    int slargest=-1;
    for(int i=1;i<n;i++){
        if(a[i]>largest){
            slargest=largest;
            
            largest=a[i];
        }
        else if( slargest<a[i] && a[i]<largest){
            slargest=a[i];
        }
    }
    return slargest;
}
int secondsmallest(int n, vector<int> &a){
    int smallest=a[0];
    int ssmallest=INT_MAX;
    for(int i=1;i<n;i++){
        if(a[i]<smallest){
            ssmallest=smallest;
            smallest=a[i];
        }
        else if(a[i]!=smallest && a[i]<ssmallest){
            ssmallest=a[i];
        }
    }
    return ssmallest;
}
vector<int> getSecondOrderElements(int n, vector<int> a) {
    int slargest=secondlargest(n, a);
    int ssmallest=secondsmallest(n, a);
    return {slargest, ssmallest};
}
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    vector<int> result = getSecondOrderElements(n, a);
    cout << result[0] << " " << result[1] << endl;
}