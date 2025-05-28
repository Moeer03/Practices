#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Matrix{
	int ROWS, COLS;
	int **m;
};
void init(Matrix &mat, const int ROWS,const int COLS){
	int i, j;
	mat.ROWS=ROWS;
	mat.COLS=COLS;
	mat.m=new int*[ROWS];
	for (i=0;i<ROWS;i++){
		mat.m[i]=new int[COLS];
		for (j=0;j<COLS;j++)
			mat.m[i][j]=rand()%5+2;
	}	
}
void init(Matrix &mat){
	cout<<"Enter Rows:";
	cin>>mat.ROWS;
	cout<<"Enter Cols:";
	cin>>mat.COLS;
	mat.m=new int*[mat.ROWS];
	int i,j;
	for (i=0;i<mat.ROWS;i++){
		mat.m[i]=new int[mat.COLS];
		for (j=0;j<mat.COLS;j++)
			mat.m[i][j]=rand()%5+2;
	}	
}
void add(Matrix &m1, Matrix &m2){
	int i, j;
	for (i=0;i<m1.ROWS;i++){
		for (j=0;j<m1.COLS;j++)
			cout<<m1.m[i][j]+m2.m[i][j]<<' ';
		cout<<'\n';
	}	
}
void show(Matrix &matrx){
	int i, j;
	for (i=0;i<matrx.ROWS;i++){
		for (j=0;j<matrx.COLS;j++)
			cout<<matrx.m[i][j]<<' ';
		cout<<'\n';
	}	
}
void del(Matrix &matrix){
	int i;
	for (i=0;i<matrix.ROWS;i++)
		delete []matrix.m[i];
	delete []matrix.m;
}
int main(){
	srand(time(0));
	cout<<"Size of Matrix:"<<sizeof(Matrix)<<'\n';
	Matrix m1, m2;
	init(m1,3,5);
	show(m1);
	init(m2,3,5);
	cout<<'\n';
	show(m2);
	cout<<'\n';
	add(m1, m2);
	del(m1);
	del(m2);
	return 0;
}

