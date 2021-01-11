#ifndef DEBUGGER_H
#define DEBUGGER_H

#include <string>
#include <map>

using namespace std;

class Debugger
{
public:
  static const string color_red;
  static const string color_green;
  static const string color_blue;
  static const string color_reset;
  static std::map <char, const string> colors;
  bool active;
  string msg;
  Debugger(bool debugger_on): active(debugger_on){}
  void quick_out(string message, char color);
  void set_out(string message);
  string get_out(char color);
};

#endif
