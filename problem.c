// array printing in integer type in return type.
// #include<stdio.h>
// int array_printing(int ar[], int n){
//     for(int i=0; i<n; i++){
//         return ar[i];
//     }
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int ar[n];
//     for(int i=0; i<n; i++){
//         scanf("%d", &ar[i]);
//     }
//     int val = array_printing(ar,n);
//     printf("%d", val);

//     return 0;
// }



// print array in even index;
// #include<stdio.h>
// void array_printing(int ar[], int n, int i){
//     if(i==-1) return;
//     if(ar[i]%2 == 0){
//         printf("%d\n", ar[i]);
//     }
//     array_printing(ar,n,i-1);
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int ar[n];
//     for(int i=0; i<n; i++){
//         scanf("%d", &ar[i]);
//     }
//     array_printing(ar,n, 3);

//     return 0;
// }

// i want to remove -1 replace to interger value is it possible
// #include<stdio.h>
// void array_printing(int ar[], int n, int i){
//     if(i==-1) return;
//     printf("%d\n", ar[i]);
//     array_printing(ar,n,i-1);
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int ar[n];
//     for(int i=0; i<n; i++){
//         scanf("%d", &ar[i]);
//     }
//     array_printing(ar,n, n-1);

//     return 0;
// }


// akane jokon i++ ata while block ar pora di tokon....
#include<stdio.h>
int main()
{
    char ch[100];
    scanf("%s", &ch);
    int count = 0;
    int i=0; 
    while(ch[i] !='\0'){
        count++;
        i++;
        
    }
    printf("%d", count);
    return 0;
}