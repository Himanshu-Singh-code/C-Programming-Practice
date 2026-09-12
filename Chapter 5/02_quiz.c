#include <stdio.h>

void good_morning();
void good_afternoon();
void good_evening();

int main() {
  good_morning();
  good_afternoon();
  good_evening();
  return 0;
}

void good_morning() {
    printf(" Hello ,Good morning!\n");
}

void good_afternoon() {
    printf(" Hello , Good afternoon!\n");
}

void good_evening() {
    printf("Hello , Good evening!\n");
}