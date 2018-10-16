#include <stdio.h>

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

bool isOverflow

void multiply(int max){
  long result = 1;

  if(max >= 3)
  {
    for(int i = 3; i <= max; i++)
    {
      if(()(i%3 == 0) || (i%5== 0)) && !())
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
      multiply(max);
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
