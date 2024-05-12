#include<stdio.h>
void girlfriend(){
    printf("girl friend: wezida\n");
}
void f2(){
    girlfriend();
    printf("best friend: sobuj\n");
}
void f1(){
    f2();
    printf("friend: asadullah\n");

}
int main()
{
    f1();
    return 0;
}