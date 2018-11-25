#include <stdio.h> /*includes information about standard library*/

/*define is used as a symbolic name for to represent numbers*/
/*it's use is showed in the first for loop*/
#define LOWER 0
#define UPPER 300
#define STEP 20

/*used for counting words*/
#define IN 1
#define OUT 0

/*counting characters*/
#define MAXLINE 1000 /* set the max character length */

/*power function calling*/
int power(int m, int n);

/* counting characters */
int getline(char line[] , char from[])
void copy(char to[], char from[]);

int main() 
{
	printf("hello world\n"); /*C never creates new lines automatically*/

	
	/*creating a temperature conversion table*/	
	float fahr, celsius; /*declaring variables*/
	int lower, upper, step
	
	lower = 0; 
	upper = 300;
	step = 20;
	
	fahr = lower
	
	while(fahr <= upper) {
		celsius = 5.0*(fahr-32.0)/9.0;
		printf("%3.0f\t%6.1f\n", fahr, celsius); /*%d specifies int, \t is a space, \n is new line*/
		/*
		%d 		prints as a decimal integer
		%6d 	prints as decimal integer, at least 6 characters wide
		%f 		prints as a floating point
		%6f 	prints as a floating point, at least 6 characters wide
		%.2f 	prints as floating point, 2 characters after decimal
		%6.2f 	prints as a floating point, at least 6 wide and 2 after decimal
		%o 		prints as octal
		%x 		prints as hexadecimal
		%c 		prints as characters
		%s 		prints as string
		%%		prints %
		*/
	}
	
	
	/*another way to write the above is with a for statement*/
	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
		printf("%3d%6.1f\n",fahr,(5.0/9.0)*(fahr-32));
	
	
	/*reading and writing characters*/
	int c; 
	
	c = getchar();
	while(c != EOF){ /*EOF = end of file*/
		putchar(c);
		c = getchar();
	}
	
	
	/*another way to write code for reading and writing characters */
	while ((c = getchar()) != EOF){
		putchar(c);
	}
	
	
	/*counting words and lines in a program*/
	int countLines, numberOfLines, numberOfWords, numberOfCharacters, state;
	
	state = OUT;
	countLines = numberOfLines = numberOfWords = numberOfCharacters = state = 0;
	while ((countLines = getchar() != EOF) {
		++numberofCharacters; /*adds one to the countLines*/
		
		if (contLines == '\n')
			++numberOfLines;
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT) {
			state = IN;
			++numberOfWords;
		}
	}
	printf("%d %d %d\n", numberofLines, numberOfWords, numberOfCharacters);
	
	
	/*Arrays*/
	/*count digits, white space, others*/
	int c, i, nwhiite, nother;
	int ndigit[10];
	nwhite = nother = 0;
	for (i = 0; i < 10; ++i)  /*setting all elements in array to 0*/
		ndigit[i] = 0;
	
	while ((c = getchar()) != EOF)
		if (c >= '0' && c <= '9')
			++ndigit[c-'0']; /* c-'0' : this means a character that is */
		else if (c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else 
			++nother;
		
		
		printf("digits =");
		for (i = 0; i < 10; ++i)
			printf(" %d", ndigit[i]);
		printf(", white space = %d, other = %d \n", nwhite, nother);
		
		
	/*functions*/
	/*called function at the top*/
	int i; 
	
	for (i = 0; i < 10; ++i)
		printf(\" %d %d %d \n", i, power(2,i), power(-3,i));
	return 0;
	
	
	/*find the longest line of input*/
	int len; /*current line length */
	int max; /*max length seen so far */
	char line[MAXLINE]; /* current input line*/
	char longest[MAXLINE]; /* longest line saved here*/
	
	max = 0;
	while ((len = getline(line, MAXLINE)) > 0)
		if (len > max) {
			max  = len; /* new length number as max */
			copy(longest, line);
		}
	if (max > 0) /* meaning there was a line*/
		printf("%s", longest);
	return 0;
	
}

/*function that raises the base to the n-th power*/
int power(int base, int n) {
	int i, p;
	p = 1;
	for (i = 0; i <= n; ++i)
		p = p *base;
	return p;	
}

/* function that reads a line into s, returns length getline*/
int getline(char s[], int lim) {
	int c, i;
	
	/* gets the characters user inputs */
	for (i = 0; i < lim-1; &&(c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c; 
	
	/* end if c is \n but still add one to counter */
	if (c == '\n'){ 
		s[i] = c;
		++ i;
	}
	s[i] = '\0'; /* \0 is the null character */
	return i;
}

/* copy 'from' into 'to' and assume it is big enough*/
void copy(char to[], char from[]) {
	int i;
	
	i = 0;
	while ((to[i] = from[i] != \0')
		++i;
}