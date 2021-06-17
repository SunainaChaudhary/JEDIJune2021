#include <stdio.h>

void greeting(char name[]);
int main() {
	printf("Hello World");
	printf("Supp yo?");
	char name = "Alia Bhat";
	greetings(name);
}

void greetings(char name[]){
	printf("Hey, Where were you?.. %s", name);
}
