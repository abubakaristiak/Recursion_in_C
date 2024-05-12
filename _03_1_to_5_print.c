#include<stdio.h>
void p1(int i){
    if(i==6) return;
    printf("%d\n", i);
    p1(i+1);
}
int main()
{
    p1(1);
    return 0;
}