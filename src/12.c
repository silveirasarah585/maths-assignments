int main() {
  int num = 0;
  srand(time(NULL));
  num = rand() % 10 + 1;
  printf("Random number between 1 and 10: %d\n", num);
  return 0;
}
