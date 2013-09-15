CStrSwitch
==========

####Optimiser for static C string switches in C/C++####

***
**css-gen.c**: the switch generator (it can also generate std::map and strcmp test cases)  
Usage: css-gen \<NAME\> [--tests] [--prefix \<STRING\>] [--no-fix] --\<strings \<STRING\>...|random \<count\> [CHARLIST] [LENMIN] [LENMAX]\>

**css-test.cpp**: loops each test case trying to match each string argument  
Usage: css-test \<LOOPCOUNT\> \<STRING\>...

**run.sh**: basic script running multiple tests
just change clang++ to g++ to run on linux or mingw
or maybe even define some variables to make it better
I just wanted to see some results

**css-gen/css-test**: executables compiled using run.sh  
**CStrSwitch.h**: generated header file with the enum and the switch  
**CStrSwitch_test.h**: generated header file with the test case functions for std::map and strcmp  
**results.txt**: output of run.sh  
**results.pdf**: bar graph of the results.txt for easier comparison  
***