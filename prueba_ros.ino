#include <ros.h>
#include <std_msgs/Int32.h>

ros::NodeHandle nh;
std_msgs::Int32 valor;
ros::Publisher pub("/inicio", &valor);

int i = 1;

void setup() {
  nh.initNode();
  nh.advertise(pub);
}

void loop() {
  valor.data = i;
  pub.publish( &valor );
  nh.spinOnce();
  delay(1000);
}
