#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap 기본 생성자 호출" << std::endl;
	name_ = "scav noNamed";
	hit_points_ = 100;
	energy_points_ = 50;
	attack_damage_ = 20;
	gate_keeper_mode_ = false;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap 생성자(string) 호출: " << name << std::endl;
	hit_points_ = 100;
	energy_points_ = 50;
	attack_damage_ = 20;
	gate_keeper_mode_ = false;
}

ScavTrap::ScavTrap(const ScavTrap& scavtrap) : ClapTrap(scavtrap)
{
	std::cout << "ScavTrap 복사 생성자 호출: " << scavtrap.name_ << std::endl;
	gate_keeper_mode_ = scavtrap.gate_keeper_mode_;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap 소멸자 호출: " << name_ << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scavtrap)
{
	std::cout << "ScavTrap 할당 연산자 오버로딩: " << scavtrap.name_ << std::endl;
	ClapTrap::operator=(scavtrap);
	gate_keeper_mode_ = scavtrap.gate_keeper_mode_;
	return(*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (is_stuck_)
	{
		std::cout << name_ << ": 움직일 수 없습니다." << std::endl;
		return;
	}
	std::cout << "ScavTrap " << name_ << "이(가) " << target << "에게 " << attack_damage_ << "만큼 피해를 줬습니다." << std::endl;
	energy_points_--;
	if (energy_points_ <= 0)
		is_stuck_ = true;
}

void ScavTrap::guardGate()
{
	std::cout << "Gate keeper 모드로 전환합니다." << std::endl;
	gate_keeper_mode_ = true;
}

void ScavTrap::printStatus()
{
	std::cout << "Name: " << name_ << std::endl;
	std::cout << "Hit points: " << hit_points_ << std::endl;
	std::cout << "Energy points: " << energy_points_ << std::endl;
	std::cout << "Attack damage: " << attack_damage_ << std::endl;
	std::cout << "Gate keeper mode: " << gate_keeper_mode_ << std::endl;
	std::cout << std::endl;
}
