#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		~Ice(void);
		Ice(const Ice &copy);
		AMateria* clone();
		Ice	&operator = (const Ice &copy);
		void use(ICharacter& target);
};

#endif
