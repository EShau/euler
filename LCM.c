#include <stdio.h>

int gcf(int a, int b){
  if (!b) return a;
  else return gcf(b, a % b);
}

int main(){
  int num;
  int lcm = 1;
  for (num = 1; num <= 20; num++){
    lcm *= (num / gcf(lcm, num));
  }
  printf("The smallest positive number that is evenly divisible by all the numbers from 1 to 20 is %d.", lcm);
  return lcm;
}
