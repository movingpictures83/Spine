#ifndef SPINEPLUGIN_H
#define SPINEPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>
#include <vector>

class SpinePlugin : public Plugin
{
public: 
 std::string toString() {return "Spine";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
