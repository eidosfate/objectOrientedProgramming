#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <process.h>

/*Prototype Declaration*/
int Fibbonaci(int n);
int Factorial(int n);
int Table(int n);
int Prime(int n);
int checkEvenOdd(int n);
int Armstrong(int n);

void main()
{
  int n;
  char ch;
  /*Do While Loop to repeat until value = 7 */
  do{
    system("cls"); /* As clrscr doenst work using Win32 Engine... I tried */
  printf(" 1. Fibbonaci \n 2.Factorial \n 3. Table \n 4. Check for Prime \n 5.Check for Even/Odd \n 6. Check for Armstrong No. \n 7. Exit");
  printf(" \n\t Make your Choice:");
  scanf("%s",&ch);
  if(ch!='7')
  {printf("Enter the Number:");
  scanf("%d",&n);
}
  /*Switch Begins here*/
  switch(ch)
  {case '1' : Fibbonaci(n);
                            break;
   case '2' : Factorial(n);
              break;
   case '3' : Table(n);
              break;
   case '4' : Prime(n);
              break;
   case '5' : checkEvenOdd(n);
              break;
   case '6' : Armstrong(n);
              break;
   case '7' : exit(0);
    }
}while(ch !='7');
  getch();
}
/* Other functions based on the choice */
int Fibbonaci(int n)
{int first = 0, second = 1, next, c;
  printf("First %d terms of Fibonacci series are:\n", n);
 for (c = 0; c < n; c++)
 {
   if (c <= 1)
     next = c;
   else
   {
     next = first + second;
     first = second;
     second = next;
   }
   printf("%d \t", next);
 }
getch();
}

int Factorial(int n)
{
  int c, fact = 1;

  for (c = 1; c <= n; c++)
    fact = fact * c;

  printf("Factorial of %d = %d\n", n, fact);
getch();
}

int Table(int n)
{ int i;

    for(i=1; i <= 10; ++i)
    {
        printf("%d * %d = %d \n", n, i, n*i);
    }

    getch();
}

int Prime(int n)
{
  int i, flag = 0;

    for(i=2; i<=n/2; ++i)
    {

        if(n%i==0)
        {
            flag=1;
            break;
        }
    }

    if (flag==0)
        printf("%d is a prime number.",n);
    else
        printf("%d is not a prime number.",n);

    getch();
}

int checkEvenOdd(int n)
{

    // True if the number is perfectly divisible by 2
    if(n % 2 == 0)
        printf("%d is even.", n);
    else
        printf("%d is odd.", n);

    getch();
}

int Armstrong(int n)
{
  int originalNumber, remainder, result = 0;

        originalNumber = n;

    while (originalNumber != 0)
    {
        remainder = originalNumber%10;
        result += remainder*remainder*remainder;
        originalNumber /= 10;
    }

    if(result == n)
        printf("%d is an Armstrong number.",n);
    else
        printf("%d is not an Armstrong number.",n);

    getch();

}
