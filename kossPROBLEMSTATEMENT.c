/*NAME: MOIN SHAIKH
ROLL NO :16CS30033
PROBLEM STATEMENT:TO MAKE A CALCULATOR USING BASIC C*/



#include <stdio.h>
#include <math.h>
#include <string.h>

struct img{
double x,y;
};

struct vect{
double i,j,k;};



int vector()
{
    struct vect v1,v2,ans;
    int t=2;
    char c;
    double dot;
while(t!=0)
{
    if(t==1)
        {
            if(c!='.')
            {printf("To take ans as operand press 1 else press 0\n");
    scanf("%d",&t);
            }
        }
if(t!=1)
{
printf("What are the i j k components of the vector\n");
scanf("%lf %lf %lf",&v1.i,&v1.j,&v1.k);
}
else
    v1=ans;
printf("1)For addition press '+'\n2)For substraction press '-'\n3)For dot product press '.'\n4)For cross product press '*'\n");
fflush(stdin);
c=getchar();

printf("What are the i j k components of the second vector\n");
scanf("%lf %lf %lf",&v2.i,&v2.j,&v2.k);

switch(c)
{
    case '+': ans.i=v1.i+v2.i;
              ans.j=v1.j+v2.j;
              ans.k=v1.k+v2.k;
              break;
    case '-': ans.i=v1.i+v2.i;
              ans.j=v1.j+v2.j;
              ans.k=v1.k+v2.k;
              break;
    case '.': dot=v1.i*v2.i+v1.j*v2.j+v1.k*v2.k;
              break;
    case '*': ans.i=v1.j*v2.k-v2.j*v1.k;
              ans.j=v1.k*v2.i-v1.i*v2.k;
              ans.k=v1.i*v2.j-v2.i*v1.j;
              break;
}

if(c=='.')
    printf("The dot product is %lf",dot);
else
    printf("The answer vector is\n%lf(i)+%lf(j)+%lf(k)\n",ans.i,ans.j,ans.k);

    printf("\nFor main menu press 0 else press 1\n");
    scanf("%d",&t);
}
   return 0;

}












int  integral()
{
    int n,i,t=1;
    double sum=0.0,p,q;
    double *a;
    while(t!=0)
    {
    printf("What is the number of terms in the polynomial?\n");
    scanf("%d",&n);
    a=(double*)calloc(n,sizeof(double));

    printf("Type the coefficients of the terms,first enter the coefficient of the term with highest power of x\n");

    for(i=n-1;i>=0;i--)
    {
        scanf("%lf",&a[i]);
    }

    printf("What are the limits\n");
    scanf("%lf %lf",&p,&q);


    for(i=n-1;i>=0;i--)
    {
        a[i]=(a[i]/(i+1))*(pow(p,i+1)-pow(q,i+1));
        sum=sum+a[i];
    }


    printf("The definite integral is %lf\n\n",sum);
    printf("For main menu press 0 else press 1\n");
    scanf("%d",&t);
    }


    return 0;


}









int quad()
{
double a,b,c,temp;
struct img x1,x2;
int t=1;
while(t!=0){
    printf("What is the value of a,b and c?\n ");

    scanf("%lf %lf %lf",&a,&b,&c);

     x2.x=x1.x=-b/(2*a);

    if(b*b-4*a*c<0)
    {
        temp=pow(-(b*b-4*a*c),0.5);
    x1.y=temp/(2*a);
        x2.y=-temp/(2*a);
        printf("The roots are imaginary\n");
        printf("The roots are\n1)%lf+i%lf\n2)%lf+i%lf\n",x1.x,x1.y,x2.x,x2.y);

    }
    else {
            temp=pow((b*b-4*a*c),0.5);
    x1.y=temp/(2*a);
        x2.y=-temp/(2*a);
        printf("The roots are real\n");
        printf("1)%lf\n2)%lf",x1.x+x1.y,x2.x,x2.y);
}

printf("\nFor main menu press 0 else press 1");
scanf("%d",&t);

}
if(t==0)
    return 0;

}

int matrixmultiply(double **p1,double **p2,double **ans,int m,int n,int b)
{
    int i,j,k;

    for(i=0;i<m;i++)
    {
        for(j=0;j<b;j++)
        {
          for(k=0;k<n;k++)
          {
              ans[i][j]=ans[i][j]+p1[i][k]*p2[k][j];
          }
        }
    }
return 0;

}




