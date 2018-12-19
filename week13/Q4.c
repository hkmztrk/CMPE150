#include <stdio.h>
#include <stdlib.h>

struct Student{
	float midterm1;
	float midterm2;
	float final;
	char lettergrd;
	int id;
};

char get_letter_grade(float mt1, float mt2, float fin){
	float avg = (mt1*0.3) + (mt2 * 0.3) + (fin * 0.4);

	if(avg >=0 & avg <= 24)
		return 'F';
	else if (avg >=25 & avg <= 49)
		return 'C';
	else if (avg >=50 & avg <= 74)
		return 'B';
	else if (avg >=75 & avg <= 100)
		return 'A';
}

int main(void){

	int N;
	scanf("%d", &N);

	struct Student cmpe150[N];
	int i;
	for(i=0; i <N; i++){
		scanf("%f %f %f", &cmpe150[i].midterm1, &cmpe150[i].midterm2, &cmpe150[i].final);
		cmpe150[i].lettergrd = 'I';
		cmpe150[i].id = 1000 + i;
	}
	for(i=0; i <N; i++){
		char res = get_letter_grade(cmpe150[i].midterm1, cmpe150[i].midterm2, cmpe150[i].final);
		cmpe150[i].lettergrd = res;
		printf("%d %c", cmpe150[i].id, cmpe150[i].lettergrd);
	}

	return 0;
}
