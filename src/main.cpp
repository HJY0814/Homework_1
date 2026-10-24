#include <iostream>
#include <cmath>

#include "../include/Angle.hpp"

int main() {
    const Angle angle;
    if (double theta_reg = 0.0; angle.solver(10, theta_reg)) {
        std::cout << "抬升角：" << theta_reg << std::endl;
        const double theta_deg = theta_reg * 180 / M_PI;
        std::cout << "抬升角：" << theta_deg << "°"  << std::endl;
    } else {
        std::cout << "无解" << std::endl;
    }
}