int complex()
{
    int t=2,k;
    struct img a,b,ans;
    char c,d;
    while(t!=0)
     {


     if(t==1)
     {
         printf("Do you want to take ans as operand? If yes press y else press anything\n");
         fflush(stdin);
         scanf("%c",&d);
         fflush(stdin);

     }
     if(d!='y'){
     printf("Type the real part and the imaginary part of complex number\n");
    scanf("%lf %lf",&a.x,&a.y);
    fflush(stdin);
     }
     else
        a=ans;
    printf("Type the operator\n");

    c=getchar();
    fflush(stdin);
    printf("Enter the real and imaginary part of second complex number\n");

    scanf("%lf %lf",&b.x,&b.y);
    fflush(stdin);

    switch(c)
    {

        case '+':ans.x=a.x+b.x;
                 ans.y=a.y+b.y;
                 break;
        case '-':ans.x=a.x-b.x;
                 ans.y=a.y-b.y;
                 break;
        case '*':ans.x=(a.x*b.x-a.y*b.y);
                 ans.y=(a.x*b.y+a.y*b.x);
                 break;
        case '/':ans.x=(a.x*b.x+a.y*b.y)/(b.x*b.x+b.y*b.y);
                 ans.y=(a.x*b.y-a.y*b.x)/(b.x*b.x+b.y*b.y);
                 break;

    }

    printf("the answer is \n %lf +i%lf\n",ans.x,ans.y);

    t=1;
    printf("For main menu press 1 else press 0\n");
    scanf("%d",&k);
    fflush(stdin);
    if(k==1)
        break;

}
if(k==1)
{
    return 1;
}

else return 0;

}


int matrix()
{
int m,n,i,j,a,b,t=1;
double **p1,**p2,**ans;
char c;
while(t!=0)
{

    printf("\n What is the  number of rows and column of the matrix?\n");
    scanf("%d %d",&m,&n);
    printf("Enter the elements row wise\n");
    p1=(double**)calloc(m,sizeof(double));


    for(i=0;i<m;i++)
    {
        (p1[i])=(double*)calloc(n,sizeof(double));
    }



    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
           scanf("%lf",&p1[i][j]);

        }
    }
    printf("Enter the operator\n");
    fflush(stdin);
    c=getchar();
    if(c=='*')
    {
        printf("Enter the number of rows and columns for second matrix \n");
        scanf("%d %d",&a,&b);
        if(a!=n)
            printf("error\n");
        else{
printf("\nEnter the elements of second matrix row wise\n");
            p2=(double**)calloc(a,sizeof(double));
         ans=(double**)calloc(m,sizeof(double));
         for(i=0;i<a;i++)
    {
        (p2[i])=(double*)calloc(b,sizeof(double));

    }


    for(i=0;i<b;i++)
    {
        (ans[i])=(double*)calloc(b,sizeof(double));
    }

fflush(stdin);
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
           scanf("%lf",&p2[i][j]);

        }
    }

    matrixmultiply(p1,p2,ans,m,n,b);


    printf("The answer of matrix multiplication is\n");
    for(i=0;i<m;i++)
    {printf("\n");
        for(j=0;j<b;j++)
        {
           printf("%lf\t\t",ans[i][j]);


        }
    }

        }


    }
    else
    {
         p2=(double**)calloc(m,sizeof(double));
         ans=(double**)calloc(m,sizeof(double));
         for(i=0;i<m;i++)
    {
        (p2[i])=(double*)calloc(n,sizeof(double));
    }

     for(i=0;i<m;i++)
    {
        (ans[i])=(double*)calloc(n,sizeof(double));
    }
         printf("Enter the elements of the second matrix\n ");


    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
           scanf("%lf",&p2[i][j]);

        }
    }





    switch(c)

{
    case '+':{

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
           ans[i][j]=p1[i][j]+p2[i][j];

        }


    }break;
    }

    case '-':{
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
           ans[i][j]=p1[i][j]-p2[i][j];

        }
    }break;
    }
}
printf("\nThe answer of matrix arithmetic is\n");
for(i=0;i<m;i++)
    {printf("\n");
        for(j=0;j<n;j++)
        {
           printf("%lf\t\t",ans[i][j]);


        }
    }

             }


printf("\nFor main menu press 0 else press 1\n");
scanf("%d",&t);

}

if(t==0)
return (0);

}



