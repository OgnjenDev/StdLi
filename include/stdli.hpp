#ifndef STDLI_HPP
#define STDLI_HPP

#include <iostream>
#include <string>
#include <unistd.h>

using namespace std;

class Log {
public:
    void info(string input);
    void warn(string input);
    void error(string input);
    void success(string input);
};

void black();
void red();
void green();
void yellow();
void blue();
void magenta();
void cyan();
void white();

void brightBlack();
void brightRed();
void brightGreen();
void brightYellow();
void brightBlue();
void brightMagenta();
void brightCyan();
void brightWhite();

void reset();

void println(string input);

void wait(int time);

void input(const string& text, string& value);

void clear_screen();
void title(string t);


void exit();

#endif