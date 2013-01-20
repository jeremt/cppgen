CppGen
======

It's a simple python script to generate c++ classes from .hh declaration.

Example
-------

The following __Test.hh__ file...

```cpp

#ifndef TEST_H_
# define TEST_H_

class Test
{

private:

  std::string const _name;

public:

  Test(std::string const & name);
  ~Test();

public:

  std::string const & getName() const;

};

#endif

```

... generate the following output:

```cpp

#include "Test.hh"

Test::Test(std::string const & name)
  : _name(name)
{
}

Test::~Test()
{
}

std::string const & Test::getName() const
{
  return _name;
}


```

Example
-------

You can try the __dog.hh__ example at the root of this repository :)

```shell

$ cppgen dog.hh > dog.cpp

```

TODO
----

- The corresponding sublime text plugin
- Handle canonical classes
- Ideas ?
