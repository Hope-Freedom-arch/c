#include<stdio.h>
int main(){
    int a=2,b=4;
    printf("hello !\n");
    printf("%d\n",b);
    ++a;
    ++b;

    void wer(int a,int b);
    wer(a,b);
    getchar();
    return 0;
}
void wer(int a,int b){
    printf("%d\n你还送\n",a*b);
}