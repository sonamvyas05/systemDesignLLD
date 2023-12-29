#include<iostream>
//Handler interface
class Approver{
    public:
       virtual void processRequest(int amount) =0;
       //virtual ~Approver() {}
};

//concrete handler
class Manager : public Approver{
    public:
      void processRequest(int amount) {
        if(amount <= 1000)
        {
            std::cout<<"Manager approves the request "<<std::endl;
        }
        else if(successor != NULL)
        {
            successor->processRequest(amount);
        }
      }
     void setSuccessor(Approver* next)
     {
        successor = next;
     }
    private:
    Approver* successor = NULL;
};

class Director : public Approver {
public:
    void processRequest(int amount) override {
        if (amount <= 5000) {
            std::cout << "Director approves the request." << std::endl;
        } else if (successor != nullptr) {
            successor->processRequest(amount);
        }
    }

    void setSuccessor(Approver* next) {
        successor = next;
    }

private:
    Approver* successor = nullptr;
};

//client code
int main() {
    Manager manager;
    Director director;
    //setting next Successor
    manager.setSuccessor(&director); 
    //process request
    manager.processRequest(800);
    manager.processRequest(3500);
    manager.processRequest(10000);

}

