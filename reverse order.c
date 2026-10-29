#include<stdio.h>
#include<stdlib.h>
   int main()
   {
      int n,*ptr,i,sum=0;
      printf("enter the number of elements:");
      scanf("%d",&n);
      ptr=(int*)calloc(n,sizeof(int));
      printf("enter the elements of the array:");
     for(i=0;i<n;i++)
     {
      scanf("%d",ptr+i);
     }
     printf("the elements in reversed order:");
     for(i=n-1;i<=0;i--)
     {
        printf("%d",*(ptr+i));
     }
     free(ptr);
  }
