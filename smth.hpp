#ifndef SMTH_HPP
# define SMTH_HPP

# include <iostream>

class smth
{
	private:
		/*private members*/
	public:
		smth(void);
		~smth(void);
		smth(const smth &copy);

		smth	&operator = (const smth &copy);
};

#endif
