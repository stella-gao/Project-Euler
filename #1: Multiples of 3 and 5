#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long func(long long x, int digit){
    return digit*(1+x/digit)*(x/digit)/2;
}


int main() {
    int t;
    scanf("%d", &t);
    long long x;
    for(int i=0; i<t; i++){
        scanf("%d",&x);
    
        long long sum=0;
        sum+=func(x-1,3)+func(x-1,5)-func(x-1,15);
        printf("%lld\n",sum);
    }
        
        
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
