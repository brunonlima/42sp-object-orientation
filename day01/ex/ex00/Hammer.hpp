#ifndef HAMMER_HPP
#define HAMMER_HPP

#include "Tool.hpp" 

class Hammer : public Tool {
public:
    

    Hammer() ;
    ~Hammer(); 

    void use();

    int getNumberOfUses() const;

    bool isBusy();

    void setBusy(bool busy);

    void setWorker(Worker* worker);

    Worker* getWorker();

    void setName(std::string name);

    std::string getName() const;

private:
    int numberOfUses;
    bool busy;
    std::string name;
    void setNumberOfUses(int uses);

};


#endif
