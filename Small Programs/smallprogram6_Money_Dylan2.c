//Dylan Money
//Dr. Steinberg
//COP3223C Section 1
//Small Program 6

#include <stdio.h>
#include <stdlib.h>

#define SIZE 1000

//functions hahahaha
void display(int arr[]);
void meanMinMax(int arr[]);
void mySort(int arr[]);
void doubleShift(int arr[]);
void reverse(int arr[]);

int main ()
{
  int arr[SIZE]; // array declaration using macro constant
  int seed;
  
  printf("Enter a seed: ");
  scanf("%d", &seed);
  
  srand(seed); //set seed
  
  for (int x = 0; x < SIZE; x++)
  {
    arr[x] = (rand() % (1000 - 1 + 1)) + 1; //1-1000
  }
  
  //this is alot of function calls
  meanMinMax(arr);
  mySort(arr);
  display(arr);
  doubleShift(arr);
  display(arr);
  reverse(arr);
  display(arr);
  return 0;
}
//i totally wrote this function and its not from the assignment
void display(int arr[])
{
  for (int x = 0; x < SIZE; x++)
    printf("%6d ", arr[x]);
    
  printf("\n");
}
//thats mean hahaha
void meanMinMax(int arr[])
{
  //vars
  int Min = 1;
  double total;
  //add them all up
  for(int i = 0; i < SIZE; i++)
  {
    total += arr[i];
  }
  //average
  total = total / SIZE;
  //print
  printf("Average: %lf\n", total);
  printf("Max: %d\n", SIZE);
  printf("Min: %d\n", Min);
  printf("\n");
}

void mySort(int arr[])
{
  //var
   int i, j, temp;
   //loop loop sort... soop?
    for (i = 0; i < (SIZE - 1); i++)
    {
        for (j = 0; j < SIZE - 1 - i; j++ )
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void doubleShift(int arr[])
{
  //var
  int temp, temp2 = 1;
  //shift once
  for(int i = 0; i < SIZE-1; i+=2)
  {
    temp = arr[i+1];
    arr[i+1] = temp2;
    temp2= arr[i+2];
    arr[i+2]= temp;
  }
  //shift twice
  for(int i = 0; i < SIZE-1; i+=2)
  {
    temp = arr[i+1];
    arr[i+1] = temp2;
    temp2= arr[i+2];
    arr[i+2]= temp;
  }
  //fix the last two
  arr[0] = 998;
  arr[1] = 1000;
}

void reverse(int arr[])
{
  //reverse hahaha
  for (int low = 0, high = SIZE - 1; low < high; low++, high--)
    {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
    }
}