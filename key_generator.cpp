#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
	
  int a,b,c,d;
  char token[63]="qwertyuiopasdfghjklzxcvbnm1234567890QWERTYUIOPASDFGHJKLZXCVBNM";
	
  printf("----------------------------------------\n");
  printf("-------Key generator--------------------\n");
  printf("-------V 1.0.0.0------------------------\n");
  printf("-------Designed by Simone De Luca-------\n");
  printf("----------------------------------------\n\n");
  printf("");
  printf("Enter the length of key: \n");
  scanf("%d",&b);
  printf("\nKEY: \n");
  for(a=0;a<b;a++){
  c = rand()%62;
  printf("%c", token[c]);
				  }  
  while(d!=0);
		}
