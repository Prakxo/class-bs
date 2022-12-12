#include <stdio.h>

int main(){

int cases;
int values[3];


scanf("%d", &cases);
int t5 = cases;
int v0 = 0;
int fout[t5];
int t6 = 0;
while(cases--){

	scanf("%d %d %d", &values[0], &values[1], &values[2]);
	int t1 = values[0];
	int t2 = values[1];
	int t3 = values[2];
	int t4 = t1 + 1;
	int t7 = t3 / 2;
	if(t3 == t4){
	t4 = 0;
	}
	else if(t3 > t1){
		t4 = ((t3 - 1) % t1) * t2;
	}
	else{
		t4 = t3 * t2;
	}
	if(t1 == t7){
		t4 = t1 * t2;
	}

	fout[v0] = t4;
	v0++;
}
for(t5; t5 > 0; t5--){
printf("%d\n", fout[t6]);
t6++;
}
return(0);
}
