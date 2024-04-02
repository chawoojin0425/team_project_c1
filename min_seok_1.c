#include <stdio.h>
int main() {
  FILE *fp = fopen("sj.txt", "r");
  if (fp == NULL) {
    printf("No file !");
    return 1;
  }
  char name1[256];
  char name2[256];
  int scores[3];
  fscanf(fp, "%s%s", name1, name2);
  for (int i = 0; i < 3; i++) {
    fscanf(fp, "%d", &scores[i]);
  }
  printf("%s %s\n", name1, name2);
  for (int i = 0; i < 3; i++) {
    printf("%d\n", scores[i]);
  }
  printf("\n");
  fclose(fp);
  return 0;
}
