#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <iostream>

class conversion
{
	private:
		/*private members*/
	public:
		conversion(void);
		~conversion(void);
		conversion(const conversion &copy);

		conversion	&operator = (const conversion &copy);
};

#endif
