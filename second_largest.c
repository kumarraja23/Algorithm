#include<stdio.h>
int main(){
int A[100];
int lag,seclag,n;
scanf("%d",&n);
for(int i=0;i<n;i++){
    scanf("%d",&A[i]);
}
lag=A[0];
seclag=A[1];
if(seclag > lag){
    int tem=seclag;
    seclag=lag;
    lag=tem;
}
for(int i=2;i<n;i++){
    if(A[i]>lag){
        seclag=lag;
        lag=A[i];
    }
    else{
        if(A[i] > seclag){
            seclag=A[i];
        }
    }
}
printf("%d\n",seclag);
return 0;
}

