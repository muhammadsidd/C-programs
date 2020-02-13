#include <stdio.h>
#include <stdlib.h>

int is_prime(int n) {
if(n <= 1) {
return 0;
} else {
int i;
for(i = 2; i < n; ++i) {
if(n % i == 0) {
return 0;
}
}
return 1;
}
}

int main(int argc, char *argv[]) {
if(argc > 1) {
int i, num;
printf("prime numbers: ");
for(i = 1; i < argc; ++i) {
num = atoi(argv[i]);
if(is_prime(num)) {
printf("%d ", num);
}
}
printf("\n");
}
return 0;
}
