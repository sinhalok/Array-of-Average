#include<stdio.h>
int main()
{
printf("Enter No of elements\n");
int n;
scanf("%d",&n);
float a[n][n];
int i,j,k;
printf("Enter all the elements\n");
for (i=0;i<n;i++)
{
    for (j=0;j<n;j++)
    {
        if (i==j){
            scanf("%f",&a[i][j]);
       }
    }
}
for (i=0;i<n;i++)
{
    for (j=0;j<n;j++)
    {
        if (i>j){
            a[i][j]=0;
        }
    }
}
for (i=0;i<n;i++)
{
    for (j=0;j<n;j++)
    {
        if (i<j){
                a[i][j]=0;
                for(k=i;k<=j;k++)
                {
                    a[i][j]+=a[k][k];

                }
                a[i][j]/=(j-i+1);
        }
    }
}
printf("the required matrix \n\n");
for (i=0;i<n;i++)
{
    for (j=0;j<n;j++)
    {
        printf(" %.2f ",a[i][j]);
    }
    printf("\n");
}
return 0;
}
