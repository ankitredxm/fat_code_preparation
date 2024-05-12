#include<stdio.h>
#include<string.h>

int main(){
    char c[100];
    scanf("%s",&c);
    int freq[26];
    for(int i=0;i<26;++i){
        freq[i]=0;
    }
   int i=0;
   while(c[i]!='\0'){
        int temp= c[i]-'a';
        ++freq[temp];
        ++i;
}   
      for(int i=0;i<26;++i){
        printf(" (%c)--(%d)\n",'a'+i,freq[i]);
    }
}    
       
       
  