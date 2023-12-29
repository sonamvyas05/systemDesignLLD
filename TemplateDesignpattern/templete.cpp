#include <iostream>
class HotBeverage {
    public:
     void prepareBeverage() {
        boilWater();
        brew();
        pourInCup();
        addCondiments();
    }
    virtual void brew() = 0;
    virtual void addCondiments() = 0;

    void boilWater(){
        std::cout<<"Boiling Water"<<std::endl;
    }

    void pourInCup()
    {
        std::cout<<"pouring into cup"<<std::endl;
    }
};

// ConcreteClass (Tea)
class Tea : public HotBeverage {
public:
    void brew()  {
        std::cout << "Steeping the tea" << std::endl;
    }

    void addCondiments() {
        std::cout << "Adding lemon" << std::endl;
    }
};

// ConcreteClass (Coffee)
class Coffee : public HotBeverage {
public:
    void brew() {
        std::cout << "Dripping coffee through filter" << std::endl;
    }

    void addCondiments() {
        std::cout << "Adding sugar and milk" << std::endl;
    }
};

int main()
{
    Tea tea;
    Coffee coffee;
    //calling template method
    std::cout << "Making tea:" << std::endl;
    tea.prepareBeverage();

    std::cout << "\nMaking coffee:" << std::endl;
    coffee.prepareBeverage();

    return 0;

}
