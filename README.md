# STDLI

stdli (Simple Standard Linux Interface) is a lightweight C++ library designed to make creating CLI applications easier, faster, and cleaner.

Built for developers who want simple terminal utilities without unnecessary complexity.

Features
Easy printing utilities
Terminal colors
Logging system
Input handling
Screen clearing
Titles and formatting
Sleep/wait utilities
Lightweight and fast
Header-only support

Example :
``` C++
#include "include/stdli.cpp"

int main() {
    println("Hello World");
}
```
Usage for input :

``` C++
#include "include/stdli.cpp"

int main() {
    std::string name;
    input("Enter you name", name");
    println("Hello " + name);
}
```
