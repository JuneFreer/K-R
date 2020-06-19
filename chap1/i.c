#include <stdio.h>

main(){
  int c, inspace;

  inspace = 1;

  while((c = getchar()) != EOF){
    if(c == ' ' || c == '\n' || c == '\t'){
      if(inspace == 0){
        inspace = 1;
        putchar('\n');
      }
    }
    else{
      inspace = 0; /*表示有字符被打印了*/
      putchar(c);
    }
  }
}
