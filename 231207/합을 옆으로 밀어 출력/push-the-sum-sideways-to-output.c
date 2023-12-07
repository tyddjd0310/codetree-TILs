#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int n,i,*p,cnt=0;
    scanf("%d",&n);
    char arr[12];
    p=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
        scanf("%d\n",&p[i]);
        cnt+=p[i];
    }
    sprintf(arr,"%d",cnt);
    printf("%s%c",arr+1,arr[0]);
    free(p);
    return 0;
}