#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define SIZE 50

int add_appointment(void) {
	char name[SIZE];
	char email[SIZE];
	 long int contact=0;
	int month=0;
	int date=0;

	printf("Enter your name\n");
	gets(name);
	printf("Enter your email id\n");
	gets(email);
	printf("Enter your contact number\n");
	scanf_s("%ld", &contact);
	printf("Enter the month in which you want appointement\n");
	scanf_s("%d", &month);



	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
		printf("Enter the Date of an appointment\n");
		if (scanf_s("%d", &date) < 31) {
			printf("appointment booked for %d %d\n", date, month);
		}


	}

	if (month == 4 || month == 6 || month == 9 || month == 11) {
		printf("Enter the Date of an appointment\n");
		if (scanf_s("%d", &date) < 30) {
			printf("appointment booked for %d %d\n", date, month);
		}



	}
	if (month == 2){
		printf("Enter the Date of an appointment\n");
		if (scanf_s("%d", &date) < 28) {
			printf("appointment booked for %d %d\n", date, month);
		}


	}


	
}
int main(void) {
	add_appointment();



}
