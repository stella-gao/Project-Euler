//#8: Largest product in a series

#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

long great(long a, long b, string n){
    long max=0;
    long re=1;
    for(long j=0; j<a-b+1; j++){
        for(long i=j; i<j+b; i++){
            re*=n[i]-48;
        }
        if(max<=re) max=re;
        re=1;
    }
    return max;
}

int main() {  
    long t;
    cin>>t;
    vector<long> a(t), b(t);
    vector<string> v(t);
    for(long i=0; i<t; i++){
        cin>>a[i]>>b[i]>>v[i];
    }
    for(long i=0; i<t; i++){
        cout<<great(a[i],b[i],v[i])<<endl;
    }
    return 0;
}
