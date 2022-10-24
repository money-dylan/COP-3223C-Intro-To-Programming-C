//Dylan Money
//Dr. Steinberg
//COP3223C Section 1
//Small Program 4


#include <stdio.h>


int patterns ();

int main ()
{
  patterns();

  return 0;
}

int patterns()
{
  int steps;
  
  printf("How many steps would you like in the pyramid?\n");
  scanf("%d", steps);
  if(steps <= 0)
  {
    printf("Invalid Input. Please try again");
  }
  else
  {
    while(int i = 0; i < steps; i++)
    {
      while(int j = 0; j<= i; j++)
      {
        printf"-";
      }
      printf("\n");
    }
  }
  return 0;
}

