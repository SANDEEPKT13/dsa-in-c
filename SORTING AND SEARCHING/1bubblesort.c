#include <stdio.h>

int main()
{
   int a[20];
   int n,i,j,temp;
   printf("ENTER TOTAL NO. OF ELEMENTS = ");
   scanf("%d",&n);
   printf("enter elements of array = \n");
   for(i = 0;i<n;i++){
       scanf("%d",&a[i]);
   } 
   for(i=0;i<n-1;i++){
       for(j=0;j<n-i-1;j++){
           if(a[j]>a[j+1]){
               temp = a[j];
               a[j]=a[j+1];
               a[j+1]= temp;
           }
       }
   }
   printf("result = ");
   for(i=0;i<n;i++){
       printf("%d \t",a[i]);
   }
   printf("\n");

    return 0;
}