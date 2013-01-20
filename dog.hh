
#ifndef _DOG_
# define _DOG_

class Dog
{

private:

  std::string _name;
  int age;

public:

  Dog(std::string const & name, int age);
  ~Dog();

public:

  void bark();
  std::string const & greet(std::string const & other, std::string msg);
  Dog hasBaby();

public:

  std::string const & getName() const;
  int getAge() const;

  void setAge(int age);
  void setName(std::string const & name);

};

#endif