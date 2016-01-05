//#2: Even Fibonacci numbers

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long fib(long n) {
    if (n == 1) return 1;
    long previous = 1;
    long current = 1;
    for (long i = 1; i < n; ++i) {
        long next = previous + current;
        previous = current;
        current = next;
    }
    return current;
}

long summ(long x){
    long sum=0;
    for(long i=2; fib(i)<=x ;i+=3){
        sum+=fib(i);
    }
    return sum;
}


int main() {
    long T;
    cin>>T;
    vector<long> v(T);
    for(long i=0; i<T;i++){
        cin>>v[i];
    }
    for(long i=0; i<T;i++){
        cout<<summ(v[i])<<endl;
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
