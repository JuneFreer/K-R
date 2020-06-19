// #include <stdio.h>
//
// #define IN 1
// #define OUT 0
//
// main()
// {
//   int c, nl, nw, nc, state;
//
//   state = OUT;
//   nl = nw = nc = 0;
//
//   while((c = getchar()) != EOF){
//     ++nc;
//     if(c == '\n')
//       ++nl;
//     if(c == ' ' || c == '\n' || c == '\t')
//       state = OUT;
//     else if(state == OUT){
//       state = IN;
//       ++nw;
//     }
//   }
//   printf("%d %d %d\n", nl, nw, nc);
// }

/* notice: Mac OS系统中EOF的输入是control + D */

/*debug行数错误*/
#include <stdio.h>

#define IN 1
#define OUT 0

main()
{
  int c, nl, nw, nc, state;

  state = OUT;
  nl = nw = nc = 0;

  while((c = getchar()) != EOF){
    ++nc;
    if(c == '\n')
      ++nl;
    if(c == ' ' || c == '\n' || c == '\t')
      state = OUT;
    else if(state == OUT){
      state = IN;
      ++nw;
    }
  }
  if(nc != 0)
    nl = nl + 1;
  printf("\n%d %d %d\n", nl, nw, nc);
}
