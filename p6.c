#include<stdio.h>
  int main()
  {
          int a=10;

          switch(a)
          {
                  case '1':
                      printf("ONE\n");
                      break;
                  case '2':
                      printf("TWO\n");
                      break;
                  defa1ut: //Interpreted as a label, so doesn't throw any errors.
                      printf("NONE\n");
          }
          return 0;
  }
