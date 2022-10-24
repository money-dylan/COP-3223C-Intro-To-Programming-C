//Name
//Dr. Steinberg
//COP3223C
//Large Program 1 Skeleton

#define ROUNDS 5
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include <string.h>

void greeting(); //display welcome message to user
void playRound(int round); //play one round
int pickOne(); //retrieve the user's guess
int computerPick(); //computer makes its pick
int battle(int player1, int player2); //battle rock...paper...scissor
void result(int player1, int player2); //overall winner of round

int main()
{
	greeting(); //display greeting message
	
	//setup random generator
	int seed;
	printf("Before we start, pick a number to determine how random I will be.\n");
	scanf("%d", &seed);//this determines how random the opponent is 
    srand(seed);
	printf("All set now!\n");
	
	for(int x = 0; x < ROUNDS; ++x)
	{
		playRound(x + 1);
	}
	
	printf("********************************************************\n");
	printf("Thank you for playing!\n");//exit message
	return 0;
}

void greeting()
{

//basic greeting
  printf("********************************************************\n");
  printf("Welcome to rock paper scissor game!\n");
  printf("Here are the rules.\n");
  printf("You and I will get to choose rock, paper, or scissor.\n");
  printf("After we made a decision we will reveal it and determine the winner based\n");
  printf("on these rules.\n");
  printf("Rock beats Scissor!\n");
  printf("Paper beats Rock!\n");
  printf("Scissor beats Paper!\n");
  printf("If we both pick the same option, then it is a tie.\n");
  printf("Ready to play?...Here we go!\n");
  printf("********************************************************\n");
}

void playRound(int round)
{
  //round loop
	printf("Welcome to a new round %d!\n", round);
	printf("Best out of three...Let's go!\n");
	
	int p1wins = 0;
	int p2wins = 0;
	
	//loop that keeps track of wins until respective player reaches 3. we will learn about conditional loops soon :)
	while(p1wins != 3 && p2wins != 3)
	{
		//place code inside this control structure that you want to repeat until someone wins best out of 3
   printf("Player 1 has won %d times.\n", p1wins);
		printf("Player 2 has won %d times.\n", p2wins);
		int player1pick = pickOne();
    //this loops the rounds
		switch (battle(player1pick, computerPick()))
		  {
		    case -1:
		   	  p1wins++;
			    break;
		    case 1:
			    p2wins++;
			    break;
	    }
    }
    //display results
    result(p1wins / 3, p2wins / 3);
  }

int computerPick()
{
  ///cumputer picks a number
  printf("I'm making my decision now.\n");
  return (rand() % 3) + 1;
}

int pickOne()
{
  //you pick a number
    printf("********************************************************\n");
		int selection;
		printf("1---Rock\n");
		printf("2---Paper\n");
		printf("3---Scissor\n");
		printf("Make your selection: ");
		scanf("%d", &selection);
		if (selection > 3 || selection < 1) 
		{
			printf("You made an invalid Choice, please try again!\n");
		}
		else
		{
			return selection;
		}
}

int battle(int player1, int player2)
{
  char p1 [9];
  char p2 [9];
  //converts input to text so I dont have to make a million more if statements
  //did you know C doesnt have strings thats so lame
  if(player1 == 1)
  {
    strcpy(p1, "Rock"); 
  }
  else if(player1 == 2)
  {
    strcpy(p1, "Paper"); 
  }
  else if(player1 == 3)
  {
    strcpy(p1, "Scissors"); 
  }
  
  if(player2 == 1)
  {
    strcpy(p2, "Rock"); 
  }
  else if(player2 == 2)
  {
    strcpy(p2, "Paper"); 
  }
  else if(player2 == 3)
  {
    strcpy(p2, "Scissors"); 
  }
  
//==============================================================
  
  //checks to see if there is a draw
  
  if(player1 == player2)
  {
    printf("Player 1 and Player 2 both used %s.\n", p1);
    printf("Draw\n");
     printf("********************************************************\n");
    return 0;
  }
  else
  {
   printf("********************************************************\n");
    printf("Player 1 used %s", p1);
    printf(" and Player 2 used %s\n", p2);
  }
//==============================================================

//if no draw then who won????

  if(player1== 1 && player2 == 2)
  {
    printf("Paper beats Rock!\n");
     printf("********************************************************\n");
    return -1;
  }
  if(player1== 1 && player2 == 3)
  {
    printf("Rock beats Scissor!\n");
     printf("********************************************************\n");
    return 1;
  }
  if(player1== 2 && player2 == 3)
  {
    printf("Scissors beats Paper!\n");
     printf("********************************************************\n");
    return -1;
  }
  if(player1== 2 && player2 == 1)
  {
    printf("Paper beats Rock!\n");
     printf("********************************************************\n");
    
    return 1;
  }
  if(player1== 3 && player2 == 1)
  {
    printf("Rock beats Scisssor!\n");
     printf("********************************************************\n");
    return -1;
  }
  if(player1== 3 && player2 == 2)
  {
    printf("Scissor beats Paper!\n");
     printf("********************************************************\n");
    return 1;
  }
}

void result(int player1, int player2)
{
//either you lose and you suck or you win and you are awesome
  if (player2)
	{
		printf("I won! Haha, better luck next time!\n");
    printf("********************************************************\n");
	}
	else
	{
   printf("You Won!\n\n");
		printf("I'll let you have this one\n");
    printf("********************************************************\n");
	}
}