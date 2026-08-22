#include<stdio.h>

void pattern_7(int n){

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
}
  void pattern_8(int n){
      for(int i=0;i<n;i++){
          for(int j=0;j<i;j++){  //for space
        printf(" ");
          }
          for(int j=0;j<2*n-(2*i+1);j++){  //for *
        printf("*");
          }
          for(int j=0;j<i;j++){  //for space
        printf(" ");
          }
printf("\n");
  }

}
int main (){
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);



pattern_7(n);
pattern_8(n);




return 0;
}