int trigo(double *p)
{
char c;
double m;
    printf("For sin press 's'\nFor cos press 'c'\nFor tan press 't'\n ");
    fflush(stdin);
    scanf("%c",&c);
    fflush(stdin);
    printf("enter the number\n");
    scanf("%lf",&m);
    fflush(stdin);
    switch(c)
    {
        case 's': *p=sin(m);
        printf("\nThe sine of the number is %lf",*p);
                   break;
        case 'c': *p=cos(m);
        printf("\nThe cosine of the number is %lf",*p);
                   break;
        case 't': *p=tan(m);
        printf("\nThe tangent of the number is %lf",*p);
                   break;

    }

    return (0);

}
int inverse(double *p)
{
    double m;
    printf("type the number whose inverse need to be calculated\n");
    scanf("%lf",&m);
    fflush(stdin);
    *p=1.0/m;
    return (0);

}
int takenum(double *p)
{
double m;
printf("Type the number\n");

scanf("%lf",&m);
fflush(stdin);
*p=m;
return (0);

}
int loga(double *p)
{double m;
  printf("What is the number whose logarithm is to  be calculated?\n");
  scanf("%lf",&m);
  *p=log(m);
  printf("The logarithm is %lf\n",*p);
    return(0);

}

int expo(double *p)
{double m,n;
    printf("Give the base\n");
    scanf("%lf",&m);
    printf("Give the power\n");
    scanf("%lf",&n);
    fflush(stdin);
    *p=pow(m,n);
    printf("The Answer is %lf\n",*p);
    return (0);
}


int main()
{

int t=1,k,o=1,q,i;
double m,n,ans=0;
double *p=&ans,*h=&n;
char c,r;
while (o==1)
{

printf("\n\n1)For real number calculation press 1\n2)For complex number calculation press 2\n3)For matrix calculation press 3\n4)To find the roots of quadratic equation press 4\n5)To find the definite integral of a polynomial equation press 5\n6)For vector calculation press 6\n");

scanf("%d",&k);
if(k==2)
    {complex();
     continue;
    }
if(k==6)
   {
       vector();
    continue;
   }

if(k==5)
{
    integral();
    continue;
}
if(k==4)
    {quad();
    continue;
    }
if(k==3)
    {matrix();
    continue;
    }

if(k==1)
{
t=k;
while(t!=0)
{
    if(t==1){
printf("\n1)To simply type a number press 1\n2)To calculate log press 2\n3)To calculate exponent press 3\n4)To calculate inverse press 4\n5)To do trigonometric operations press 5\n\n");

    fflush(stdin);
    scanf("%d",&q);
fflush(stdin);
    switch(q)
    {
        case 2: loga(p);
                    t++;
                   break;
        case 3: expo(p);t++;
                   break;
        case 1: takenum(p);t++;
                   break;
        case  4: inverse(p);t++;
                   break;
        case 5: trigo(p);t++;
                   break;
    }

    }
    if(t!=1)
{
    printf("To take answer as operand press 'y' else press any other key.\n\n");
    scanf("%c",&r);
    fflush(stdin);
}
if(r!='y'){

        printf("\n1)To simply type a number press 1\n2)To calculate log press 2\n3)To calculate exponent press 3\n4)To calculate inverse press 4\n5)To do trigonometric operations press 5\n\n");

    fflush(stdin);
    scanf("%d",&q);
fflush(stdin);
    switch(q)
    {
        case 2: loga(p);
                    t++;
                   break;
        case 3: expo(p);t++;
                   break;
        case 1: takenum(p);t++;
                   break;
        case  4: inverse(p);t++;
                   break;
        case 5: trigo(p);t++;
                   break;
    }

fflush(stdin);
}
else
    m=*p;
printf("\nType the operator\n");
scanf("%c",&c);
fflush(stdin);

printf("\n1)To simply type a number press 1\n2)To calculate log press 2\n3)To calculate exponent press 3\n4)To calculate inverse press 4\n5)To do trigonometric operations press 5\n\n");

    fflush(stdin);
    scanf("%d",&i);
fflush(stdin);
    switch(i)
    {
        case 2: loga(h);
                    t++;
                   break;
        case 3: expo(h);t++;
                   break;
        case 1: takenum(h);t++;
                   break;
        case  4: inverse(h);t++;
                   break;
        case 5: trigo(h);t++;
                   break;
    }




switch(c)
{
case '+': ans=m+n;
           break;
case '-': ans=m-n;
           break;
case '*': ans=m*n;
           break;
case '/': ans=m/n;
           break;

}


printf("The Final ans is %lf\n\n",*p);

printf("For further calculation press 1 \nFor main menu press 0\n");
scanf("%d",&t);
if(t==1)
    t=2;
if(t==0)
{
    t=2;
    break;
}
fflush(stdin);


 }
}





}

 return 0;
}








