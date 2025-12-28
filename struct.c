#include<stdio.h>
#define N 10
struct Student {
    char id[15];
    char name[15];
    double usual,final,overall;
};
void input_student(struct Student s[],int n){
    for(int i=0;i<n;i++){
        printf("请输入学号:\n");
        scanf("%s",s[i].id);
        printf("请输入姓名:\n");
        scanf("%s",s[i].name);
        printf("请输入平时成绩:\n");
        scanf("%lf",&s[i].usual);
        printf("请输入期末成绩:\n");
        scanf("%lf",&s[i].final);
        s[i].overall=s[i].usual*0.4+s[i].final*0.6;
    }
}
void my_sort(struct Student s[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            struct Student temp;
            if(s[j].overall>s[j+1].overall){
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
}
void output_student(struct Student s[],int n){
    printf("成绩最高的学生学号是:%s\n",s[n-1].id);
}
int main(){
    struct Student s[11];
    input_student(s,N);
    my_sort(s,N);
    output_student(s,N);
    return 0;
}