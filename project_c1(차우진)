#include <stdio.h>
#include <stdlib.h>

int main(){
  char name[64];           // 'name'이라는 64바이트 문자열 선언
  int score_1,score_2,score_3, sum; // 각각의 점수와 그 합
  FILE *input_file, *output_file;   // 파일 포인터 2개 선언
  input_file = fopen("sj.txt","r"); // 파일 읽기
  if(input_file == NULL){
    printf("파일열기 실패\n"); // 에러 메시지 출력
    exit(1);               // 프로그램 강제 종료
  }

  fgets(name, sizeof(name), input_file); //fgets 함수를 이용하여 문자열 한 줄만 읽어옴. fgets(,,)
  printf("%s", name);
  fscanf(input_file, "%d %d %d", &score_1, &score_2, &score_3);
  printf("%d\n%d\n%d\n", score_1, score_2, score_3);
  
  fclose(input_file);   // 파일 종료

  sum = score_1 + score_2 + score_3;    // 점수의 합
  
  FILE *fp_output;                    // 파일 쓰기
  output_file = fopen("sj1.txt","w");
  fprintf(output_file, "%.2f", sum/(float)3);
  fclose(output_file);

  
}
