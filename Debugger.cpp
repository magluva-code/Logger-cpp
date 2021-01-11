#include <iostream>
#include "Debugger.h"

using namespace std;

const string Debugger::color_red = "\x1b[31m";
const string Debugger::color_green = "\x1b[32m";
const string Debugger::color_blue = "\x1b[34m";
const string Debugger::color_reset = "\x1b[0m";
map <char, const string> Debugger::colors = {{'r', color_red}, {'g', color_green}, {'b', color_blue}};

void Debugger::quick_out(string message, char color)
{
  if (active)
  {
    msg = message;
    std::cout << colors[color] << msg << colors[color] << color_reset << std::endl;
  }
}

void Debugger::set_out(string message)
{
  msg = message;
}

string Debugger::get_out(char color)
{
  return colors[color] + msg + color_reset;
}
