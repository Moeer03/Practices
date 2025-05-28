#include <iostream>
using namespace std;

//print cumulative sum of N 
void show(int n,int sm=0,int i=1){
    if (i<=n){
        cout<< sm+i<<endl;
        show(n,sm+i,i+1);
    }
}
//wrapper func
void comSum(int n){
    if (n<=0) return; 
    show(n);
}

int main(){
    int n=10;
    comSum(n);
   return 0;
}