#include <iostream>
using namespace std;
//print each adjacent pair on single line
void showarr(int *ar,int size,int i=0){
        if (i<size){
            cout<< ar[i]<<' ';
            if (i+1<size)
                cout<< ar[i+1]<<endl;
            showarr(ar,size,i+1);
        }
}
//wrapper func
void show(int *arr,int s){
    if (s<=0) return ;
    showarr(arr,s);
}

int main(){
    int a[]={1,2,3,4,5,6,7};
    show(a,7);
   return 0;
}