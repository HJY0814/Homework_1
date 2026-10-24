//
// Created by HeJingyuan on 2026/10/24.
//

#ifndef HOMEWORK_1_ANGLE_H
#define HOMEWORK_1_ANGLE_H

// 抛体运动求解：给定初速度 v0 与重力加速度 g
// 求击中水平距离 d 处目标所需的枪管抬升角
class Angle {
public:
    // v0:初速度; g:重力加速度
    explicit Angle(double v0 = 10.0, double g = 9.8);

    // d     : 水平距离
    // theta : 抬升角
    // 返回   : true = 有解；false = 无解
    bool solver(double d, double &theta) const;

private:
    double v0_; // 初速度
    double g_; // 重力加速度
};


#endif //HOMEWORK_1_ANGLE_H
