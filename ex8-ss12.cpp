#include<stdio.h>
int ucln(int a,int b){
	while (b !=0){
		int temp=b;
		b=a%b;
		a=temp;
		}
		return a;
		}
int main(){
    int mun1=99;
	int mun2=87;
	int kq=ucln(mun1,mun2);
	printf("Uoc chung lon nhat cua %d và %d là: %d\n", mun1,mun2,kq);
	return 0;
	}
	
