# dps-lab-1
Laboratory 1
-----------------------------------------------------------------------------------------------------------------------------
**This file contais the answers of the questions asked on the task.**

**In the source code can be find some comments that answer or complete some answers to those questions mentioned above**


	Steps to execute this code:
		Suposing to be it the route ~/laboratory1-aibans02
		1. CMake. This will generate all files needed (CMake tool installed its needed)
			$ cmake ../laboratory1-aibans02/
		2. Make. This will compile the code and return and executable file called 'P3'
			$ make
		3. Execute the code
			$ ./P3

------------------------------------------------------------------------------------------------------------------------------
    1. Enumerate those Rules and Recommendation associated that are broken in the previous source code file.

		STR30-C: Do not attempt to modify String literals.
		STR36-C - STR11-C: Do not specify the bound of a character array initialized with a string literal.
		MSC34-C: Do not use deprecated or obsolescent functions.
		STR31-C: Guarantee that storage for strings has sufficient space for character data and the null terminator.


    2. Fix any kind of error or mistake. Add a comment explaining your approach for solving it.
	
		exampleStrings.c:32:16: warning: ‘return’ with a value, in function returning void
         		return 1;
		Sol: As a void function, it must be 'return;'

		exampleStrings.c:51:2: warning: implicit declaration of function ‘gets’; did you mean ‘fgets’? [-Wimplicit-function-declaration]
  			gets(response);
		Sol: gets it's an unsafe function, substituted by 'fgets(response, sizeof(response), stdin)'

		exampleStrings.c:73:10: warning: unused variable ‘analitic3’ [-Wunused-variable]
     			char analitic3[100]="аналитик";
          		^~~~~~~~~
		Sol: Unused variable, so it's deleted

		exampleStrings.c:69:9: warning: unused variable ‘size_array2’ [-Wunused-variable]
     			int size_array2 = 100;
        		^~~~~~~~~~~
		Sol: Unused variable, so it's deleted

		exampleStrings.c:68:9: warning: unused variable ‘size_array1’ [-Wunused-variable]
     			int size_array1 = strlen("аналитик");
         		^~~~~~~~~~~
		Sol: Unused variable, so it's deleted

		/tmp/ccs4TTrU.o: En la función `get_y_or_n':
		exampleStrings.c:(.text+0xd8): aviso: the `gets' function is dangerous and should not be used.
		Sol: Solved as below, it's the same warning

    3. Compile the file using a software tool for managing the build process using a compiler-independent method (Cmake, scons, etc)
        Adapt the process for using different compilation tools and parameters (gcc vs g++), -Wall, standards (-std=c99 and -std=c11) ...
        Compare between different two standards

	There are several variants. You should choose at least two.
	At the end the source code  should compile without warnings to the variant selected (you can remove/change instructions).
