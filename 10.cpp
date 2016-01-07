//#10: Summation of primes

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 1000000

long is_prime(long n)
{
	if (n==2) return 1;
    if (n % 2 == 0)	return 0;		
	for (long i = 3; i <= static_cast<long>(sqrt(n))+1; i += 2)	
	{
		if (n % i == 0)  return 0;	
	}
	return 1;
}

void allprime(vector<long> &v){
    v.push_back(2);
    for(long i=3; i<=MAX; i+=2){
        if(is_prime(i)) v.push_back(i);
    }   
}

long sump(vector<long> v, long n){
    long sum=0;
    for(long i=0; v[i]<=n; i++){
        sum+=v[i];
    }
    return sum;
}

int main() {
   
    long t;
    cin>>t;
    vector<long> v(t);
    vector<long> a;
    for(long i=0; i<t; i++){
        cin>>v[i];
    }
    allprime(a);
    for(long i=0; i<t; i++){
        cout<<sump(a,v[i])<<endl;
    }
    return 0;
}
