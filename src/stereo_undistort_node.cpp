#include <image_undistort/stereo_undistort.h>
#include <nodelet/loader.h>

int main(int argc, char** argv) {
  ros::init(argc, argv, "stereo_undistort_node");
  nodelet::Loader nodelet;
  nodelet::M_string remap(ros::names::getRemappings());
  nodelet::V_string nargv;
  std::string nodelet_name = ros::this_node::getName();
  ROS_INFO_STREAM("Started " << nodelet_name << " nodelet.");
  nodelet.load(nodelet_name, "image_undistort/StereoUndistortNodelet", remap,
               nargv);
  ros::spin();
  return 0;
}