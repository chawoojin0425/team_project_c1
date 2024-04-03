#include <stdio.h>
int main() {
    FILE *file;
    char name[100];
    int scores[3];
    int total_scores = 0;
    float average_score;
    // 파일 열기
    file = fopen("sj.txt", "r");
    // 파일에서 이름과 성적 읽기
    fscanf(file, "%[^\n]\n", name);
    fscanf(file, "%d\n", &scores[0]);
    fscanf(file, "%d\n", &scores[1]);
    fscanf(file, "%d", &scores[2]);
    // 파일 닫기
    fclose(file);
    // 이름과 성적 출력
    printf("Name: %s\n", name);
    printf("Scores: %d, %d, %d\n", scores[0], scores[1], scores[2]);
    // 평균값 계산
    total_scores = scores[0] + scores[1] + scores[2];
    average_score = (float)total_scores / 3;
    // 결과를 sj1.txt에 쓰기
    file = fopen("sj1.txt", "w");
    fprintf(file, "%.2f", average_score);
    fclose(file);
    printf("Average score saved in sj1.txt: %.2f\n", average_score);
    return 0;
}
