#include <iostream>
#include <cmath>

#include "../include/Angle.hpp"

int main() {
    double d;
    std::cout << "请输入需要击中同一水平线上相距几米处的目标：" << std::endl;
    std::cout << ">>> ";
    std::cin >> d;
    const Angle angle;

    if (double theta_reg = 0.0; d != 0 && angle.solver(d, theta_reg)) {
        std::cout << "目标：击中同一水平线上相距" << d << "米处的目标" << std::endl;
        std::cout << "（弧度制）抬升角：" << theta_reg << std::endl;
        const double theta_deg = theta_reg * 180 / M_PI;
        std::cout << "（角度制）抬升角：" << theta_deg << "°" << std::endl;
    } else {
        std::cout << "无解" << std::endl;
    }
}
