# C++ Modules

## Vocabulary
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

* private and public are <strong>access specificier</strong>

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