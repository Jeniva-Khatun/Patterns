#include<stdio.h>

void pattern_12(int n){
    for (int i = 1; i <= n; i++) {

        /// Print numbers
           for(int j=1;j<=i;j++){
               printf("%d",j);
           }

           // Print spaces at the front
           for (int j = 1; j <=2*(n-i); j++) {
               printf(" ");
           }

           // Print numbers in reverse
           for (int j = i; j >= 1; j--) {
               printf("%d", j);
           }

           printf("\n");
       }
}

int main (){
 int n;
 printf("Enter no of rows: ");
 scanf("%d",&n);

 pattern_12(n);

    return 0;
}
