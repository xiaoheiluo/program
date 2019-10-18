#include <stdio.h>
int main(){
    int factor=0;
    int N=0; 
    scanf("%d",&N);
    for(int i=2;i<N;i++){
        if(N%i==0){
            factor++; 
        }
    }
    if(factor==0){
        printf("Prime");
    }else{
        printf("Composite");
    }
    return 0;
}

