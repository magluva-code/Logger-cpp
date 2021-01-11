#include <iostream>
#include "Logger.h"

const string Logger::color_red = "\x1b[31m";
const string Logger::color_green = "\x1b[32m";
const string Logger::color_blue = "\x1b[34m";
const string Logger::color_reset = "\x1b[0m";
map <char, const string> Logger::colors = {{'r', color_red}, {'g', color_green}, {'b', color_blue}};

void Logger::quick_out(string message, char color)
{
  if (active)
  {
    msg = message;
    std::cout << colors[color] << msg << color_reset << std::endl;
  }
}

void Logger::set_out(string message)
{
  msg = message;
}

string Logger::get_out(char color)
{
  return colors[color] + msg + color_reset;
}
