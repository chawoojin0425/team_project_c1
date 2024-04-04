#include <stdio.h>
int main() {
  FILE *input_file, *output_file; // 파일 포인터
  char name[50];              // 이름을 저장하는 문자열 배열
  int score1, score2, score3; //점수 저장 변수
  float average;              // 평균점수 변수
  // 입력 파일 열기
  input_file = fopen("sj.txt", "r");
  // 파일을 열 수 없을 때
  if (input_file == NULL) {
    printf("파일을 열 수 없습니다.\n");
    return 1;
  }
  // 출력 파일 열기
  output_file = fopen("sj1.txt", "w");
  if (output_file == NULL) {
    printf("파일을 생성할 수 없습니다.\n");
    return 1;
  }
  // 파일에 더 이상 읽어올 내용이 없을때까지 반복해서 데이터 읽기 및 출력
  while (fscanf(input_file, "%[^\n] %d %d %d", name, &score1, &score2,
                &score3) != EOF) {
    printf("%s\n%d\n%d\n%d\n", name, score1, score2, score3);
    // %[^\n] : 사용자가 줄바꿈을 입력하기 전 까지의 문자열을 받아옴
    // %d : 정수를 받아옴
    // %s : 문자열을 받아옴(공백 있으면 공백이 있기 전 까지만 받아옴)
    // != EOF :  "End of File이 아닌 경우" 파일에서 더 이상 읽을 내용이 없을
    // 때까지 반복을 계속하라는 뜻
    average = (score1 + score2 + score3) / 3.0;
    //평균 계산
    // 결과를 파일에 쓰기
    fprintf(output_file, "%s의 평균 점수는 %f입니다.\n", name, average);
  }
  // 파일 닫기
  fclose(input_file);
  fclose(output_file);
  printf("처리가 완료되었습니다.\n");
  return 0;
}
