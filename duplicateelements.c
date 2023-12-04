// //
// #include<stdio.h>
// int main()
// {
//     int ar[20],n,i,d,count=0,pos;
//     printf("Enter the n value:");
//     scanf("%d",&n);
//     for(i=0;i<n;i++)//n=10-->0-9
//     {
//         scanf("%d",&ar[i]);
//     }
//     printf("The elements are:  \n");
//     for(i=0;i<n;i++)
//     {
//         printf("%d\n",ar[i]);
//     }
//     printf("The elements are: \n");
//     for(i=0;i<n;i++)
//     {
//         printf("%d\n",ar[i]);
//     }
//     printf("Enter the element to be deleted: \n");
//     //1  2  3  4  5
//     scanf("%d",&d);//3
//     for(i=0;i<n;i++)//2<5
//     {
//         if(d==ar[i])//3==3
//         {
//             count=1;
//             pos=i;//2
//             break;
//         }
//     }
//     for(i=pos;i<n;i++)//i=2;2<5
//     {
//         ar[i]=ar[i+1];//ar[2]=ar[2+1=3]//4
//     }
//     n=n-1;
//     printf("Enter the elements after deletion: \n");
//     for(i=0;i<n;i++)
//     {
//         printf("%d\n",ar[i]);
//     }
//     return 0;

// }  





// #include <stdio.h>
// int main()
// {
//     int add(int,int);
//     int sub(int,int);
//     int mul(int,int);
//     float div(int,int);
//     int a,b,c;
//     printf("enter two number :");
//     scanf("%d %d",&a,&b);
//     printf("\n1.ADD\n2.SUB\n3.MUL\n4.DIV\n");
//     printf("enter the choice :");
//     int ch;
//     scanf("%d",&ch);
//     switch(ch){
//         case 1:
//         c=add(a,b);
//         printf("sum=%d",c);
//         break;

//         case 2:
//         c=sub(a,b);
//         printf("sub=%d",c);
//         break;

//         case 3:
//         c=mul(a,b);
//         printf("mul=%d",c);
//         break;

//         case 4:
//         if(b==0)
//         printf("Infinity");
//         else{
//             float c=div(a,b);
//             printf("div=%f",c);
//         }
//         break;
//         default:
//         printf("enter the correct choice ");
//     }
 

// }
//    int add(int x,int y){
//         int z=x+y;
//         return z;
//     }
//     int sub(int x,int y){
//         int z=x-y;
//         return z;
//     }
//     int mul(int x,int y){
//         int z=x*y;
//         return z;
//     }
//     float div(int x,int y){
//         float z=x/y;
//         return z;
//     }





#include<stdio.h>
void main()
{
    int fact(int);
    int num,fact1;
    printf("enter the number ");
    scanf("%d",&num);
    fact1=fact(num);
    printf("factorial of %d is %d",num,fact1);

}
int fact(int n){
    if (n==0)
    return 1;
    else
    return n*fact(n-1);
}






