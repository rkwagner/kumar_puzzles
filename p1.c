#include<stdio.h>

  //The for loop is unrolled to 0 before array is defined (preprocessor)
  #define TOTAL_ELEMENTS (sizeof(array) / sizeof(array[0]))
  int array[] = {23,34,12,17,204,99,16};

  int main()
  {
      int d;
      printf("%d\n", array[(TOTAL_ELEMENTS-2)]);
      for(d=-1;d <= (TOTAL_ELEMENTS-2);d++)
          printf("%d\n",array[d+1]);

      return 0;
  }
