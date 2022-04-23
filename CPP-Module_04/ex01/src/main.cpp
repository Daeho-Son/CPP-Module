#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	{
		std::cout << "# Subject Test" << std::endl;
		const Animal *j = new Dog();
		const Animal *i = new Cat();
		delete j; //should not create a leak
		delete i;
	}
	std::cout << std::endl;
	{
		std::cout << "# Test" << std::endl;
		Dog dog1;
		Dog dog2;

		dog1.setType("dog 1");
		dog2.setType("dog 2");
		std::cout << std::endl;
		std::cout << "========== base ==========" << std::endl;
		std::cout << "[0] dog1의 주소: " << &dog1 << std::endl;
		std::cout << "[0] dog1.getBrain() 의 주소: " << dog1.getBrain() << std::endl;
		std::cout << "[0] dog2의 주소: " << &dog2 << std::endl;
		std::cout << "[0] dog2.getBrain() 의 주소: " << dog2.getBrain() << std::endl;
		std::cout << std::endl;
		std::cout << "========== dog2.removeBrain() ==========" << std::endl;
		dog2.removeBrain();
		std::cout << "[1] dog1의 주소: " << &dog1 << std::endl;
		std::cout << "[1] dog1.getBrain() 의 주소: " << dog1.getBrain() << std::endl;
		std::cout << "[1] dog2의 주소: " << &dog2 << std::endl;
		std::cout << "[1] dog2.getBrain() 의 주소: " << dog2.getBrain() << std::endl;
		std::cout << std::endl;
		std::cout << "========== dog2 = dog1 ==========" << std::endl;
		dog2 = dog1;
		std::cout << "[2] dog1의 주소: " << &dog1 << std::endl;
		std::cout << "[2] dog1.getBrain() 의 주소: " << dog1.getBrain() << std::endl;
		std::cout << "[2] dog2의 주소: " << &dog2 << std::endl;
		std::cout << "[2] dog2.getBrain() 의 주소: " << dog2.getBrain() << std::endl;
		std::cout << std::endl;
		std::cout << "========== dog1.removeBrain() ==========" << std::endl;
		dog1.removeBrain();
		std::cout << "[3] dog1의 주소: " << &dog1 << std::endl;
		std::cout << "[3] dog1.getBrain() 의 주소: " << dog1.getBrain() << std::endl;
		std::cout << "[3] dog2의 주소: " << &dog2 << std::endl;
		std::cout << "[3] dog2.getBrain() 의 주소: " << dog2.getBrain() << std::endl;
		std::cout << std::endl;
		std::cout << "========== 소멸자 ==========" << std::endl;
	}
	return (0);
}