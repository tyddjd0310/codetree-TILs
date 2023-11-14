#include <stdio.h>
#include <string.h>
void swap(char *x, char *y);
void sort(char a[],int len);
int main() {
    int n,i;
    char st[100];
    scanf("%s",st);
    n=strlen(st);
    sort(st,strlen(st));
    for(i=0;i<n;i++)
    {
        printf("%c",st[i]);
    }
    return 0;
}

void swap(char *x, char *y)
{
    char temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void sort(char a[],int len)
{
    int i,j;
    for(i=0;i<len-1;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(a[i]>a[j])
            {
                swap(&a[i],&a[j]);
            }
        }
    }
}