## My notes : Vocabulary
### CPP00

* <strong>::</strong> scope resolution operator
* <strong><<</strong> insert operator
* <strong>>></strong> extraction operator
* <strong>namespace</strong> function or variable
* <strong>flush</strong> means save data from a temporary buffer to permanent storage
* <strong>std::endl</strong> add a line break and flush the stream
* <strong>stdout/cout</strong> is line buffered that is the output doesnt get send to the OS until a newline is written or the buffer is flushed
* <strong>std::cin</strong> (char input) read input from a buffer stream + if anything is pending for output, it's got flushed
* <strong>constructor</strong> and <strong>destructor</strong> haven't returned value
* a <strong>class</strong> is like a model and the <strong>instance</strong> is the dynamic part
* <strong>member function</strong> is a function into a class
* <strong>attribute</strong> is a variable into a class
* Structure of a member function :
<br><strong>type</strong> - <strong>classname</strong> - <strong>identifier</strong> - <strong>parameters</strong> <br> void Sample::bar (void)

* Sample sample;
<br> <strong>Sample</strong> is here the class and <strong>sample</strong> is the instance of this class created
<br>instance variable = the Sample class has been instancied
<br> note : an instance is a stack variable

* <strong>Initializer list</strong> is used to initialize the data members of a class.
<br>Sample::Sample (char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3)
<br> a1 a2 a3 are attributes of the Sample class

* make a <strong>member function as const</strong> allows a read-only and doesn't allow to modificate the state of a current instance

* convention : private members names start with _name
* <strong>keep private as much as possible</strong> and put public only the info that the user need : what to keep internal and to expose outside
* <strong>class vs struct</strong> : scope of class is private by default and public for the struct

* accessors
<br> setter : set a (private) attribute (ex setFoo())
<br> getter : which will be const (ex getFoo()) and used to get the value of a attribute

* private / protected / public are <strong>access specificiers</strong>

### CPP01

* <strong>static variable</strong> in a class are shared by the objects,
so it has to be init outside the class

* <strong>switch with strings</strong> :
Instead of switching over the string itself, switch over the result of a hash function that uses the string as input. And which return type int value for example (CPP01 ex06)

### CPP02

* Binary number = 110101
<br> represents the value = 1 * 2^5 + 1 * 2^4 + 0 * 2^3 + 1 * 22 + 0* 2^1 + 1 * 2^0 = 53

* shifting by one to the left is the same dividing the number by 2. to the right divides by 2
* Fixed point arithmetic is a technique which can be used instead of floating point to perfom arithmetic
  on numbers with fractional parts
* Pros : flexibility of range/precision/data size
* Cons : some operations are slower, some are faster, range and precision are less than floating point
* We set the scale to set the range and the precision, usually 1/2^x (1 over 2 to the power of 16)
* 118 = 0111 0110
118/16 = 0111.0110 = 7.375
118/4 = 011101.10 = 29.5

* pre increment : ++x : increment x and return the new value of x
* post increment : x++ : increment x and return the original value of x
* the copy construcor is used to initialize a previously uninitialized object from some other object's data.
* the assignement operator is used to replace the data of a previously initialized object with some other object's data.

### CPP03

* Syntax of inheritance :
```c++
class subclass_name : access_mode base_class_name
{
  // body of subclass
};
```
Derived class objects should be sensible specialisations of base class objects

* Subclass or Derived class : the class that inherits the properties
* Superclass or Base class : the one whose properties are inherited
* Access specifier :
  - protected : accessible from the class and the subclasses
  - private : accessible only from the class itself
  - public : accessible for everywhere
* Access mode :
(keep in mind that the private members are unaccessible from the child)
  - protected : members inherited are protected
  -  private : members inherited are private
  - public : members inherited stay the same (public and protected)
* "is a" and "has a" test : Inheritance or Agregation
* Virtual base class : specify to the compiler that the base shouldn't be duplicate

- With virtual keyword
```
    A
  /   \
 B     C
  \   /
    D
```

- Without virtual keyword
```
  A   A
  |   |
  B   C
   \ /
    D
```
### CPP04

* declaration of a function : write prototype of a function in a class
* definition of a function : write the function itself
* virtual member function or method :  member function which is declared within a base class and is re-defined (overridden) by a derived class.
* override : the derived class function fully replace the base class member
* augment : the derived class function partially replace the base class member
* abstract class : has one or more pure virtual function
* pure virtual function : virtual function not defined in the base clase, so has to be overriden
* interface : abstract class that has only pure virtual function
* Virtual function, binded at runtime
* Non-virtual function, binded at compile time
* Late binding (Runtime) is done in accordance with the content of pointer (i.e. location pointed to by pointer)
* Early binding (Compile time) is done according to the type of pointer
* Note : functions are automatically considered as virtual functions in the derived class.
* shallow copy (made by copy constructor and assignement operator) : copied fields, the pointers will point to the same memory address without copying it
* deep copy copies all fields, and makes copies of dynamically allocated memory pointed to by the fields
* forward declaration : also called a incomplete type
* Virtual destructor are needed when Base *b = new Derived();

### CPP05

* Exception handling : exceptions are run-time anomalies or abnormal conditions that a program encounters during its execution
* Polymorphism :  The ability of a message to be displayed in more than one form
  - Compile time : function or operator overloading
  - Run time : function overriden (with the virtual keyword)

### CPP06

* implicit cast : cast a variable type without to specify it
* explicit cast : int a = 42; double c = (double) a;
* '#' directive :  also called ‘Stringizing Operator’, converts its argument in a string.
* implict/explicit promotion : attribution of value of a int var to a float var (for example)
* implict/explicit demotion : attribution of value of a float var to a int var (for example)
* implict/explicit upcast : attribution of value of a child var to a parent var (for example)
* implict/explicit downcast : attribution of value of a parent var to a child var (for example)
* static_cast<type> : is a compile time cast
* dynamic_cast<type> : is a run time cast, the function has to contain a virtual keyword
* reinterpret_cast<type> : allow you to do reinterpretation, as well as downcast and upcast
* const_cast<type> : allow to cast a const var to a non cast one
* cast operators : operator overloading in the class

### CPP07

* non type parameter in template : ex. template <int x>
