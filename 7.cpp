//#7: 10001st prime

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 200000

long is_prime(long n)
{
	if (n==2) return 1;
    if (n % 2 == 0)	return 0;		
	for (long i = 3; i <= static_cast<long>(sqrt(n))+1; i += 2)	// Skip all the even numbers  
	{
		if (n % i == 0)  return 0;	//not prime
	}
	return 1;
}

void allprime(vector<long> &v){
    for(long i=2; i<MAX; i++){
        if(is_prime(i)) v.push_back(i);
    }   
}

long nprime(vector<long> v, long n){
    return v[n];
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
        cout<<nprime(a,v[i]-1)<<endl;
    }
    return 0;
}
