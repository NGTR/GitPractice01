#ifndef SICT_DRIVER_H_
#define SICT_DRIVER_H_
#include "Car.h"

namespace gitp {
	extern std::ostream&operator<<(std::ostream& oss, const sict::Car& carName);

	class Driver : public Car {
	private:
		char name_[31];
		Car& car_;
	public:
		Driver(const char* name, Car& cRef);

		void drive();
		void stop();
		std::ostream& display(std::ostream& os) const;
		void showStatus();
		void accelerate() {}
		void brake() {}
	};
}

// new function added after v0.1
#endif
