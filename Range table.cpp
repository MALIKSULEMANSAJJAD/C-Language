#include<stdio.h>
#include<conio.h>
main()
{
 int num,start,end;
 printf("Enter the number: \n");
 scanf("%d",&num);
 printf("Enter the start of the range of multiplication: \n");
 scanf("%d",&start);
 printf("Enter the end of the range of multiplication: \n");
 scanf("%d",&end);
 if(start<end)
 {
 for(int i=start;i<=end;i++)
  {
   printf("%d x %d = %d\n",num,i,(num*i));
  }
 }
 else if(end<start)
 {
 for(int i=start;i>=end;i--)
  {
  	printf("%d x %d = %d\n",num,i,(num*i));
  }
 }
  getch();
}

