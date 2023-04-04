#pragma once

#include <iostream>

class Car {
public:
	virtual void start()
	{
		std::cout << "Car has just started\n";
	}
	virtual void run()
	{
		std::cout << "Car is running\n";
	}
	virtual void stop()
	{
		std::cout << "Car has just stopped\n";
	}

	void test_car()
	{
		Car::start();
		Car::run();
		Car::stop();
	}
};

class Volvo : public Car {
public:
	void start()override
	{
		std::cout << "Volvo has just started\n";
	}
	void run()override
	{
		std::cout << "Volvo is running\n";
	}
	void stop()override
	{
		std::cout << "Volvo has just stopped\n";
	}
};


