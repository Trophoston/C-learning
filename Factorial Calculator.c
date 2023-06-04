#include<stdio.h> //Factorial Calculator

int factorial(int factal)
{
  int multiplyer = factal,sum = factal;

  for(int i = 1;i<=factal-1;i++)
    {
      printf("%d x ",multiplyer);
      
      sum = sum * (multiplyer-1);

      multiplyer = multiplyer-1;
      
    }
  printf("1\nAnswer is = %d\n",sum);

  return(sum);
}

void dat(int datt)
{
  for(int i=1;i<=datt;i++)
    {
      printf("-");
    }
  printf("\n");
}

int main()
{
  int input;

  dat(40);
  
  printf("-- Maximum is 31 --\nEnter Factorial Calculation : ");  
  
  scanf("%d",&input);
  
  dat(40);

  if(input >= 32)
  {
    printf("Error : ");

    return(1);
  }

  
  factorial(input);

  dat(40);
  
  return(0);
}
