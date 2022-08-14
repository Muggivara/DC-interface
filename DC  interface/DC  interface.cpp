#include <iostream>
#include <vector>


class Fly 
{
public:
    virtual void get_name() = 0;
    void Flying()
    {
       std::cout << "I'm Flying\n";
    }
};
class Cybernetics 
{
public:
    virtual void get_name() = 0;
    void cybernetics()
    {
        std::cout << "I'm Cyborg\n";
    }
};
class LaserVision
{
public:
    virtual void get_name() = 0;
    void laservision()
    {
        std::cout << "I have laser vision\n";
    }
};
class Change_shape
{
public:
    virtual void get_name() = 0;
    void marsianin()
    {
        std::cout << "I can change shape\n";
    }
};
class Ditanator 
{
public:
    virtual void get_name() = 0;
    void ditanator()
    {
        std::cout << "I am Batman\n";
    }
};

class Hero 
{
public:
    virtual void get_name() = 0;
    void hero()
    {
        std::cout << "I am hero\n";
    }
};
class Villain 
{
public:
    virtual void get_name() = 0;
    void villain()
    {
        std::cout << "I am villain\n";
    }
};
class Batman :  public Hero,public Ditanator
{
public:
     void get_name() override
    {
        std::cout << "I am Batman\n";
    }
};
class DarkSide :  public Villain, public Fly,public LaserVision
{
public:
     void get_name() override
    {
        std::cout << "I am DarkSide\n";
    }
};
class Marsianin :  public Hero, public Fly, public Change_shape
{
public:
     void get_name() override
    {
        std::cout << "I am Marsianin\n";
    }
};
class Cyborg : public Hero, public Fly, public Cybernetics
{
public:
     void get_name() override
    {
        std::cout << "I am Cyborg\n";
    }
};

int main()
{


    std::vector<Fly*> Subject;

    Subject.push_back(new DarkSide);
    Subject.push_back(new Marsianin);
    Subject.push_back(new Cyborg);

    for (auto& i:Subject)
    {
        i->get_name();
        i->Flying();
        std::cout << "\n\n";
    }
   std:: vector<Hero*>Heroes;
   Heroes.push_back(new Batman);
   Heroes.push_back(new Marsianin);
   Heroes.push_back(new Cyborg);
   for (auto& i : Heroes) {
       i->get_name();
       i->hero();
      std::cout << "\n\n";
   }
   std::vector<Villain*>Villains;
   Villains.push_back(new DarkSide);
   for (auto& i : Villains) {
       i->get_name();
       i->villain();
       std::cout << "\n\n";
   }

}

