#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
 char a[20],s[20],x;
 int i,j;
 printf("\n Enter a string: ");
 scanf("%s",a);
 printf("\n Enter letter to break line from: ");
 scanf("%s",&x);
 printf("\n");
 for(i=0;a[i]!='\0';i++)
 {
  if(a[i]==x)
  {
   printf("\n");
  }
  else
  {
   printf("%s",a[i]);
  }
}
 return 0;
}
