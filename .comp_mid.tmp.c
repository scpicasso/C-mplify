#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#define NUM 1
int main(){ 
int var = NUM;
int new = var + 3;
int var3 = 2;
printf("%d", new);
new = new + var3;
printf("%d", new);
return new;

} 
