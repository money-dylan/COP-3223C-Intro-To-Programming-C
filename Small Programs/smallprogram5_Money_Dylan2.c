//Dylan Money
//Dr. Steinberg
//COP3223C Section 1
//Small Program 5

#include <stdio.h>

//functions hahahaha
void change(double *paid, double *due);
int multTable(int *x, int *y);
int minimum(int *z, int *a);
int incrementUpdate(int *val);

int main ()
{
//init vars
  double paid;
  double due;
  int x;
  int y;
  int z;
  int a;
  int val = 0;
    
 printf("Amount Due: ");
  scanf("%lf", &due);
  printf("Amount Paid: ");
  scanf("%lf", &paid);

  change(&paid, &due);//hope the doesnt CHANGE your mind
  
  multTable(&x, &y);//wata TABLE
  
  minimum(&z, &a);//now thats MINIMUM damage
  
  printf("Before calling incrementUpdate\n val = 0\n");
      printf("val = %d\n", incrementUpdate(&val));//make sure u get the new INCREMENTUPDATE. yall really didnt give me good material with this one.
  
  return 0;
}

void change(double *paid, double *due)
{
//vars
int dollars = 0;
int quarters = 0;
int dimes = 0;
int nickels = 0;
int pennies = 0;

double dif = *paid-*due + 0.01;//maths

  while(1)//just a casual infinite loop
  {

  if(dif>=1.0)//if this than that
  {

    dollars++;
    dif -= 1.0;

  }

  else if(dif>=0.25)
  {

    quarters++;
    dif -= 0.25;

  }

  else if(dif>=0.1)
  {
  
    dimes++;
    dif -= 0.1;
  
  }
  
  else if(dif>=0.05)
  {
  
    nickels++;
    dif -= 0.05;
  }
  
  
  else if(dif>=0.01)
  {
  
    pennies++;
    dif -= 0.01;
  
  }
  
  else
  {
  
    break;//break me outta here
  
  }

}
//output
printf("Change\n");

printf("%d dollars\n", dollars);

printf("%d quarters\n", quarters);

printf("%d dimes\n", dimes);

printf("%d nickels\n", nickels);

printf("%d pennies\n", pennies);

}

int multTable(int *x, int *y)//basically the same code as last week
{
    printf("Enter number of rows: ");
    scanf("%d", &*x);
    printf("Enter number of columns: ");
    scanf("%d", &*y);
      for(int i = 1; i <= *x; i ++)
      { 
        for(int j = 1; j <= *y; j ++)
        {
          if(j*i >= 10)
          {
            printf("     %d", j*i);
          }
          else
          printf("      %d", j *i);
        }
        printf("\n");
      }
    
  return 0;
}

int minimum (int *z, int *a)
{
//print and inputing things
  printf("Enter num1: ");
  scanf("%d", &*z);
  printf("Enter num2: ");
  scanf("%d", &*a);
  
  
  if(*a < *z)//if if if 
  {
    printf("%d is smaller than ", *a);//a small
    printf("%d.\n", *z);
  }
  else
  {
    printf("%d is smaller than ", *z);//z small
    printf("%d.\n", *a);
  }
  
  return 0;
}

int incrementUpdate(int *val)
{
  int option;
  int p = 1;
  int i = 0;// i gave up and just used a different variable
  while(p = 1)
  {
    printf("Updating val now...\n");
    printf("Would you like to update ...\n");
    printf("Enter 0 if you would like to update again. Anything else will exit the update.\n");
    printf("Option: ");
    scanf("%d", &option);
    if(option == 0)
    {
      i++;
    }
    else
    {
      printf("val is now done updating...\n");//but who can tell
      printf("After calling incrementUpdate\n");
      p = 0;//u can tell cant u
    }
  }
  return i+1;
  


}
