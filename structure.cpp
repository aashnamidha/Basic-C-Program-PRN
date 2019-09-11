#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct emp
{
 char name[20];
 int emp_id;
 int year;
 char city[20];
};
struct emp e[5];
void enter();
void display();
int main() 
{ 
 struct emp e[5];
 enter();
 display();
 return 0;
}
void enter()
{
 int i=0;
 for(i=0;i<2;i++)
 {
  printf("\nEnter Name of Employee: ");
  scanf("%s",&e[i].name);
  printf("\nEnter Employee ID: ");
  scanf("%d",&e[i].emp_id);
  printf("\nEnter year of joining: ");
  scanf("%d",&e[i].year);
  printf("\nEnter City: ");
  scanf("%s",&e[i].city);
 }
}
void display()
{
 int j=0;
 for(j=0;j<2;j++)
 {
  printf("\n\n\n Name: %s \n\n Employee ID: %d \n\n Year: %d \n\n City: %s",e[j].name,e[j].emp_id,e[j].year,e[j].city);
 }
}
