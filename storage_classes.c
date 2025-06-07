/*
Storage classes in c :Storage classes define the scope and the lifetime of a function


                   Memory       Default_Value           Scope        Life 
1}auto -            RAM             Garbage             Local       till the block is active
2}static -          RAM                 0               Local       till the end of the program
3}extern -          RAM                 0               Global      till the end of the program
4}register -        Register           Garbage          Local       till the block is active

*Global : Can be acessed from anywhere in the program
*Local : Can only be acessed from the block where it is declared 


Default Storage Class : Auto (if not mentioned also)

*/

#include <stdio.h>
void addc(){
    printf("hello addc");
}

