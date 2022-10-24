#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void greeting(); //welcome the user to the coffee shop
double order(double *balance); //user will make a purchase
void viewAccount(double *balance); //display current account balance of user
void transaction(double *balance, double price); //transaction with user account
void reload(double *balance); //reload your account balance
void displayMenu(); //display beverage/food options and prices

int main()
{
//vars
  int i = 0;
//call functions
  greeting();
  
  displayMenu();
    
  return 0;
}

void greeting()
{
  //greetings earthlings
  printf("Welcome to the Knightro's Coffee Shop!\n");
  printf("We serve delicious coffee and snacks!\n");
  printf("How can we help you today?");
}

void displayMenu()
{
//vars
  char selection;
  int s = 0;
  double balance = 0;
//gameloop
  while(s == 0)
  {
  printf("\n");
  printf("Please select one of the following options.\n");
  printf("O: Order\nV: View Account Summary\nD: Display Menu\nR: Reload\nE: Exit\n");
  printf("Please select what you would like to do.\n");
  printf("Option Selected: ");
  
  scanf("%c", &selection);
  
  
  if(tolower(selection) == 'o')
  {
    printf("\n");
    transaction(&balance, order(&balance));
  }
  else if(tolower(selection) == 'v')
  {
    printf("\n");
    viewAccount(&balance);
  }
  else if(tolower(selection) == 'd')
  {

  }
  else if(tolower(selection) == 'r')
  {
    printf("\n");
    reload(&balance);
  }
  else if(tolower(selection)== 'e')
  {
//get out of my shop u fat pig
    printf("Thank you for visiting Knightro's Coffee Shop!\n");
    printf("You have $%.2lf in your account.\n", balance);
    printf("Have a great day!\n");
    printf("Go Knights! Charge On!\n");
    exit(0);
  }

  }
}

void viewAccount(double *balance)
{
  //printy printy
  printf("You selected View Account Summary option.\n");
  printf("Here is your current account balance.\n");
  printf("You have %.2lf ", *balance);
  printf("in your account.");
}

void reload(double *balance)
{
  //There once was a strange man who claimed to be from the moon and had travelled to the earth to warn of the end. What he found when he arrived were beasts of unprecedented size looming above him. feeling quite inadequite he decided to go to the top of a mountain to tower above these creatures. The man approached the summit as the light quickly subsided, his surroundings becoming very dark. At the top of the mountain he rejoiced shouted at the sky and searched for his homeland. The man turned to be met with a gigantic astroid which struck him and killed all the creatures living on the planet. Moral of the story. Don't leave the moon.
  int placeHolder;
  //ur poor and i can help
  printf("How much would you like to reload to your account?\n");
  printf("1: $1.00\n2: $5.00\n3: $10.00\n");
  printf("Option Selected: ");
  scanf("%d", &placeHolder);
  //lets switch it up
  switch (placeHolder) {
    case 1:
      *balance += 1;
      printf("\n");
      printf("$1.00 has been added to your account successfully!");
      printf("\n");
      break;
    case 2:
      *balance += 5;
      printf("\n");
      printf("$5.00 has been added to your account successfully!");
      printf("\n");
      break;
    case 3:
      *balance += 10;
      printf("\n");
      printf("$10.00 has been added to your account successfully!");
      printf("\n");
      break;
  }
}

double order(double *balance)
{
//vars
  int choice;
  double hot = 3.53;
  double iced = 4.20;
  double hLatte = 3.13;
  double iLatte = 4.12;
  double bagel = 3.99;
  double big = 4.99;
  double frozen = 5.03;
  double water = 1.5;
//printing is expensive
  printf("\n");
  printf("You have selected the Order Option.\n");
  printf("\n");
  printf("Here are the options!");
  printf("\n");
  printf("1. Hot Coffee                            $3.53\n2. Iced Coffee                           $4.20\n3. Hot Latte                             $3.13\n4. Iced Latte                            $4.12\n5. Bagel (includes cream cheese)         $3.99\n6. Big Scone                             $4.99\n7. Frozen Coffee                         $5.03\n8. Bottle Water                          $1.50\n");
  printf("\n");
  printf("What would you like today?");
  printf("Option Selected: ");
  scanf("%d", &choice);
  printf("\n");
  //lets switch it up again
  switch(choice){
    case 1:
      printf("Hot Coffee has been selected. Total Cost is: %.2lf\n", hot);
      return hot;
    case 2:
      printf("Hot Coffee has been selected. Total Cost is: %.2lf\n", iced);
      return iced;
    case 3:
      printf("Hot Coffee has been selected. Total Cost is: %.2lf\n", hLatte);
      return hLatte;
    case 4:
      printf("Hot Coffee has been selected. Total Cost is: %.2lf\n", iLatte);
      return iLatte;
    case 5:
      printf("Hot Coffee has been selected. Total Cost is: %.2lf\n", bagel);
      return bagel;
    case 6:
      printf("Hot Coffee has been selected. Total Cost is: %.2lf\n", big);
      return big;
    case 7:
      printf("Hot Coffee has been selected. Total Cost is: %.2lf\n", frozen);
      return frozen;
    case 8:
      printf("Hot Coffee has been selected. Total Cost is: %.2lf\n", water);
      return water;
      
  }
}

void transaction(double *balance, double price)
{
//transacting
  printf("Beginning Transaction Process.\n");
  printf("Your account balance before official transaction: %.2lf\n", *balance);
  printf("Billing %.2lf to your account.\n", price);
  printf("Transaction was successful!\n");
  *balance -= price;
  printf("You now have $%.2lf in your account balance.\n", *balance);
  printf("\n");
}