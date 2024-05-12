#include<stdio.h>
void array_printing(int ar[], int n, int i){
    if(i==-1) return;
    printf("%d\n", ar[i]);
    array_printing(ar,n,i-1);
}
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d", &ar[i]);
    }
    array_printing(ar,n, n-1);

    return 0;
}