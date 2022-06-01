#include <string>
#include <utility>

class Animal
{
protected:
    std::string m_name;

    explicit Animal(std::string &name)
            : m_name(name)
    {
    }

public:
    [[maybe_unused]] std::string getName() { return m_name; }
};

class [[maybe_unused]] Cat: public Animal
{
public:
    [[maybe_unused]] explicit Cat(std::string& name)
            : Animal(name)
    {
    }

};

class [[maybe_unused]] Dog: public Animal
{
public:
    [[maybe_unused]] explicit Dog(std::string &name)
            : Animal(name)
    {
    }

};
class [[maybe_unused]] Bird: public Animal {
public:
    [[maybe_unused]] explicit Bird(std::string name)
            : Animal(name) {
    }
};
int main() {
    return 0;
}