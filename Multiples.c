#include <stdio.h>

int main(){
int sum = 0;
int i, j;
for (i = 3; i < 1000; i += 3){
  sum += i;
}
for (j = 5; j < 1000; j += 5){
  sum += (!(j % 15)) ? 0 : j;
}
printf("The sum of the multiples of 3 or 5 under 1000 is %d.", sum);
return sum;
}
