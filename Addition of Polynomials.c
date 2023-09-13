#include<stdio.h>
#include<math.h>

struct poly
{
  int coeff;
  int exp;
};

struct poly a[30],b[30],c[30];

int main()
{
    int i;
    int d1,d2;
    int k=0,l=0,m=0;

    printf("Enter the highest degree of polynomial 1:");
    scanf("%d",&d1);

    for(i=0;i<=d1;i++)
    {
        printf("\nEnter the coefficient of x^%d :",i);
        scanf("%d",&a[i].coeff);
        a[k++].exp = i;
    }
    printf("\nEnter the highest degree of polynomial 2:");
    scanf("%d",&d2);

    for(i=0;i<=d2;i++)
    {
       printf("\nEnter the coefficient of x^%d :",i);
       scanf("%d",&b[i].coeff);

	   b[l++].exp = i;
    }
    printf("\nExpression 1 = %d",a[0].coeff);

    for(i=1;i<=d1;i++)
    {
        printf("+ %dx^%d",a[i].coeff,a[i].exp);
    }
    printf("\nExpression 2 = %d",b[0].coeff);

    for(i=1;i<=d2;i++)
    {
      printf("+ %dx^%d",b[i].coeff,b[i].exp);
    }



 if(d1>d2)
    {
		 for(i=0;i<=d2;i++)
		  {
			c[m].coeff = a[i].coeff + b[i].coeff;
			c[m].exp = a[i].exp;
			m++;
		  }

		  for(i=d2+1;i<=d1;i++)
		  {
			c[m].coeff = a[i].coeff;
			c[m].exp = a[i].exp;
			m++;
		  }

    }
 else
  {
    for(i=0;i<=d1;i++)
     {
       c[m].coeff = a[i].coeff + b[i].coeff;
       c[m].exp = a[i].exp;
       m++;
     }

	for(i=d1+1;i<=d2;i++)
    {
      c[m].coeff = b[i].coeff;
      c[m].exp = b[i].exp;
      m++;
    }
  }
    printf("\nExpression after addition  = %d",c[0].coeff);
  for(i=1;i<m;i++)
  {
     printf("+ %dx^%d",c[i].coeff,c[i].exp);
   }

  return 0;

}
