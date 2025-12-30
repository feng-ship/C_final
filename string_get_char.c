#include <stdio.h>
#include <string.h>

int main()
{
   char sentence[100];
   fgets(sentence,sizeof(sentence),stdin);
   int len=strlen(sentence);
   if(len>0&&sentence[len-1]=='\n'){
    sentence[len-1]='\0';
    len--;
   }
   if(len>0&&sentence[len-1]=='.'){
    sentence[len-1]='\0';
    len--;
   }
   int j=0;//j记录单词长度，i记录位置，k用于打印
   for(int i=0;i<=len;i++){
    if(sentence[i]!=' '&&sentence[i]!='\0'){
        j++;
    }else if(j>0){
        for(int k=i-j;k<i;k++){
            printf("%c",sentence[k]);
        }
        printf("\n");
        j=0;
    }
   }
   return 0;
}