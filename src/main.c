#include <stdio.h>  
#include<windows.h>//I know this is the best library because of how compatible it it with other OS's
int  p, r, q;
char a[5000], f[5000], b, *s=f;
char o;

void interpret(char *c)
{
	char *d;

	r++;
	while( *c ) {
		printf("\n %c", *c);
		switch(o=1,*c++) {
		case 'C': Beep(261.626,200);         break;//C
		case 'D': Beep(293.665,200);         break;
		case 'E': Beep(329.628,200);         break;
		case 'F': Beep(349.228,200);         break;
		case 'G': Beep(391.995,200);         break;
		case 'A': Beep(440,100);         break;
		case 'b': Beep(246.942,200);         break;
		case 'a': Beep(220.000,200);         break;
		case 'g': Beep(195.998,200);         break;
		case 'f': Beep(174.614,200);         break;
		case 'e': Beep(164.814,200);         break;
		case 'd': Beep(146.832,200);         break;
		case 'c': Beep(146.832,200);         break;
		case '|': Sleep(100);	break;
		default: o=0;
		}
	}
	r--;
	
}

main(int argc,char *argv[])
{
	FILE *z;

	q=argc;
	printf("Benidi Ben Kreger\n================================\n");
	if(z=fopen(argv[1],"r")) {
		while( (b=getc(z))>0 )
			*s++=b;
		*s=0;
		interpret(f);
		printf("\n================================\n");
	}
}

