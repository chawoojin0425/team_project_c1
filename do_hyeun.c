/*
#include <stdio.h>
int main(){
	char n1[15];
	char n2[15];
	int a, b, c;
	float s, a3;
	
	FILE *fp;
	fp = fopen("sj.txt", "r");
	fscanf(fp, "%s %s %d %d %d", n1, n2, &a, &b, &c);
	fclose(fp);
	
	s = a + b + c;
	a3 = s / 3;
	printf("%s %s\n%d\n%d\n%d\n", n1, n2, a, b, c);
	printf("average: ");
	printf("%.2f", a3);
	
	return 0;
}
*/

#include <stdio.h>
int main(){
    char n1[15];
    char n2[15];
    int score[3];
    float s = 0, a3;

    FILE *fp;
    fp = fopen("sj.txt", "r");
    fscanf(fp,"%s %s", n1, n2);
    for (int i = 0; i<3; i++){
    	fscanf(fp, "%d", &score[i]);
    	s = s + score[i];
	}
	a3 = s / 3;
	
    fclose(fp);

    printf("%s %s\n", n1, n2);
    for (int i = 0; i < 3; i++) {
        printf("%d\n", score[i]);
    }
    printf("average: %.2f", a3);
    
    return 0;
}
