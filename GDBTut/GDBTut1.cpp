#include <iostream>

void fun3()
{
    int fun3Variable = 25;
    std::cout << fun3Variable << std::endl;
}

void fun2()
{
    int fun2Variable = 20;
    std::cout << fun2Variable << std::endl;
    fun3();
}

void fun1()
{
    int fun1Variable = 15;
    std::cout << fun1Variable << std::endl;
    fun2();
}

int main()
{
    int mainVariable = 10;
    std::cout <<mainVariable<< std::endl;
    fun1();
    return 0;
}

// gdb commands list    
// gdb executable_name
// b - break name_of_function
// r - run
// n - next
// s - step into    
// c - continue
// p - print variable_name
// f - show frame
// l - list (shows the code around the current line)
// backtrace - shows the call stack
// q - quit
// info locals - shows the local variables
// info args - shows the arguments
// info frame - shows the current frame
// info breakpoints - shows the breakpoints
// disable breakpoint_number - disables the breakpoint
