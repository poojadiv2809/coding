#include <stdio.h>

int main() 
{
    int i,j,a[3][3],b[3][3],c[3][3],k;
    printf("\n enter the element in Array a:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf(" \n displaying th element in a\n");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf("%d,",a[i][j]);
        }
    }
    printf(" \n enter the element in array b\n");
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    
    
    for (i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf("%d,",b[i][j]);
        }
    }
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for (k=0;k<3;k++)
            {
                c[i][j]=c[i][j] +a[i][k]*b[k][j];
   
                
            }
        }
    }
    printf("\n multiplication of matrix \n");
    for (i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf("%d,",c[i][j]);
        }
	}
		return 0;
}