#ifndef _ROBOT_HPP_
#define _ROBOT_HPP_

extern pros::Motor intake;
extern pros::MotorGroup arm;
extern pros::ADIDigitalOut mogo;
extern pros::ADIDigitalOut twopto;
extern pros::ADIDigitalOut swiper;
extern pros::ADIDigitalOut hangpto;
extern pros::ADIDigitalOut lift;

extern pros::Rotation arm_control;
extern pros::Distance distance;
extern pros::Distance intake_distance;
extern pros::Distance mogo_distance;
extern pros::Optical ring_color;
extern pros::Rotation intake_control;

extern pros::Controller master;

#endif