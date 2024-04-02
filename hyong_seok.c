#include <stdio.h>

int main() {
    FILE *fp = fopen("sj.txt", "r");
    if (fp == NULL) {
        printf("파일을 열 수 없습니다.");
        return 1;
    }

    char name1[256];
    char name2[256];
    int score1, score2, score3;

    fscanf(fp, "%s %s", name1, name2);
    fscanf(fp, "%d %d %d", &score1, &score2, &score3);
    printf("%s %s\n", name1, name2);
    printf("%d\n%d\n%d\n", score1, score2, score3);
    fclose(fp);
    
    float avg;
	avg = (score1 + score2 + score3)/(float)3;

    FILE *fp_output;
    fp_output = fopen("sj1.txt", "w");
    if (fp == NULL) {
        printf("파일을 열 수 없습니다.");
        return 1;
    }
    fprintf(fp_output, "%.4f\n", avg);
    fclose(fp_output);

}
