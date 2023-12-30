#include <iostream>
#include <string>
#include <vector>

class Colleague;
//mediator interface
class Mediator {
    public:
      virtual void sendMessage(const std::string& message, Colleague* colleague) =0;
};
//Colleague interface
class Colleague {
    protected:
      Mediator* mediator;

    public:
      Colleague(Mediator* mediator) :mediator(mediator) {}
      virtual void sendMessage(const std::string& message) = 0;
      virtual void receiveMessage(const std::string& message) = 0;

};

//concrete Mediator
class ConcreteMediator : public Mediator{
    private:
      std::vector<Colleague*> colleagues;

    public:
      void addColleague(Colleague* colleague)
      {
        colleagues.push_back(colleague);
      }

      void sendMessage(const std::string& message, Colleague* sender)
      {
        for(Colleague* colleague : colleagues)
        {
            if(colleague != sender)
            {
                colleague->receiveMessage(message);
            }
        }
      }
};

// Concrete Colleague
class ConcreteColleague : public Colleague {
public:
    ConcreteColleague(Mediator* mediator) : Colleague(mediator) {}

    void sendMessage(const std::string& message) {
        std::cout << "Colleague sends message: " << message << std::endl;
        mediator->sendMessage(message, this);
    }

    void receiveMessage(const std::string& message) {
        std::cout << "Colleague receives message: " << message << std::endl;
    }
};

int main() {
    ConcreteMediator mediator;

    ConcreteColleague colleague1(&mediator);
    ConcreteColleague colleague2(&mediator);

    mediator.addColleague(&colleague1);
    mediator.addColleague(&colleague2);

    colleague1.sendMessage("Hello from Colleague 1!");
    colleague2.sendMessage("Hi from Colleague 2!");

    return 0;
}

