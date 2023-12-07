#include <stdio.h>

int main() {
    int n,i,a,cnt=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a==2)
        {
            cnt++;
            if(cnt==3)
            {
                printf("%d",i+1);
            }
        }
    }
    
    return 0;
}