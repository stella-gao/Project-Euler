// 11: Largest product in a grid

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {  
        //vector<vector<int>> v(20, Vector<int> (20));
        long matrix[20][20];
        long product=1,max=0;
        for(long i=0; i<20; i++){
            for(long j=0; j<20; j++){
                cin>>matrix[i][j];
            }
        }
        for(int i=0;i<20;i++){
            for(int j=0;j<17;j++){
                product=matrix[i][j]*matrix[i][j+1]*matrix[i][j+2]*matrix[i][j+3];
                if(product>max){
                    max=product;
                }
                
            }
        }
        for(int i=0;i<17;i++){
            for(int j=0;j<20;j++){
                product=matrix[i][j]*matrix[i+1][j]*matrix[i+2][j]*matrix[i+3][j];
                if(product>max){
                    max=product;
                }
                
            }
        }
        for(int i=0;i<17;i++){
            for(int j=0;j<17;j++){
                product=matrix[i][j]*matrix[i+1][j+1]*matrix[i+2][j+2]*matrix[i+3][j+3];
                if(product>max){
                    max=product;
                }
                
            }
        }
        for(int i=3;i<20;i++){
            for(int j=0;j<17;j++){
                product=matrix[i][j]*matrix[i-1][j+1]*matrix[i-2][j+2]*matrix[i-3][j+3];
                if(product>max){
                    max=product;
                }
                
            }
        }
    cout<<max<<endl;
    
    return 0;
}
