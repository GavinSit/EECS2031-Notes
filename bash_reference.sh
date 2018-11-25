#! /bin/bash

<<MULTILINECOMMENT
	- # will comment 
	- #! /bin/bash needs to be included in the beginning of every file to make it
	executable where bin/bash is where the bash interpreter is
	- to find where that is type the following: which bash
	
	What is Bash
	- bash scripts tell th ecomputers what it should say or do
	- a bash script is a file that contains a series of commands
	- anything run on command line can be run in bash
	- to execute run bash file type ./ and then file name
		- e.g. ./bash_reference.sh
	- chmod 755 scrip_name.sh will make the script runnable if permission 
	denied
	- 
MULTILINECOMMENT

#write a simple Hello world output
echo Hello World

#String variable with output
STRING="Hello World"
#note that it wont work if you have spaces between the = sign
echo $STRING

#Global vs Local Variable
#THis is global
VAR="global var"
function bash {
	#this var is local only in bash function
	local VAR="local var"
	echo $VAR 
	#will print "local var"
}
echo $VAR 
#will print "global var"

#Passing arguments to bash script
echo $1 $2 $3
#the numbers represent the argument number
#if i run this file with the following:
# ./bash_reference.sh one two three 
# the above command will display the following:
#one two three

#Reading User Input
echo -e "Hi, please type the word: \c " 
#the -e gets the word same line, otherwise gets it on new line 
read  word #stores read thing in word
echo "The word you entered is: $word"
echo -e "Can you please enter two words? "
read word1 word2
echo "Here is your input: \"$word1\" \"$word2\""
echo -e "How do you feel about bash scripting? "
read 
# read command now stores a reply into the default build-in variable $REPLY
echo "You said $REPLY, I'm glad to hear that! "
echo -e "What are your favorite colours? "
read -a colours # -a makes read command to read into an array
echo "My favorite colours are also ${colours[0]}, ${colours[1]} and 
${colours[2]}:-)" 

#Array
#Declare array with 4 elements
ARRAY=( 'Debian Linux' 'Redhat Linux' Ubuntu Linux ) 
ELEMENTS=${#ARRAY[@]} # get number of elements in the array

# echo each element in array 
# for loop that prints every element
for (( i=0;i<$ELEMENTS;i++)); do
    echo ${ARRAY[${i}]}
done 

#If Statement
var="yes"
#note that the statement wont run if there is not spacing in the brackets
if [ var = no ]; then
	echo "this wont run because var doesnt equal no"
elif [ var = yes ]; then 
	echo "this runs"
else 
	echo "output this if first two dont run"
fi

<<Bash_Arimetic_Comparisons
	-lt is <
	-gt is >
	-le	is <=
	-ge is >=
	-eq is ==
	-ne is !=
Bash_Arimetic_Comparisons

<<Bash_String_Comparison
	= is equal
	!= is not equal
	< is less than 
	> is greater than
	-n s1 is string s1 is not empty
	-z s1 is string s1 is empty
Bash_String_Comparison

<<Bash_File_Testing
	-b filename	Block special file
	-c filename	Special character file
	-d directoryname	Check for directory existence
	-e filename	Check for file existence
	-f filename	Check for regular file existence not a directory
	-G filename	Check if file exists and is owned by effective group ID.
	-g filename	true if file exists and is set-group-id.
	-k filename	Sticky bit
	-L filename	Symbolic link
	-O filename	True if file exists and is owned by the effective user id.
	-r filename	Check if file is a readable
	-S filename	Check if file is socket
	-s filename	Check if file is nonzero size
	-u filename	Check if file set-ser-id bit is set
	-w filename	Check if file is writable
	-x filename	Check if file is executable
Bash_File_Testing

#For Loop
#the following lists all directories under var
#a different directory if any is stored in f during each iteration of 
#for loop
for f in $( ls /var/ ); do
	echo $f
done 

for (( i=0;i<5;i++)); do #prints i from 0 - 4
    echo $i
done 

#While Loop
COUNT=6
while [ $COUNT -gt 0 ]; do #prints value of COUNT while greater than 0
	echo Value of count is: $COUNT
	let COUNT=COUNT-1 #decrements COUNT by 1 each iteration of loop
done 

#Until Loop
#runs until true
COUNT=0
until [ $COUNT -gt 5 ]; do
        echo Value of count is: $COUNT
        let COUNT=COUNT+1
done 
#prints 1-5 out doesnt print 6 because at the 5th loop, count ++, so 
#becomes 6 which is greater than 5 and stops there

#Functions
function fun_A {
	echo "function is fun"
}

function fun_B {
	echo $1
}
fun_A #this prints "function is fun"
fun_B "i like cows" #this prints "i like cows"

#Scripts in Scripts
#you can execute other scripts while the current script is running the same 
#way you execute the first script

#/bin/bash
echo "script a"
./b.sh #this executes the script b.sh

#Using the GPIO Pins
gpio mode 1 out #sets pin 1 to output
gpio write 1 1 #writes pin 1 to high (turns on led if connected to led)
sleep 1s
gpio write 1 0 #writes pin 1 to low (turns off led if connected to led)

gpio mode 2 in #sets pin 2 to input
gpio read 1 #reads what the value of pin 1, if off, will be 0, if on, 1
gpio mode 2 up #sets the input mode of the specified pin to be wired to
a pullup resistor

#Sleep
sleep 5s #sleeps for 5 second



