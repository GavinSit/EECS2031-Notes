int main() {
  /* Pointers and Addresses
  - Pointer: A pointer is a group of cells (often two or four) that can hold
  an address
  - A pointer is denoted by the * symbol and is used with a variable
  - e.g. int *x
  - so if c is a char and x points to it we have the following expression:
  p = &c
  - the operator & produces the address of the variable
  - e.g. &c; will produce the address of variable c
  */
  
  /* example 1 */
  int x = 1, y = 2, z[10];
  int *ip;	/* ip is a pointer to int */
  
  ip = &x;	/* ip points to x */
  y = *ip 	/* y = 1 */
  *ip = 0 	/* x = 0 */
  ip = &z[0]/* ip points to z[0] */
  
  /* example 2 */
  int x = 1; 
  int *ip;
  ip = &x;			/* pointer ip points to x */
  *ip = *ip + 10;	/* x is now 11 */
  
  /* example 3 */
  int x = 1;
  int *ip, *iq;
  ip = &x;
  iq = ip; 		/* iq now points at ip which points at x */
  
  
  /* Pointers and Function Arguments 
  - you cannot alter a  variable in a calling function (cannot perform a 
  swap with swap(a, b);)
  - you can however pass the pointers so that it can be swapped
  (swap(&a, &b);)
  */
  
  
  /* Pointers and Arrays */
  int a[10];
  int *pa;
  
  pa = &a[0];
  x = *pa; 		/* copies the content of a[0] to x */
  
  x = *(pa+1); 	/* copies the content of a[0+1] which is a[1] to x */
  
  
  /* Address Arithmetics
  - 
  - 
  */
  
  /* Character Pointers and Functions
  - 
   
  
  
  */
  
  

  return 0;
}



