#include <stdio.h>
#include <stdlib.h>
#define MAX_NAME 20
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct student{
	int ID;
	char name[MAX_NAME];
	double grade;
};

int main(int argc, const char *argv[]){
	struct student s1 = {1003, "JuhyunShin",4.0};
	
	s1.ID = 1020;
	strcpy(s1.name, "ShinJuhyun");
	s1.grade = 3.8;
	
	printf("ID: %d\n",s1.ID);
	printf("name: %s\n",s1.name);
	printf("grade: %lf",s1.grade);
	
	return 0;
}

