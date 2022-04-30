#include <iostream>

typedef struct s_Data
{
	char c;
	int i;
	float f;
	double d;
} Data;

uintptr_t serialize(Data* data_ptr)
{
	return (reinterpret_cast<uintptr_t>(data_ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int main(void)
{
	Data data;
	data.c = 42;
	data.i = 42;
	data.f = 42.0f;
	data.d = 42.0;

	uintptr_t uipt;
	std::cout << "data의 주소: " << &data << std::endl;
	uipt = serialize(&data);

	Data* data_ptr;
	std::cout << "uipt: " << uipt << std::endl;

	data_ptr = deserialize(uipt);
	std::cout << "data_ptr: " << data_ptr << std::endl;
	std::cout << "data_ptr->c: " << data_ptr->c << std::endl;
	std::cout << "data_ptr->i: " << data_ptr->i << std::endl;
	std::cout << "data_ptr->f: " << data_ptr->f << std::endl;
	std::cout << "data_ptr->d: " << data_ptr->d << std::endl;
	return (0);
}