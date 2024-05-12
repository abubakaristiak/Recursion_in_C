#include<stdio.h>
void play(int i){
    if(i==10) return;
    printf("I alway play with you!!!\n");
    play(i+1);
}
int main()
{
    play(1);
    
    return 0;
}