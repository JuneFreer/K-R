#include <stdio.h>

main(){
  int c, prev;

  prev = ' ';
  while((c = getchar()) != EOF){
    if(c == ' ' || c == '\n' || c == '\t'){
      if(prev != ' ' && prev != '\n' && prev != '\t'){
        putchar('\n');
      }
    }
    else{ /*如果c == non-whitespace*/
      putchar(c);
    }
    prev = c;
  }
}
