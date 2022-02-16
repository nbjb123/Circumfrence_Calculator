#pragma once

namespace circle1 {

	class Circle {

	private:
		float radius;

	public:
		float Circumference();
		float Area();
		void SetR(float R);
	};

}