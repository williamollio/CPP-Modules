template<typename T>
void swap(T &arg, T &arg2)
{
	T arg3;
	arg3 = arg;
	arg = arg2;
	arg2 = arg3;
}

template<typename T>
T const & min(T const &arg, T const &arg2)
{
	if (arg < arg2)
		return arg;
	return arg2;
}

template<typename T>
T const &max(T const &arg, T const &arg2)
{
	if (arg > arg2)
		return arg;
	return arg2;
}