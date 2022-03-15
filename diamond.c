
#include <stdio.h>
int main() {
  int row;
  printf("Create Diamond :)\n");
  printf("Enter the number of rows : ");
  scanf("%d",&row);
  for(int i = 1; i <= 2 * row - 1 ;i++){
    if(i <= row){
    for(int j = 1; j <= row + i - 1;j++){
      if(j > row - i)printf("x");
      else printf(" ");
      }
      //printf("%d",i);
    printf("\n");
      }
      else {
        for(int a = 0; a <= row + (row - 3);a++){
          if(a >= i - row &&  a < (2 * row - 1) - (i - row) )printf("x");
          else printf(" ");
          //printf("%d",a);

        }
        printf("\n");
      }
    }
    return 0;
  }
