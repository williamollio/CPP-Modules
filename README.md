# C++ Modules


// send string to the standard output + \n
std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;

// :: scope resolution operator
// << insert operator
// >> extraction operator

// namespace::function or variable
// flush save data from a temporary buffer to permanent storage
// end : \n + flush the stream
// stdout/count is line buffered that is the output doesnt get send to the OS until a newline is written or the buffer is flushed
// std::cin (char input): read input from a buffer stream + if anything is pending for output, it's got flushed

// constructor and destructor haven't returned value
// a class is like a model and the instance is the dynamic part

// member function
void bar(void);

// attribute
int foo;

// type - classname - identifier - parameters
void Sample::bar (void)

// instance variable = the Sample class has been instancied
// a stack variable
Sample instance;

// initialization list
// syntax : Sample2::Sample2 (char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3)

// make a member function as const, allows a read-only but doesn't allow to modificate the state of a current instance

// convention : private members names start with _name
// keep private as much as possible and put public only the info that the user need : what to keep internal and to expose outside

// class vs struct : scope of class is private by default and public for the struct

// accessors
// setter : set a (private) attribute (ex setFoo())
// getter : which will be const (ex getFoo()) and used to get the value of a attribute

// private and public are access specificier

// namespace
// a class is declared (class name)then defined (inside the brace)

// static variable in a class are shared by the object,
// so it has to be init outside the class

// switch with strings :
//Instead of switching over the string itself, switch over the result of a hash function that uses the string as input

// C01 ex01 : the trick in this exercise is to modify the constructor because of the use of the new operator and the creation of an array of instances.
// We actually can't pass any parameters while initializating