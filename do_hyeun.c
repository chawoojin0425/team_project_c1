#include <stdio.h>
int main(){
    char n1[10]; //Jaechang\0
    char n2[5]; //Shim\0
    int score[3]; //88 98 86
    float s = 0, a3;

    FILE *fp1;
    fp1 = fopen("sj.txt","r"); //fread.c
    fscanf(fp1,"%s %s", n1, n2); //배열일 땐 &주소 안 붙임
    for (int i = 0; i<3; i++){
    	fscanf(fp1, "%d", &score[i]);
    	s += score[i]; //s = s + score[i];축약대입연산자
	}
	a3 = s / 3;
    fclose(fp1);
    
    printf("%s %s\n", n1, n2);
    for (int i = 0; i < 3; i++) {
        printf("%d\n", score[i]);
    }
    FILE *fp2;
    fp2 = fopen("sj1.txt","w"); //fwrite.c
    fprintf(fp2, "average: %f", a3);
    fclose(fp2);
    
    return 0;
}
