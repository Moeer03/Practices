#include <iostream>
using namespace std;
//print array
void showarr(int *ar,int size,int i=0){
        if (i<size){
            cout<< ar[i]<<' ';
            showarr(ar,size,i+1);
        }
}
//wrapper func
void show(int *arr,int s){
    if (s<=0) return ;
    showarr(arr,s);
}

int main(){
    int a[]={1,2,3,4,5,6,7,2,3,5,4,3,5,10};
    show(a,14);
   return 0;
}