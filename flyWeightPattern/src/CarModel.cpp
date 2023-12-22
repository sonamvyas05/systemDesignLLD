#include<iostream>
#include <unordered_map>
#include<string>

//Intrinsic state shared among multiple objects

class CarModel {
    public:
    CarModel(const std::string& model) : model_(model){}

    const std:: string& getModel() const{
        return model_;
    }

    private:
      std::string model_;
};

class CarLocation {
    public:
    CarLocation(int x,int y) : x(x),y(y){}

    int getX() const{
        return x;
    }

    int getY() const{
        return y;
    }

    private:
    int x;
    int y;
};

class Car{
    public:
    Car(const CarModel& model, const CarLocation& location) : model(model),location(location) {}

    void display() const{
        std::cout<< "carMode is "<< model.getModel() << " car location: "<< location.getX() <<" , "<<location.getY()<<std::endl;

    }
    private:
    CarModel model;
    CarLocation location;
};

// flyweight factory manging shared CarModel instances
class CarModelFactory {
    public:
    const CarModel& getCarModel(const std::string& model){
        auto it = carModels.find(model);
        if (it == carModels.end()) {
            auto newModel = CarModel("SUV");
            carModels[model] = newModel;
            return carModels[model];
        } else {
            return it->second;
        }
    };
    private:
    std::unordered_map<std::string,CarModel> carModels;
};


int main(){
    CarModelFactory carModelFactory;
    Car car1(carModelFactory.getCarModel("Sedan"), CarLocation(10, 20));
    Car car2(carModelFactory.getCarModel("SUV"), CarLocation(30, 40));
    Car car3(carModelFactory.getCarModel("Hatchback"), CarLocation(50, 60));

    car1.display();
    car2.display();
    car3.display();
    return 0;

}

