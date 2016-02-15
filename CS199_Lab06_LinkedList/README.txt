Giovanni Rosati
OSU ID# 932510038
rosatig@oregonstate.edu

February 14, 2016
Lab 6 README
CS_199_400_W2016


The program can be compiled by typing “make all” in the directory containing the uncompressed files from the rosatig.zip archive and an executable file named “prog” will be created in the same directory. 

Make will look for and compile the following files:
lab6.cpp (to be provided by the class instructor)
node.hpp
nodeFunctions.hpp
nodeFunctions.cpp 


Type "make clean" to remove the prog file.

Three things I found difficult:
1) Troubleshooting an issue with assigning a pointer. My program compiled
but a pointer was being incorrectly assigned. It took me some time and help to
figure it out.
2) Passing node pointers using &. I need to review this as I am a unclear why
this was required.
3) Figuring how to get destroyList to work correctly when all list items had been deleted.

Three things I learned:
1) How to correctly assign pointers to prev and next in a Linked List
2) The difference between just typing "make" vs. "make all" or "make clean".
3) The basics of Structs