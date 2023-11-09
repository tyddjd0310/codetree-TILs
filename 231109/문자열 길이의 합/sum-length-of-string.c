#include <stdio.h>
#include <string.h>
int main() {
    char str[101];
    int n,i,len=0,cnt=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",str);
        len+=strlen(str);
        if('a'==str[0])
        {
            cnt++;
        } 
    }
    printf("%d %d",len,cnt);
    
    return 0;
}