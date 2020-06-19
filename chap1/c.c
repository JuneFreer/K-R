#include <stdio.h>

main(){

  float celsius;
  float fahr;

  int lower;
  int upper;
  int step;

  lower = 0;
  upper = 300;
  step = 20;

  celsius = lower;
  printf("celsius to fahr\n");
  while(celsius <= 300){
    fahr = (9.0 / 5.0) * celsius + 32;
    printf("%3.0f %6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
