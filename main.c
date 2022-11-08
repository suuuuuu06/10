#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include<string.h>

void main(void){
   int i;
   char str[30];
   FILE*fp=NULL;
   
   fp=fopen("sample.txt","w");
   
   printf("input a word : ");
   scanf("%s",str);
   fprintf(fp,"%s\n",str);
   
   printf("input a word : ");
   scanf("%s",str);
   fprintf(fp,"%s\n",str);
   
   printf("input a word : ");
   scanf("%s",str);
   fprintf(fp,"%s\n",str);
   
   fclose(fp);

}
