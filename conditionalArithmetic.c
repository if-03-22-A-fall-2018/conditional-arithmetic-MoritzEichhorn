/*----------------------------------------------------------
 *				HTBLA-Leonding / Class: 2 AHIF
 * ---------------------------------------------------------
 * Exercise Number: 4
 * Title:			Conditional Arithmetic
 * Author:			Moritz Eichhorn
 * ----------------------------------------------------------
 * Description:
 * It multiplies or adds every number from 0 to the
 * maximum, that the user had put in, if the current number
 * is a mutiple of 3 or 5.
 * ----------------------------------------------------------
 */

#include <stdio.h>
#include <limits.h>

void readOperation(int* operation){
  do {
    printf("Select Add (1) or Multiply (2): ");
    scanf("%d",operation);
  } while((*operation < 1) || (*operation > 2));
}

void readNumber(int* max){
  do {
    printf("Select a number in the range (1-100): ");
    scanf("%d",max);
  } while((*max < 1) || (*max > 100));
}

void printResult(long result){
  printf("The result is: %ld\n",result);
}

void add(int max)
{
  long sum = 0;

  for(int i = 3; i <= max; i++)
  {
    if((i%3 == 0) || (i%5== 0))
    {
      sum += i;
    }
  }
  printResult(sum);
}

// Wenn overflow dann return = 1 sonst 0
int isOverflow(int max){
  long result = LONG_MAX;
  for(long i = max; i > 3; i--)
  {
    if((i % 3 == 0) || ( i % 5 == 0))
    {
      result /= i;
    }
  }

  if(result >= 3)
  {
    return 0;
  }
  else
  {
    return 1;
  }
}

void multiply(int max){
  long result = 1;

  if(max >= 3)
  {
    for(int i = 3; i <= max; i++)
    {
      if((i%3 == 0) || (i%5== 0))
      {
        result *= i;
      }
    }
    printResult(result);
  }
  else
  {
    printResult(0);
  }
}

void organizeOperation(int operation, int max){
  switch (operation) {
    case 1:
      add(max);
      break;
    case 2:
      if(isOverflow(max) == 0)
      {
        multiply(max);
      }
      else
      {
        printf("Number overflow\n");
      }
      break;
  }
}

int main(int argc, char const *argv[]) {
  int max;
  int operation;

  readOperation(&operation);
  readNumber(&max);
  organizeOperation(operation, max);

  return 0;
}
