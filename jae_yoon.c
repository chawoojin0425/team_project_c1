#include <stdio.h>
int main() {
    FILE *sjFile, *sj1File;
    char name[100];
    int scores[3];
    int sum=0, count=0;
    float average;

    sjFile = fopen("sj.txt", "r");
    if (sjFile == NULL) {
        printf("파일실행오류\n");
        return 1;
    }

    fgets(name, sizeof(name), sjFile);

    for (int i = 0; i < 3; i++) {
        fscanf(sjFile, "%d", &scores[i]);
        sum += scores[i];
        count++;
    }

    fclose(sjFile);

    average = (float)sum / count;

    printf(name);
    printf("%d, %d, %d\n", scores[0], scores[1], scores[2]);
    printf("%.2f\n", average);

    sj1File = fopen("sj1.txt", "w");
    if (sj1File == NULL) {
        printf("파일 생성 오류\n");
        return 1;
    }
    fprintf(sj1File, "%.2f", average);

    fclose(sj1File);
    return 0;
}