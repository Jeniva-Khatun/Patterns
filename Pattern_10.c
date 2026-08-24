#include<stdio.h>

 void pattern_2(int n){
    for (int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
             printf("*");
         }
         printf("\n");
     }
 }

void pattern_5(int n){
    for (int i=2;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            printf("*");
        }
        printf("\n");
    }
}

int main (){
 int n;
 printf("Enter no of rows: ");
 scanf("%d",&n);

 pattern_2(n);
 pattern_5(n);

    return 0;
}
