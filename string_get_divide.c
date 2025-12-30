#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int len=strlen(str);
    if(len>0&&str[len-1]=='\n'){
        str[len-1]='\0';
        len--;
    }
    if(len>0&&str[len-1]=='.'){
        str[len-1]='\0';
        len--;
    }
    char *word=strtok(str," ");
    while(word!=NULL){
        printf("%s\n",word);
        word=strtok(NULL," ");
    }
    return 0;
}