//#5: Smallest multiple

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


long gcd(long a, long b){
	if( b==0 ) return a;
	return gcd(b, a%b);
}
long lcm(long a, long b){
	return a*b / gcd(a,b);
}

long SM(long n){
    if(n==1) return 1;
    long re=2;
    for(long i=3; i<=n;i++){
        re=lcm(re,i);
    }
    return re;
}

int main() {
   
    long t;
    cin>>t;
    vector<long> v(t);
    for(long i=0; i<t; i++){
        cin>>v[i];
    }
    for(long i=0; i<t; i++){
        cout<<SM(v[i])<<endl;
    }
    return 0;
}
