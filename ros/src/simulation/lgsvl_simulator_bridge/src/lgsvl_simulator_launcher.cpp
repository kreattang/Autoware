#include <lgsvl_simulator_bridge/lgsvl_simulator_launcher.h>

lgsvl_simulator_launcher::lgsvl_simulator_launcher(){
    std::string package_path = ros::package::getPath("lgsvl_simulator_bridge");
    exec_path_ = package_path + "/bin/auto-simulator-linux64-474";
}

lgsvl_simulator_launcher::~lgsvl_simulator_launcher(){

}

void lgsvl_simulator_launcher::launch(){
    std::string cmd = "cd " + exec_path_ + " && ./simulator";
    system(cmd.c_str());
    return;
}