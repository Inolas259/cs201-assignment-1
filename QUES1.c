#include<stdio.h>
int main(){
  int i,b=0,c=0;
    char str[5000];
   printf("enter the number\n");
   gets(str);
   //scanf("%c",&str[0]);
   for(i=0;str[i]!='\0';i++){
     //  scanf("%c",&str[i]);
     if((int)str[i]==46||(int)str[i]>=48&&(int)str[i]<=57){
         if(b==1){
             c=1;
         }
      if(str[i]=='.'){
          b++;
        }
     }
    }
    if(b==1&&c==1){
       printf("Valid");
   }
   else {
      printf("Invalid");
   }
   return 0;
}
