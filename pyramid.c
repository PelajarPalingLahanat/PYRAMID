#include <stdio.h>
int main() {
  int row;
  printf("Create a Pyramid :)\n");
  printf("Enter the number of rows : ");
  scanf("%d",&row);
  for(int i = 1; i <= row;i++){
    for(int j = 1; j <= row + i - 1;j++){
      if(j > row - i)printf("x");
      else printf(" ");
    }
    printf("\n");
  }
  return 0;
}
