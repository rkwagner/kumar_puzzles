#include <stdio.h>
#include <unistd.h>
  int main()
  {
          while(1)
          {
                    //stdout is buffered, never gets flushed, unless manually flushed.
                    //stderr is never buffered, print immediate.
                  fprintf(stdout,"hello-out");
                  fprintf(stderr,"hello-err");
                  sleep(1);
          }
          return 0;
  }
