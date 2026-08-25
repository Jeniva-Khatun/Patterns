#include<stdio.h>

int main (){

int n;
printf("Enter no of rows :");
scanf("%d",&n);

for(int i=0;i<n;i++){
for(char ch = 'E'-i; ch<='E';ch++){
    printf("%c ",ch);
}
printf("\n");

}

    return 0;
}
