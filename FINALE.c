#include <stdio.h>  
#include <stdlib.h>  // C표준 유틸리티 함수(여러가지 계산과 처리를 대신해줌)를 모아놓은 헤더파일

int main(){
    char name[64];  // 'name'이라는 배열(문자열) 선언
    int scores[3];  // 'score'이라는 배열(정수형) 선언
    float average;  // 평균 변수(실수형) 선언
    int i, total;   

    FILE *output_file, *storage_file; // 2개의 파일 포인터 선언
    output_file = fopen("sj.txt", "r");
    if(output_file == NULL){
        printf("파일을 열 수 없습니다.\n"); // 에러 메시지 출력
        exit(1);                  // 프로그램 강제 종료
    }

    fgets(name, sizeof(name), output_file); // fgets 함수를 이용해 문자열 배열 한 줄만 읽기
    printf("%s", name); // 이름 출력
    
    for(i=0; i<3; i++){                         // for 문을 이용하여 점수 3개를 각각 입력
        fscanf(output_file, "%d\n", &scores[i]);
        total += scores[i];                       // 총합 계산
    }
    fclose(output_file);

    printf("%d\n%d\n%d\n", scores[0], scores[1], scores[2]); // 점수 3개 출력

    average = total/(float)3; // 형변환 연산자(실수형)를 이용하여 평균 계산

    storage_file = fopen("sj1.txt","w"); 
    fprintf(storage_file,"%s님의 평균 점수는 %.2f입니다.", name, average); // 평균 점수 출력
    fclose(storage_file);
    
}