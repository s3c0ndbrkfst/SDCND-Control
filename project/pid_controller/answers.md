// Answer the following questions:

// Add the plots to your report and explain them (describe what you see)
| INPUT           |    ACTION     |
| :-------------: | :-----------: |
| SPACE           |     reset     |
| ESC             |      exit     |
| UP arrow        |  real + 0.01  |
| DOWN arrow      |  real - 0.01  |
| RIGHT arrow     |  imag + 0.01  |
| LEFT arrow      |  imag - 0.01  |
| 1 - 9           |  custom 1-9   |

## Example Output
Initial Fractal
<img src="screenshot/test 2_steer.png">

// What is the effect of the PID according to the plots, how each part of the PID affects the control command?
// How would you design a way to automatically tune the PID parameters?
// PID controller is a model free controller, i.e. it does not use a model of the car. Could you explain the pros and cons of this type of controller?
// (Optional) What would you do to improve the PID controller?
- Using a controller with a model of the vehicle could allow for more accurate results and better control of the vehicle but at the price of a higher computational load and higher implementation complexity. Being able to predict to some extent what the vehicle will do before actually doing it allows the controller to take this information into account before executing the actual command. Where as a model free controller executes the command without any knowledge of the dynamics of the process it is controlling.
