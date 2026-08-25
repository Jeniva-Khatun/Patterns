#include<stdio.h>
int main (){

    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);

    for(int i=0;i<=n;i++){
        for(int j=0;j<=n-i-1;j++){     //spacee
             printf(" ");
        }
        char ch = 'A';
        int breakpoint = (2*i+1)/2;
        for(int j=1;j<=2*i + 1;j++){
            printf("%c",ch);
           if (j<=breakpoint) ch++;
           else ch--;
        }


            for(int j=0;j<=n-i-1;j++){     //spacee
                 printf(" ");
            }

       printf("\n");
    }
    return 0;
}
