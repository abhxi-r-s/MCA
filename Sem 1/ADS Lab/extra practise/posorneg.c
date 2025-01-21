 #include <stdio.h>
 void main()
 {
 int n;
 printf("Enter the value of n");
 scanf("%d",&n);
 if( n > 0)
 {
 printf("Positive");
 }
 else if(n < 0)
 {
 printf("Negative");
 }
 else
 printf("Zero");
 
 }