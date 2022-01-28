/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhagedor <jhagedor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 11:44:25 by jhagedor          #+#    #+#             */
/*   Updated: 2022/01/27 11:30:19 by jhagedor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CLASS_H
# define BRAIN_CLASS_H

#include <iostream>

class Brain {
private:
	std::string	ideas[100];
public:
	Brain();
	Brain(const Brain &src);
	~Brain();
	Brain &operator=(const Brain &src);

	void	addidea(std::string idea);
	void	showideas() const;
};

#endif