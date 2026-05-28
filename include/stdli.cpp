/*
    stdli - Simple Standard Linux Interface
    Copyright (c) 2026 OgnjenDev

    stdli is a lightweight C++ library designed to make
    Linux CLI application development easier and faster.

    This software is provided "as-is", without any warranty.
    Permission is granted to use, modify, and distribute this
    software for personal and commercial projects.

    Created by OgnjenDev
*/

#include <iostream>
#include "stdli.hpp"
#include "unistd.h"

using namespace std;


void black() {
    std::cout << "\033[30m";
}

void red() {
    std::cout << "\033[31m";
}

void green() {
    std::cout << "\033[32m";
}

void yellow() {
    std::cout << "\033[33m";
}

void blue() {
    std::cout << "\033[34m";
}

void magenta() {
    std::cout << "\033[35m";
}

void cyan() {
    std::cout << "\033[36m";
}

void white() {
    std::cout << "\033[37m";
}

void brightBlack() {
    std::cout << "\033[90m";
}

void brightRed() {
    std::cout << "\033[91m";
}

void brightGreen() {
    std::cout << "\033[92m";
}

void brightYellow() {
    std::cout << "\033[93m";
}

void brightBlue() {
    std::cout << "\033[94m";
}

void brightMagenta() {
    std::cout << "\033[95m";
}

void brightCyan() {
    std::cout << "\033[96m";
}

void brightWhite() {
    std::cout << "\033[97m";
}

void reset() {
    std::cout << "\033[0m";
}

void println(string input) {
    cout << input << endl;
}

void wait(int time) {
    sleep(time);
}

void input(const std::string& text, std::string& value) {
    std::cout << text;
    std::getline(std::cin, value);
}

void clear_screen() {
    system("clear");
}

void title(string t) {
    cout << "=======================================" << endl;
    cout << "                " << t << endl;
    cout << "=======================================" << endl;
}


void exit() {
    return;
}