#include <stdio.h>
int main()
{
    int a[5];
        int i;
    printf("enter Array elements \n");
    for (i=0;i<5;i++)
    {
        scanf("%d\n",&a[i]);
    }
    printf("array values =\n ");
    for(i=0;i<5;i++)
        printf("%d\n",a[i]);
    return 0;
}
