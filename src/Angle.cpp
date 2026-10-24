//
// Created by HeJingyuan on 2026/10/24.
//

#include "../include/Angle.hpp"

#include <algorithm>
#include <cmath>

// 构造函数：通过成员初始化列表设置物理参数
Angle::Angle(const double v0, const double g) : v0_(v0), g_(g) {
}

bool Angle::solver(const double d, double &theta) const {
    // 无解
    if (d < 0 || d > v0_ * v0_ / g_) {
        return false;
    }

    theta = 0.5 * asin(std::min(d * g_ / (v0_ * v0_), 1.0));
    return true;
}
