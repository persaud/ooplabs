//This is a simple command line calculator
//OOP344
//KEVIN PERSAUD
#include <stdio.h>
#include <cstring>
#include <string>
#include <iostream>
using namespace std;

void addf(int a, int b){
	cout<<"\nNow adding both numbers...\n";
	 cout<<a + b<<"\n"<<endl;
}

int main(){
	int num1;
	int num2;
	char o[3] = "";
	char* add = "add";
	char* sub = "sub";
	char* div = "div";
	char* mul = "mul";
	char quit = 'n';

	do {
	cout<< "Enter your desired operation along with two numbers\n";
	scanf("%3s %9d %9d", o, &num1, &num2); 

	if (strcmp(o, add) == 0)
	{
	 addf(num1, num2);
	}

	else if (strcmp(o, sub) == 0)
		{
	 cout<<"\nNow subtracting both numbers...\n";
	 cout<<num1 - num2<<"\n"<<endl;
	}

	else 
		cout << "\nIncorrect input\n";

	 cout<<"Continue? (y/n):";
	 cin>>quit;
	 if (quit != 'y' && quit != 'n'){
	 do{
			 cout<<"\ny/n:";
			 cin>>quit;
	 } while ( quit != 'y' && quit != 'n'); 
	 }

	}
	while ( quit != 'n');
	cout<<"GOOD BYE";
	return 0;


}