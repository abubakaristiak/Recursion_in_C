#include<stdio.h>
void p1(int i){
    if(i==0) return;
    printf("%d\n", i);
    p1(i-1);

}
int main()
{
    p1(5);
    
    return 0;
}