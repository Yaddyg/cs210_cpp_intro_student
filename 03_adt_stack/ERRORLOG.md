## First error, 10:22 PM Sep 13


// ===================[ Build | 03_adt_stack | Debug ]============================
/Applications/CLion.app/Contents/bin/cmake/mac/x64/bin/cmake --build /Users/yadgalaly/CLionProjects/CS210CPPRepo/cmake-build-debug --target 03_adt_stack -- -j 10
[ 66%] Building CXX object CMakeFiles/03_adt_stack.dir/03_adt_stack/main.cpp.o
[ 66%] Building CXX object CMakeFiles/03_adt_stack.dir/03_adt_stack/Stack.cpp.o
/Users/yadgalaly/CLionProjects/CS210CPPRepo/03_adt_stack/main.cpp:18:31: error: no member named 'top' in 'Stack'; did you mean 'pop'?
18 |     std::cout << "Top: " << s.top() << std::endl;
|                               ^~~
|                               pop
/Users/yadgalaly/CLionProjects/CS210CPPRepo/03_adt_stack/Stack.h:20:9: note: 'pop' declared here
20 |     int pop();
|         ^
/Users/yadgalaly/CLionProjects/CS210CPPRepo/03_adt_stack/main.cpp:21:42: error: no member named 'top' in 'Stack'; did you mean 'pop'?
21 |     std::cout << "After pop, top: " << s.top() << std::endl;
|                                          ^~~
|                                          pop
/Users/yadgalaly/CLionProjects/CS210CPPRepo/03_adt_stack/Stack.h:20:9: note: 'pop' declared here
20 |     int pop();
|         ^
2 errors generated.
make[3]: *** [CMakeFiles/03_adt_stack.dir/03_adt_stack/main.cpp.o] Error 1
make[3]: *** Waiting for unfinished jobs....
make[2]: *** [CMakeFiles/03_adt_stack.dir/all] Error 2
make[1]: *** [CMakeFiles/03_adt_stack.dir/rule] Error 2
make: *** [03_adt_stack] Error 2
//

//error caused when testing first implementation of .cpp file, it appears main had the wrong line instad of peek it was top, replaced top with peek//







## Second error 
similar time to my first error


this is not a runtime error however, my pop function,



    int value = data[topIndex] = -1;
    topIndex--;
    return value;


is returning -1 when checking what value was popped instead of showing that value. 
Fixed it by changing int value = data[topIndex] = -1; to just int value = data[topIndex];
//

