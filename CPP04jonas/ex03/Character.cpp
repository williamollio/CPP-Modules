#include "Character.hpp"

Character::Character( std::string const name ) : _name(name), _inventory() {}

Character::Character( const Character &src )
{
	// this->operator=(src);
	*this = src;
}

Character::~Character() {

	for (int i = 0; i < 4; i++) {
		delete this->_inventory[i];
	}
}

Character	&Character::operator=( const Character &src )
{
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = src._inventory[i];
	}
	return	*this;
}

std::string const &	Character::getName() const {

	return this->_name;
}

void	Character::equip( AMateria* m ) {

	if (!m)
		return ;

	for (int i = 0; i < 4; i++) {
		if (!this->_inventory[i]) {
			this->_inventory[i] = m;
			return ;
		}
	}
}

void	Character::unequip( int idx ) {

	if (this->_inventory[idx]) {
		this->_inventory[idx] = nullptr;
	}
}

void	Character::use( int idx, ICharacter& target ) {

	if (this->_inventory[idx]) {
		this->_inventory[idx]->use(target);
	}
}
