#include<stdio.h>
void array_printing(int ar[], int n, int i){
    if(i==n) return;
    printf("%d\n", ar[i]);
    array_printing(ar,n,i+1);
}
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d", &ar[i]);
    }
    array_printing(ar,n, 0);

    return 0;
}