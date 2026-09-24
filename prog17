 #include<stdio.h>
 #include<stdlib.h>
 struct stu
   {
      int roll;
      char n[20];
      int m1,m2,tot;
      float avg;
   }x[100],y[100];
  int main()
  {
     FILE *fp;
     fp=fopen("x2.bin","wb");
     int n,i,rn;
     printf("enter number the students:");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
        printf("enter the roll no:");
        scanf("%d",&x[i].roll);
        printf("enter a name:");
        scanf("%d",&x[i].n);
        printf("enter the mark1:");
        scanf("%d",&x[i].m1);
        printf("enter the mark2:");
        scanf("%d",&x[i].m2);
        x[i].tot=x[i].m1+x[i].m2;
        x[i].avg=x[i].tot/2;
     }
 }
     for(i=0;i<n;i++)
     {
        fwrite(x+i,sizeof(struct stu),1,fp);
     fclose(fp);
     }
     fp=fopen("x2.bin","rb");
     printf("enter the roll number of student whose details to display:");
     scanf("%d",&rn);

for(i=0;i<n;i++)
     {
        fread(y+i,sizeof(struct stu),1,fp);
        if(y[i].roll==rn)
        {
        printf("%d\t%d\t%d\t%d\t%f\n",y[i].roll,y[i].m1,y[i].m2,y[i].tot,y[i].avg);
        }
           float la=0;
           for(i=0;i<n;i++)
           {
           if(y[i].avg>la)
                 la=y[i].avg;
           }
              printf("details of topper:");
              for(i=0;i<n;i++)
           {
              if(la==y[i].avg)
              {
           printf("%d\t%d\t%d\t%d\t%d\t%f\n",y[i].roll,y[i].n,y[i].m1,y[i].m2,y[i].tot,y[i].avg);
           }
  }
  }
}
