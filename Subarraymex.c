#include<stdio.h>

int main(){
    int t;
    int x,n,k,c=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d",&x,&n,&k);
            if(k>n){
                printf("-1\n");
            }
            else{
                c=0;
                for(int i=0;i<x;i++){
                    if(c==k){
                        c=0;
                    }
                        printf("%d ",c);
                        c++;
                }
                printf("\n");
            }
        }
    }
