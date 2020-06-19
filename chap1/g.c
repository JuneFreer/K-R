#include <stdio.h>
/*统计行数*/

main(){

  int c, nl;

  while((c = getchar()) != EOF){
    if(c == '\n')
      ++nl;
  }

  printf("%d\n", nl);
}
