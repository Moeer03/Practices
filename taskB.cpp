#include <iostream>
using namespace std;
//print alternate element array
void showarr(int *ar,int size,int i=0){
        if (i<size){
            cout<< ar[i]<<' ';
            showarr(ar,size,i+2);
        }
}
//wrapper func
void show(int *arr,int s){
    if (s<=0) return ;
    showarr(arr,s);
}

int main(){
    int a[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    show(a,16);
   return 0;
}