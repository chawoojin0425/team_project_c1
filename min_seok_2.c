#include <stdio.h>
int main() {
    FILE *file;
    char name[100];
    float num1, num2, num3, average;
    // 읽기 위해 파일 열기
    file = fopen("sj.txt", "r"); 
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }
    // 파일로부터 이름과 세 수를 읽기
    fscanf(file, "%f %f %f", &num1, &num2, &num3);
    // 평균 계산하기
    average = (num1 + num2 + num3) / 3;
    // 결과 출력
    printf("The average of %.2f, %.2f, and %.2f is %.2f\n", num1, num2, num3, average);
    // 파일닫기
    fclose(file);
    return 0;
}