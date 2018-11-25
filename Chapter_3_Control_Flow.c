int main(){
	/*The ';;' creates an infinite loop*/
	for (;;){ 
		/*code block here */
	}
	
	
	/*Break 
	Used to exit if and case statements as well as loops*/
	
	
	/*Goto and Labels 
	- goto can be used to exit to somewhere else if there are multiple loops
	as break only exits the innermost loop
	*/
	if (1 == 1){
		goto errormessage;
	}
	
	printf("Skips this message and jumps to error message.\n");
	
	errormessage:
		printf("show this error message");
	
	return 0;
}