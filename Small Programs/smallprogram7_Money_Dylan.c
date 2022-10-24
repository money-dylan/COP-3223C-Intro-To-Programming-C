//Dylan Money
//Dr. Steinberg
//COP3223C Section 1
//Small Program 7

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


//functions hahahaha
void deblank();
void pluralize();
void fact();
void substring();

int main ()
{
  deblank();
  pluralize();
  fact();
  substring();
}

void deblank()
{
//string
  char string[20];
  //get string
  printf("Enter a string: ");
  fgets(string, sizeof(string), stdin);
  
  printf("Input String: %s\n", string);
  printf("\n");
  printf("Output String: ");
    //go through string
  for(int i = 0; i < sizeof(string); i++)
  {
    if(string[i] != ' ')
    {
      printf("%c", string[i]);
    }
  }
  printf("\n");
}

void pluralize()
{
//string
  char strink[20];
  
  //get string
  printf("Enter string to be pluralize: ");
  fgets(strink, sizeof(strink), stdin);
  //replace string
  for(int i = 0; i < sizeof(strink); i++)
  {
    if(strink[i] == 'y')
    {
        strink[i] = 'i';
        strink[i + 1] = 'e';
        strink[i + 2] = 's';
        
        i = sizeof(strink);
      
    }
  }
  //output plural
  printf("Word pluralize: %s\n", strink);
  
}

void fact ()
{
//vars
  int num = 0;
  int letters = 0;
  int punc = 0;
//string
  char strang[20];
//get string
  printf("Enter a string with no spaces: ");
  
  fgets(strang, sizeof(strang), stdin);
  
  printf("%s", strang);
  printf(" has\n");
  
//different things
  for(int i = 0; i < sizeof(strang); i++)
  {
    if(isdigit(strang[i]))
    {
      num++;
    }
    else if(isalpha(strang[i]))
    {
      letters++;
    }
    else if(ispunct(strang[i]))
    {
      punc++;
    }
    else
    {
      break;
    }
  }
  //output
  printf("%d letters\n", letters);
  printf("%d digits\n", num);
  printf("%d punctuation characters\n", punc);
}

void substring ()
{
  int gg = 0;
  //string
  char first[20];
  //get string
  printf("Enter a string 1: ");
  fgets(first, sizeof(first), stdin);
  
  char second[20];
  printf("Enter a string 2: ");
  fgets(second, sizeof(second), stdin);
  //check both strings
  for(int i = 0; i < sizeof(first); i++)
  {
    for(int j = 0; j < sizeof(second); j++)
    {
    //output
      if(first[i] == second[j] && first[i + 1] == second[j + 1] && first[i + 2] == second[j+2])
      {
        printf("function return (%d)", i);
        gg = 1;
      }
      
    }
  }
  //check and output nil
  if(gg == 0)
    {
      printf("function return (nil)");
    }
  
}