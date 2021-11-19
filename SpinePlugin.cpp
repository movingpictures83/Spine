#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "SpinePlugin.h"

void SpinePlugin::input(std::string file) {
 inputfile = file;
}

void SpinePlugin::run() {
   
}

void SpinePlugin::output(std::string file) {
	std::string command;
	//spine.pl -f genome_files.txt
   command = "spine.pl ";
   command += " -f "+inputfile;
   command += " -o "+file;
 std::cout << command << std::endl;

 system(command.c_str());
}

PluginProxy<SpinePlugin> SpinePluginProxy = PluginProxy<SpinePlugin>("Spine", PluginManager::getInstance());
