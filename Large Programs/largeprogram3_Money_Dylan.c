#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void rules(void);//done
void maskWord (char starword[], int size);//in progress
int playRound(char starword[], char answer[]);//in progress
int occurancesInWord(char userguess, char answer[]);//in progress
void updateStarWord(char starword[], char answer[]);
void playAgain(int *play);

void main()//things broke and i'm not even sure how. Also i procrastinated.
{
  
  char starword[20]= {'H', 'e', 'l', 'l', 'o'};
  char answer[20];
  
  printf("Welcome to the Hangman Game!\n");
  
  rules();
  playRound(starword, answer);

}

void rules(void)
{
  printf("************************************************************************\n");
  printf("Here are the rules.\n");
  printf("I will provide you a set of * characters for each round.\n");
  printf("Each * represents a letter in the English Alphabet.\n");
  printf("You must figure out each letter of the missing word.\n");
  printf("For every correct letter guessed, I will reveal its place in the word.\n");
  printf("Each mistake will result in a strike.\n");
  printf("6 strikes will result in a loss that round.\n");
  printf("Are you ready? Here we go!\n");
  printf("************************************************************************\n");
}

int playRound(char starword[], char answer[])
{
  int strikes = 0;
  int i = 0;
  char guess;
  long len = strlen(starword);
  char guessed[20];
  
  printf("Welcome to the Round!\n");
  printf("The size of the word has %ld letters.\n", len);
  printf("\n");
  
  while(i == 0)
  {
    int j = -1;
    
    guessed[j] = guess;
    
    printf("You currently have %d strike(s)\n", strikes);
    printf("Letter(s) you have guessed: %s\n", guessed);
    
    printf("\n");
    
    maskWord(starword, len);
    
    printf("Enter your guess: ");
    scanf("%c", &guess);
    
    if(occurancesInWord(guess, starword) > 0)
    {
      printf("The letter %c is in the word.\n", guess);
    }
    else
    {
      printf("The letter %c is NOT in the word\n", guess);
      strikes++;
    }
    
    j++;
   }
  
}

void maskWord(char starword[], int size)
{
  for(int i = 0; i < size; i++)
  {
    if(starword[i] == size)
    printf("*");
  }
  
  printf("\n");
}

int occurancesInWord(char userguess, char answer[])
{
  int occ = 0;

  for(int i = 0; i < strlen(answer); i++)
  {
   if(userguess == answer[i])
   {
     occ++;
   } 
  }
  
  printf("%d\n", occ);
  
  return occ;
}
