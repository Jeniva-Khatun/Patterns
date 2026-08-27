#include<stdio.h>
int main (){

    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
   int spaces = 2 * n - 2;////initial space
   for (int i = 1; i <= 2 * n - 1; i++) {     //for star

         int stars = i;
         if (i > n)
             stars = 2 * n - i;

         for (int j = 1; j <= stars; j++) {
                     printf( "*");
                 }

        for(int j=1;j<=spaces;j++){
      printf(" ");
        }

        for (int j = 1; j <= stars; j++) {
                    printf( "*");
                }

         if(i<n) spaces-=2;
         else spaces +=2;
          printf("\n");
    }



    return 0;
}
