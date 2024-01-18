/**********************************************
 * Self-Driving Car Nano-degree - Udacity
 *  Created on: December 11, 2020
 *      Author: Mathilde Badoual
 **********************************************/

#ifndef PID_CONTROLLER_H
#define PID_CONTROLLER_H

class PID {
 public:

  // Errors
  double p_error;
  double i_error;
  double d_error;

  // Coefficients
  double Kp;
  double Ki;
  double Kd;

  // Output limits
  double output_lim_max;
  double output_lim_min;

  double delta_time;

  PID();
  virtual ~PID();

  void Init(double Kp, double Ki, double Kd, double output_lim_max,
            double output_lim_min);

  void UpdateError(double cte);

  // Total PID error
  double TotalError();

  double UpdateDeltaTime(double new_delta_time);
};

#endif  // PID_CONTROLLER_H
