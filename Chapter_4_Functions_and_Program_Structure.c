int main (){
	/*Header file
	- Used to centralize the function used in different files
	- contains the functions defined
	*/
	
	
	/*Static Variables
	- makes the variable only accessible in that file; not accessible in other
	files
	- e.g. static count int;
	- functions can also be made static so that it is local to that file*/
	
	/*Register Variables
	- tells the compiler that the variable will be used alot
	- places the variable in th e machine register which will result in a
	small and faster program
	- compilers may ignore this advice
	- e.g. register int x;
	
	/* File Inclusion
	- the following syntax is used to link other files to the current c file
	- #include "filename"
	*/
	
	/*Macro Substitution
	- can replace text with a word
	- #define name replacement_text
	- #define forever for(;;)
	*/	
	return 0;
}