#include "Cir.h"

// pi = 3.1459

namespace circle1 {

	float Circle::Circumference()
	{
		return 2 * (3.1459 * radius);
	}

	float Circle::Area()
	{
		return (3.1459 * radius) * (3.1459 * radius);
	}

	void Circle::SetR(float R)
	{
		radius = R;
	}
}