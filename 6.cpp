//#6: Sum square difference

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long squareSum(int n){
    long sum=0;
    for(long i=1; i<=n; i++){
        sum+=i*i;
    }
    return sum;
}

long sumSquare(int n){
    long sum=0;
    for(long i=1; i<=n; i++){
        sum+=i;
    }
    return sum*sum;
}

long diff(int n){
    return sumSquare(n)-squareSum(n);
}

int main() {
   
    long t;
    cin>>t;
    vector<long> v(t);
    for(long i=0; i<t; i++){
        cin>>v[i];
    }
    for(long i=0; i<t; i++){
        cout<<diff(v[i])<<endl;
    }
    return 0;
}
