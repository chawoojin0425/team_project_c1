#include <stdio.h>
int main(){
	char n1[10];
	char n2[10];
	int a, b, c;
	float s, a3;
	
	FILE *fp;
	fp = fopen("sj.txt", "r");
	fscanf(fp, "%s %s %d %d %d", &n1, &n2, &a, &b, &c);
	fclose(fp);
	
	s = a+b+c;
	a3 = s/3;
	printf("%s %s\n%d\n%d\n%d\n", n1, n2, a, b, c);
	printf("average: ");
	printf("%.2f", a3);
	
	return 0;
}