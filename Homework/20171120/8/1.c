#include<stdio.h>
#include<string.h>

struct mystr{
	char name[10];int number;int korea;int english;int average;
};
void readData(struct mystr *ptr){
	for(int i=0;i<3;i++){
		scanf("%s",ptr->name);
		scanf("%d",&(ptr->number));
		scanf("%d",&(ptr->korea));
		scanf("%d",&(ptr->english));
		ptr++;
		}
}
void calAverage(struct mystr *ptr){
	for(int i=0;i<3;i++){
		ptr->average= (ptr-> korea +ptr-> english)/2;
		ptr++;
	}
}
void printData(struct mystr *ptr){
	for(int i=0;i<3;i++){
		printf("%s   ",ptr->name);
		printf("%d   ",ptr->number);
		printf("%d   ",ptr->korea);
		printf("%d   ",ptr->english);
		printf("%d   \n",(ptr->average));
		ptr++;
	}
}
int main(){
	struct mystr data[3];
	readData(data);
	calAverage(data);
	printData(data);
}
