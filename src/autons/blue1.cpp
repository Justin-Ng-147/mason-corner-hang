#include "main.h"

void blue1(){
    // setup
    chassis.setPose(0,0,-143.5);
    intake.set_encoder_units_all(MOTOR_ENCODER_ROTATIONS);
    left.set_brake_mode_all(pros::motor_brake_mode_e::E_MOTOR_BRAKE_BRAKE);
    right.set_brake_mode_all(pros::motor_brake_mode_e::E_MOTOR_BRAKE_BRAKE);
    mogo.set_value(true);

    //score ring
    chassis.moveDistance(4.5,1000);
    arm.move(127);
    pros::delay(800);
    arm.brake();

    // get mogo
    chassis.moveToPoint(16, 32.7,4000,{.forwards = false,.maxSpeed=80});
    pros::delay(500);
    arm_move=false;
    global_target=100;
    while(!mogo_seated() && chassis.isInMotion()) pros::delay(10);
    pros::delay(50);
    mogo.set_value(false);

    //get 2 rings
    set_intake_speed(127,false);
    chassis.turnToPoint(30,42,1000,{.minSpeed=5,.earlyExitRange=3});
    chassis.moveToPoint(30,42,1000,{.minSpeed=20,.earlyExitRange=3});
    // chassis.turnToPoint(49,43.5,500,{.minSpeed=20,.earlyExitRange=3},false);
    chassis.turnToPoint(49,43.5,1000,{},false);
    // pros::delay(200);
    chassis.moveToPoint(49,43.5,5000,{.minSpeed=20,.earlyExitRange=3});

    chassis.moveToPoint(16,38,1000,{.forwards=false,.minSpeed=20,.earlyExitRange=3});
    chassis.turnToPoint(40,28,1000,{.minSpeed=20,.earlyExitRange=3});
    fast_move(40,28,2000,true);

    chassis.turnToPoint(12,33,1000,{.forwards=false,.minSpeed=5,.earlyExitRange=3});
    chassis.moveToPoint(12,33,2000,{.forwards=false});
    // chassis.turnToPoint(3,43.5,1000);
    chassis.turnToHeading(-408,2000);
    set_intake_speed(0);
    chassis.moveDistance(15,1000,{.minSpeed=5,.earlyExitRange=3},false);
    swiper.set_value(true);
    left.brake();
    right.brake();
    // chassis.moveToPoint(3,43.5,1000,{},false);
    pros::delay(500);

    chassis.moveDistance(30,3000,{.forwards=false,.maxSpeed=60,.minSpeed=5,.earlyExitRange=3});
    global_target = 15000;
    chassis.turnToHeading(chassis.getPose().theta + 25,1000,{.minSpeed=20,.earlyExitRange=3});
    set_intake_speed(127);
    swiper.set_value(false);
    // chassis.moveToPoint(14,32,1000,{},false);
    chassis.moveDistance(17,1000);
    // return;
    
    arm_move = true;
    arm.move(0);




    return;
    //touch bar
    chassis.turnToPoint(-11,11,1000,{.minSpeed=5,.earlyExitRange=3});
    chassis.moveToPoint(-11,11,2000,{.minSpeed=5,.earlyExitRange=3});

    //get middle ring
    chassis.moveToPoint(0,19,1000,{.forwards=false,.minSpeed=5,.earlyExitRange=3});
    chassis.turnToPoint(0,41,1000,{.minSpeed=5, .earlyExitRange=3});
    chassis.moveToPoint(0,41,2000,{},false);
    swiper.set_value(true);


    //touch bar
    chassis.turnToHeading(0,1000,{.minSpeed=5,.earlyExitRange=3});
    chassis.moveDistance(40,1000,{.maxSpeed=40});
}

//new bot blue - teamwork
// void blue1(){
// // setup
//     chassis.setPose(0,0,-146);
//     intake.set_encoder_units_all(MOTOR_ENCODER_ROTATIONS);
//     left.set_brake_mode_all(pros::motor_brake_mode_e::E_MOTOR_BRAKE_BRAKE);
//     right.set_brake_mode_all(pros::motor_brake_mode_e::E_MOTOR_BRAKE_BRAKE);
//     mogo.set_value(true);

//     //score ring
//     chassis.moveDistance(6.5,1000);
//     arm.move(127);
//     pros::delay(800);
//     arm.brake();

//     // get mogo
//     chassis.moveToPoint(19, 34,4000,{.forwards = false,.maxSpeed=80});
//     pros::delay(500);
//     arm_move=false;
//     global_target=100;
//     while(!mogo_seated() && chassis.isInMotion()) pros::delay(10);
//     pros::delay(50);
//     mogo.set_value(false);

//     //get 2 rings
//     set_intake_speed(127);
//     chassis.turnToPoint(34,41,1000,{.minSpeed=5,.earlyExitRange=3});
//     chassis.moveToPoint(34,41,1000,{.minSpeed=20,.earlyExitRange=3});
//     chassis.turnToPoint(49,41,1000,{.minSpeed=20,.earlyExitRange=3});
//     chassis.moveToPoint(49,41,1000,{.minSpeed=20,.earlyExitRange=3});

//     chassis.moveToPoint(14, 28,1000,{.forwards=false,.minSpeed=20,.earlyExitRange=3});
//     chassis.turnToPoint(36,26,1000,{.minSpeed=20,.earlyExitRange=3});
//     fast_move(36,26,2000,true);

//     chassis.turnToPoint(52,-10,1000);
//     set_intake_speed(127,false);
//     chassis.moveDistance(38,2000);
//     chassis.moveDistance(40,1000);
//     chassis.moveDistance(20,1000,{.forwards=false,.minSpeed=5,.earlyExitRange=3},false);
//     // chassis.moveDistance(15,1000);
//     // chassis.moveDistance(10,1000,{.forwards=false,.maxSpeed=60,.minSpeed=5,.earlyExitRange=3});

