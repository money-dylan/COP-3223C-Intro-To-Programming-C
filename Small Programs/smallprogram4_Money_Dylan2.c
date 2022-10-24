//Dylan Money
//Dr. Steinberg
//COP3223C Section 1
//Small Program 4


#include <stdio.h>


int patterns ();
int elevator();
int fibonacci(int x);
int boardPattern(int x);

int main ()
{
  int x;
  int out = 1;
  //patterns();
  //elevator();
  /*while(out != 0)
  {
    printf("Enter a number: ");
    scanf("%d", &x);
    if(x <= 1)
    {
      printf("Please try again.");
    }  
    else
    { 
      fibonacci(x);
      out = 0;
    }
  }*/
  boardPattern(x);
  
  
  return 0;
}

int patterns()
{
  int steps;
  int i;
  int j = 0;
  int out = 1;
  int x = 1;
  int p;
  while(out != 0)
  {
  printf("How many steps would you like in the pyramid?");
  scanf("%d", &steps);
  if(steps <= 0)
  {
    printf("Invalid Input. Please try again.\n");
  }
  else
  {
    for( i = 1; i < steps * 2; i++)
    {
    if(i <= 6)
    {
      while( j < i)
      {
        printf("-");
        j++;
      }
    }
    else 
    {
      while(p - (2*x) >= 0)
      {
        printf("-");
        p--;
      }
      x++;
    }
      j=0;
      printf("\n");
      out = 0;
      p = i;
    }
    
  }
  
  }
  return 0;
}

int elevator ()
{
  int out = 1;
  int in;
  
  printf("Welcome to the Elevator Ride.\n");
  
  while(out != 0)
  {
    printf("Which floor would you like to go to?");
    scanf("%d", &in);
    if(in > 8 || in <= 0)
    {
      printf("That is not a valid option.\n");
    }
    else if(in == 1)
    {
      printf("Welcome to the first floor.\n");
    }
    else if(in == 2)
    {
      printf("Welcome to the second floor.\n");
    }
    else if(in == 3)
    {
      printf("Welcome to the third floor.\n");
    }
    else if(in == 4)
    {
      printf("Welcome to the fourth floor.\n");
    }
    else if(in == 5)
    {
      printf("Welcome to the fifth floor.\n");
    }
    else if(in == 6)
    {
      printf("Welcome to the sixth floor.\n");
    }
    else if(in == 7)
    {
      printf("Welcome to the seventh floor.\n");
    }
    else if(in == 8)
    {
      printf("Elevator door is now open. Please exit\n");
      out = 0;
    }
  }
  return 0;
}

int fibonacci (int x)
{
  int o;
  if(x <= 2)
  {
    o = 1;
  }
  o = fibonacci(x - 1) + fibonacci(x - 2);
  printf("%d", o);
  return 0;
}

int boardPattern(int x)
{
  int i = 1;
  while(i != 0)
  {
    printf("Enter number of rows: ");
    scanf("%d", &x);
    if(x <= 0)
    {
      printf("Invalid Input. Please try again.");
      i = 0;
    }
    else
    {
      for(int i = 0; i < 6; i ++)
      {
        if(i%2 == 0)
        {
          printf(" + + + + + + + + + +\n");
        }
        else
        {
          printf("+ + + + + + + + + +\n");
        }
      }
      i= 0;
    }
    
  }
  return 0;
}
