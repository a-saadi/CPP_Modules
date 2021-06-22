/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 12:35:21 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/19 13:17:04 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>

class FragTrap
{
private:
	std::string	_name;
	int			_hitPoints;
	int			_maxHitPoints;
	int			_energyPoints;
	int			_maxEnergyPoints;
	int			_level;
	int			_meleeAttackDamage;
	int			_rangedAttackDamage;
	int			_armorDamageReduction;
	FragTrap( void );
public:
	FragTrap( std::string const & );
	FragTrap( FragTrap const & );
	~FragTrap();
	FragTrap & operator=( FragTrap const & );

	int rangedAttack( std::string const & );
	int meleeAttack( std::string const & );

	void takeDamage( unsigned int );
	void beRepaired( unsigned int );

	int getMeleeAttackDamage();
	int getRangeAttackDamage();

	int vaulthunter_dot_exe( std::string const & target );
	int rocketLauncherAttack( std::string const & );
	int laserAttack( std::string const & );
	int shotgunAttack( std::string const & );
	int pistolAttack( std::string const & );
	int sniperRifleAttack( std::string const & );
};

#endif