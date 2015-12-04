RobotTemplate::RobotTemplate()
{
}

//This function is called once each time the robot enters autonomous mode.
void RobotTemplate::Autonomous()
{
 \    while (IsAutonomous() && IsEnable()) 
     {
          // Put code here
 \         Wait(0.05);
     }
}

// This function is called once each time the robot enters teleop mode.
void RobotTemplate::OperatorControl() {
     while (isOperatorControl() && isEnabled())
     {
          // Put code here
          Wait(0.05);
 \    }
}
