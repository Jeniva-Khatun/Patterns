#include<stdio.h>
int main (){

    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    int inis=0; ////initial space
    for(int i=0;i<n;i++){
        for(int j=1;j<n-i+1;j++){  //for star
      printf("*");
        }
        for(int j=0;j<inis;j++){  //for space
      printf(" ");
        }
        for(int j=1;j<n-i+1;j++){  //for star
      printf("*");
        }
          inis+=2;
          printf("\n");
    }

     inis=8; ////initial space
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){  //for star
      printf("*");
        }
        for(int j=0;j<inis;j++){  //for space
      printf(" ");
        }
        for(int j=1;j<=i;j++){  //for star
      printf("*");
        }
          inis-=2;
          printf("\n");
    }


    return 0;
}
