#include <iostream>
#include <list>

class IsSubscribe {
public:
    virtual void notify(std::string msg) = 0;
    virtual ~IsSubscribe() {}  
};

class User : public IsSubscribe {
private:
    int userId;

public:
    User(int userId) : userId(userId) {}

    void notify(std::string msg) override {
        std::cout << userId << " received msg: " << msg << std::endl;
    }
};

class Group {
private:
    std::list<IsSubscribe*> users;

public:
    void subscribe(IsSubscribe* user) {
        users.push_back(user);
    }

    void unsubscribe(IsSubscribe* user) {
        users.remove(user);
    }

    void notify(std::string msg) {
        for (auto user : users) {
            user->notify(msg);
        }
    }
};

int main() {
    Group* group = new Group;
    User* user1 = new User(1);
    User* user2 = new User(2);
    User* user3 = new User(3);

    group->subscribe(user1);
    group->subscribe(user2);
    group->subscribe(user3);

    group->notify("New message");

    group->unsubscribe(user1);
    group->notify("Message after unsubscribe");

 
    delete group;
    delete user1;
    delete user2;
    delete user3;

    return 0;
}



