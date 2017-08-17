#pragma once
#include <string>
#include <iostream>
using namespace std;

string(&func())[10];

typedef string abc[10];
typedef abc &abcd;
abcd func();

auto func()->string(&)[10];

string series[10];
decltype(series) &func();