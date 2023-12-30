#include<iostream>
//command Interface
class Command{
    public:
      virtual void execute() = 0;

};
//command concrete
class LightOnCommand : public Command{
    public:
      LightOnCommand() {};
      void execute(){
        std::cout<<"Light Is On"<<std::endl;
      }
};

class LightOffCommand : public Command {
    public:
    LightOffCommand() {}
    void execute() {
        std::cout<<"Light is OFF"<<std::endl;
    }
};

//Invoker
class RemoteControl{
    private:
    Command* command;
    public:
    void setCommand(Command* cmd)
    {
        command = cmd;
    }
    void pressButton(){
        command->execute();
    }
};

// Client
int main() {
    // Receiver
    LightOnCommand lightOn;
    LightOffCommand lightOff;

    // Invoker
    RemoteControl remote;

    // Setting commands
    remote.setCommand(&lightOn);
    remote.pressButton(); // Turns light ON

    remote.setCommand(&lightOff);
    remote.pressButton(); // Turns light OFF

    return 0;
}