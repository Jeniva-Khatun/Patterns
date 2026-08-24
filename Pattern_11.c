#include<stdio.h>

 void pattern_11(int n){
     int start=0;
    for (int i=0;i<n;i++){
        if(i%2==0) start=1;
        else start=0;
        for(int j=0;j<=i;j++){
             printf("%d",start);
             start=1-start;
         }
         printf("\n");
     }
 }



int main (){
 int n;
 printf("Enter no of rows: ");
 scanf("%d",&n);

 pattern_11(n);


    return 0;
}
