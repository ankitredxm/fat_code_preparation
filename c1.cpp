#include <stdio.h>
#include <string.h>

int main()
{
   char c[100];
   char c1[50];
   scanf("%[^\n]s",&c);
   getchar();
   scanf("%[^\n]s",&c1);
   getchar();
   int temp=strlen(c1);
   int freq=0;
   
   
   for(int i=0;i<strlen(c);++i){
   int  temp1=0;
    for(int j=0;j<temp;++j){
        if(c[i]==c1[j]){
           ++temp1; 
           ++i;
              
        }
        


    }

    if(temp1==temp){
        ++freq;
    }
   }

   printf("%d",freq);
}
