// #include<stdio.h>
// int f1(char ch[]){
//     int count = 0;
//     int i=0; 
//     while(ch[i] !='\0'){
//         count++;
//         i++;
        
//     }
//     return count;
// }
// int main()
// {
//     char ch[100];
//     scanf("%s", &ch);
//     int val = f1(ch);
//     printf("%d", val);

//     return 0;
// }

#include<stdio.h>
int fun(char ch[], int i){
    if(ch[i] =='\0') return 0;
    int l = fun(ch, i+1);
    return l+1;
}
int main()
{
    char ch[] = "istiak";
    int length = fun(ch, 0);
    printf("%d", length);
    return 0;
}

// #include<stdio.h>
// int fun(char ch[], int i){
//     if(ch[i] =='\0') return 0;
//     int l = fun(ch, i+1);
//     return l+1;
// }
// int main()
// {
//     char ch[100];
//     scanf("%s", ch);
//     int length = fun(ch, 0);
//     printf("%d\n", length);
//     return 0;
// }