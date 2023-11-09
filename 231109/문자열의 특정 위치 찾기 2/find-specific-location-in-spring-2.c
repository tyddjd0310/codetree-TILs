#include <stdio.h>
#include <string.h>
int main() {
    char c,*p;
    char a[5][10]={"apple","banana","grape","orange","blueberry"};
    int i,n,cnt=0;
    scanf("%c",&c);
    for(i=0;i<5;i++)
    {
        p=strchr(a[i]+2,c);
        if(p-a[i]==2||p-a[i]==3)
            {
            printf("%s\n",a[i]);
            cnt++;
            }
    }
    printf("%d",cnt);
    return 0;
}