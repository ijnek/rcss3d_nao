// Copyright 2021 Kenji Brameld
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef SIM_TO_NAO_HPP_
#define SIM_TO_NAO_HPP_

#include "nao_sensor_msgs/msg/joint_positions.hpp"
#include "nao_sensor_msgs/msg/accelerometer.hpp"
#include "nao_sensor_msgs/msg/gyroscope.hpp"
#include "rcss3d_agent_msgs/msg/accelerometer.hpp"
#include "rcss3d_agent_msgs/msg/gyro_rate.hpp"

namespace rcss3d_agent_nao
{
namespace sim_to_nao
{

// nao_sensor_msgs::msg::JointPositions getJointPositions(
//   const sensor_msgs::msg::JointState & sim_joints);

nao_sensor_msgs::msg::Accelerometer getAccelerometer(
  const rcss3d_agent_msgs::msg::Accelerometer & accelerometer);

nao_sensor_msgs::msg::Gyroscope getGyroscope(
  const rcss3d_agent_msgs::msg::GyroRate & gyroRate);

}  // namespace sim_to_nao
}  // namespace rcss3d_agent_nao


#endif  // SIM_TO_NAO_HPP_
