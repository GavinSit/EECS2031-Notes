int main(){
	/*
	- A structure is a collection of one or more variables, possibly of
	different types grouped together under a single name for convenient
	handling
	- They help organize complicated data, particularly in large programs,
	because they permit a group of related variables to be treated as a unit
	instead of separate entities
	- Example: a payroll record
		- an employee is described by name, address, SIN, etc.
		- some of these elements can turn into structures like address has 
		several parts including house number, street, city, postal code, etc
	*/
	
	/* Basics of Structures
	- if there are two points on a graph denoted x and y, it can be represented
	as follows:
	*/
	struct point {
		int x; 
		int y;
	};
	/*
	- the keyword struct introduces a structure declaration
	- the variables in the structure are called members
		- in this case, the members are x and y
	- A struct can be tagged as follows to be used later
	*/
	struct point pt;
	/*
	- A struct can be initialized the following way too
	*/
	struct point maxpt = {320, 200};
	/*
	- a member of the structure can be calling by writing the structure
	name point member
		- structure-name.member
	*/
	printf("%d, %d", pt.x, pt.y);
	/*
	- structures can be nested
	- if lets say we draw a rectangle on a grid and label pt1 as bottom
	left corner and pt2 as top right point, we can do as follows:
	*/
	struct point pt1 = {0, 0};
	struct point pt2 = {3, 2};

	struct rect {
		struct point pt1;
		struct point pt2;
	};

	struct rect screen;
	
	printf("Bottom left point: %d, %d", screen.pt1.x, screen.pt1.y);
	
	
	/* Structures and Functions
	- there are three ways to use structures with functions
		- pass components separately
		- pass entire structure
		- pass a pointer
	- Here is an example of a function called makepoint that takes two
	integers and returns a point structure
	*/
	struct point makepoint(int x, int y){
		struct point temp;
		temp.x = x;
		temp.y = y;
		return temp;
	}
	/*
	- makepoint can now be used to initialize any structure or to provide
	structure argument to a functions
	*/
	struct rect screen; //was declared earlier, stores two points
	struct point middle; //stores point
	struct point makepoint(int, int); //declare makepoint; takes two int
									  //returns point
	
	screen.pt1 = makepoint(0, 0); //sets pt1 to origin using makepoint
	screen.pt2 = makepoint(MAX_X, MAX_y);
	middle = makepoint((screen.pt1.x + screen.pt2.x)/2, 
					   (screen.pt2.y + screen.pt2.y)/2);
					   //gets the midpoint and passes it through makepoint
	/*
	- if a large structure is to be passed to a function, it is generally
	more efficient to pass a pointer than to copy the whole structure
	- structure pointers are just like pointers to regular variables
	*/
	struct point origin, *pp;
	pp = &origin;
	printf("origin is (%d, %d)\n", (*pp).x, (*pp).y);
	/*
	- The brackets are necessary because the operator . is higher than *
	- Another way to write the above is as follows:
	*/
	printf("origin is (%d, %d)\n", pp->x, pp->y);
	

	
	
	
	return 0;
}