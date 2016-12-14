#include <iostream>
#include <iomanip>
#include<windows.h>
#include<conio.h>

using namespace std;

void menu();
char input();
void strCpy(char *,char *);
void strCat(char *,char *);
void strRevA(char *);
void strcmp(char *,char *);

int main()
{
	char mes1[50];
	char mes2[50];
	char mesStore[50];
	
	char *p1=mes1;
	char *p2=mes2;

	
	char pick;
	
do{

	cout<<"Press Any key to continue"<<endl;
	cin.ignore();
	cout<<"Enter first message: ";
	gets(mes1);
	cout<<"Enter second message: ";
	gets(mes2);
	
	cout<<endl;

	menu();	
		
	
	cout <<"\n Choice: ";
	cin>>pick;
	
	switch(pick){		
		case '1':{
			cout<<"Copying message 2";
			Sleep(500);
			cout<<".";
			Sleep(500);
			cout<<"."<<endl;
			strCpy(mes1,mes2);
			cout<<p1;
			
			break;
		}
		case '2':{
	
		
			strCat(mes1,mes2);
			cout<<p1;
			break;
		}
		case '3':{
			
			strRevA(mes1);
			cout<<endl;
			strRevA(mes2);			
			
			break;
		}
		case '4':{
			strcmp(mes1,mes2);
			break;
		}
		case '0':{
			exit(0);
			break;
		}
		default:{
			cout<<"Try again"<<endl;
			break;
		}										
		
				}
	cout<<endl;			
	getch();			
	}while(pick!='0');
	exit(0);

	
	return 0;
}

void menu()
{
	cout <<endl <<"Main Menu\n";
	cout <<endl;
	cout <<"[1] strcpy\n";
	cout <<"[2] strcat\n";
	cout <<"[3] strrev\n";
	cout <<"[4] strcmp\n";
	cout <<"[0] Exit\n";	
}

void strCpy(char *p1,char *p2)
{
	while(*p1++=*p2++);
}
void strCat(char *p1,char *p2)
{
	while(*p1)
		p1++;
	while(*p1++=*p2++)
		;
}
void strRevA(char *p1)
{
	int ctr=0;
	for(int i=0;p1[i]!='\0';i++)
		{
			ctr++;
		}	
	for(int i=ctr-1;i>=0;i--)
		{
			cout<<p1[i];
		}
}
void strcmp(char *p1,char *p2)
{
	int res=0;
	for(int i=0;((p1[i]!='\0'||p2[i]!='\0'));i++)
	{
		if(p1[i]==p2[i])
		{
			res+=1;
		}
		else if((p1[i]||p2[i])=='\0')
		{
			res=0;
			break;
		}	
		else
		{
			res=0;
			break;
		}	
	}

	if (res==0)
	{
		cout<<"Not equal";
	}
	else
	{
		cout<<"Equal";
	}
}
