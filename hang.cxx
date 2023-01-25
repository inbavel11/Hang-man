#include<stdio.h>
#include<conio.h>
char a[7]={'*','*','*','*','*','*','*'};
void bo()
{
	printf("\n%c %c %c %c %c %c %c %c",a[0],a[1],a[2],a[3],a[4],a[5],a[6]);
	printf("\n_ _ _ _ _ _ _ ");
}
int main()
{
	char n;
	int i=0,s=0;
	while(i<7)
	{
		bo();
		printf("\nenter=");
		scanf("%s",&n);
		clrscr();
		switch(n){
			case 'w':
			a[0]='w';
			s++;
			break;
				case 'e':
			a[1]='e',a[6]='e',s++;
			break;
				case 'l':
			a[2]='l',s++;
			break;
				case 'c':
			a[3]='c',s++;
			break;
				case 'o':
			a[4]='o',s++;
			break;
				case 'm':
			a[5]='m',s++;
			break;
			
			default:
			i++;
		
}
	if(s==6)
			i=8;
	}
	if(s==6)
	printf("\nyou win");
	else
	printf("\nyou lose");
	return 0;
}

	