#include "main.h"


pros::Motor intake({-7});
pros::MotorGroup arm({8,-9});
pros::ADIDigitalOut mogo('A');
pros::ADIDigitalOut twopto('B');
pros::ADIDigitalOut swiper('D');
pros::ADIDigitalOut hangpto('C');
pros::ADIDigitalOut lift('E');

pros::Rotation arm_control(13);
pros::Distance distance(11);
pros::Distance intake_distance(16);
pros::Distance mogo_distance(15);
pros::Optical ring_color(1);
pros::Rotation intake_control(20);

pros::Controller master(pros::E_CONTROLLER_MASTER);

