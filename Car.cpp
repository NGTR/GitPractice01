#include "Car.h"
namespace gitp {
	void Car::speed(int value)
	{
		speed_ = value; // speed is speed
		if (value > maxSpeed_)
			speed_ = maxSpeed_;
		else if (value < 0)
			speed_ = 0;
	}
	int Car::maxSpeed() const
	{
		return maxSpeed_;
	}
	int Car::speed() const
	{
		return speed_;
	}
	Car::Car(int mxSpeed) : speed_(0), maxSpeed_(mxSpeed)
	{}

} 