//     //touch bar
//     chassis.turnToPoint(-9,14,1000,{.minSpeed=5,.earlyExitRange=3});
//     chassis.moveToPoint(-9,14,2000,{.minSpeed=5,.earlyExitRange=3});
//     pros::Task skills_task2{[=]
//     {
//         while(intake_distance.get_distance()>100) pros::delay(10);
//         pros::delay(500);
//         set_intake_speed(0);
//     }};
//     //touch bar
//     chassis.turnToHeading(17,1000,{.minSpeed=5,.earlyExitRange=3});
//     chassis.moveDistance(40,1000,{.maxSpeed=40});

// }






//old blue 1 dont use
// void blue1(){
//     //  setup
//     chassis.setPose(0,0,-146);
//     intake.set_encoder_units_all(MOTOR_ENCODER_ROTATIONS);
//     left.set_brake_mode_all(pros::motor_brake_mode_e::E_MOTOR_BRAKE_BRAKE);
//     right.set_brake_mode_all(pros::motor_brake_mode_e::E_MOTOR_BRAKE_BRAKE);
//     mogo.set_value(false);

//     //score ring
//     pto.set_value(true);
//     chassis.moveDistance(11,1000,{},false);
//     deploy.set_value(true);
//     pros::delay(200);
//     claw.set_value(true);

//     // get mogo
//     chassis.moveToPoint(16, 31,4000,{.forwards = false,.maxSpeed=60});
//     pto.set_value(false);
//     while(!mogo_seated() && chassis.isInMotion()) pros::delay(10);
//     pros::delay(50);
//     mogo.set_value(true);
//     // pros::delay(50);
//     chassis.cancelMotion();
//     left.brake();
//     right.brake();
//     deploy.set_value(false);
//     pros::delay(100);

    

//      //get 2 rings
//     set_intake_speed(127);
//     chassis.swingToPoint(30,43,DriveSide::RIGHT,2000,{.maxSpeed=90, .minSpeed=5, .earlyExitRange = 10});
//     chassis.turnToPoint(30,43,1000);
//     // intake.move(127);
//     chassis.moveToPoint(30,43,2000);
//     chassis.turnToHeading(95,1000,{.minSpeed=5,.earlyExitRange=3});
//     chassis.moveDistance(18,2000,{.minSpeed=5,.earlyExitRange=3});
//     // chassis.moveDistance(15,2000);

//     // intake.move(0);
//     chassis.turnToHeading(70,1000,{.minSpeed=5,.earlyExitRange=3});
//     chassis.moveDistance(10,1000,{.forwards=false,.minSpeed=5,.earlyExitRange=3});
//     chassis.turnToPoint(35,20,2000,{.minSpeed=5,.earlyExitRange=3});
//     // intake.move(127);
//     // chassis.moveDistance(10,2000);
//     // pros::delay(1000);
//     // intake.move(127);
//     fast_move(35,20,2000,true);
//     // intake.move(0);

//     //28 -1
//     // intake.move(0);
//     chassis.turnToPoint(-32,-1,2000,{.minSpeed=5,.earlyExitRange=3});
//     // intake.move(127);
//     chassis.moveToPoint(-32,-1,2000,{.minSpeed=127,.earlyExitRange = 45});
//     chassis.moveToPoint(-32,-1,4000,{.maxSpeed = 40,.minSpeed=5,.earlyExitRange=3});
//     // while(!(vision.get_by_sig(0,REDCOLOR).width>100 && distance.get_distance()<150)) pros::delay(10);
//     // chassis.cancelMotion();
//     // intake.move(0);

//     chassis.moveToPoint(7,-1,4000,{.forwards=false,.minSpeed=5,.earlyExitRange=3});
//     chassis.turnToPoint(7,38,2000,{.minSpeed=5,.earlyExitRange=3});
//     // intake.move(0);
//     set_intake_speed(0);
//     chassis.moveToPoint(7,38,2000);

//     // // /22.5 30
//     // intake.move(0);
//     // chassis.turnToPoint(-25,35,2000,{},false);
//     // intake.move(127);
//     // chassis.moveToPoint(-25,35,2000);

//     // // -54 -6
//     // chassis.turnToPoint(-44,-5,4000);
//     // chassis.moveDistance(44,1000);
//     // chassis.moveDistance(20,2000,{.forwards=false});

//     // //26 1.5
//     // chassis.moveToPoint(35,6,4000,{.minSpeed=127,.earlyExitRange = 40});
//     // chassis.moveToPoint(35,6,4000,{.maxSpeed = 40},false);
//     // intake.move(0);
//     // // while(!(vision.get_by_sig(0,1).width < 100 && ringdistancesensor.get_distance()<75)) pros::delay(100);
//     // // chassis.cancelMotion();

//     // // chassis.moveToPoint(72,-10,4000,{.forwards = false},false);
//     // // intake.move(0);
//     // // mobo.set_value(false);
//     // // chassis.moveDistance(10,1500);
    
//     // swiper.set_value(true);
//     // chassis.turnToPoint(69,-8,2000);
//     // chassis.moveToPoint(69,-8,2000);
//     // chassis.turnToHeading(-45,1000,{.direction=AngularDirection::CCW_COUNTERCLOCKWISE},false);
//     // chassis.moveDistance(20,1000,{.forwards=false},false);
//     // mogo.set_value(false);
//     // pros::delay(200);
//     // chassis.moveDistance(10,1000)
// }
