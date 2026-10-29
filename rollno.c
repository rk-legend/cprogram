 #include<stdio.h>
  int main()
   {
      int n,i,roll_numbers[n];
      printf("enter the number of students:");
      scanf("%d",&n);
      printf("enter the roll numbers of all students :");
      for(i=0;i<n;i++)
      {
        scanf("%d",&roll_numbers[i]);
     }
     printf("\n advisor 1(odd roll numbers):");
     for(i=0;i<n;i++)
     {
        if(roll_numbers[i]%2!=0)
        {
           printf("%d",roll_numbers[i]);
        }
     }
     printf("\n advisor 2(even roll numbers):");
     for(i=0;i<n;i++)
     {
        if(roll_numbers[i]%2==0)
        {
           printf("%d",roll_numbers[i]);
        }
     }
     printf("\n");
     return 0;
  }
