#include<stdio.h>
int main (){

    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){  //for space
      printf(" ");
        }
        for(int j=0;j<2*i+1;j++){  //for *
      printf("*");
        }
        for(int j=0;j<n-i-1;j++){  //for space
      printf(" ");
        }

        printf("\n");

    }
    return 0;
}
