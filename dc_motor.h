#ifndef __DCMOTOR_H_INCLUDED__
#define __DCMOTOR_H_INCLUDED__

class motor {
private:
	uint8_t pin_A;
	uint8_t pin_B;
	uint8_t pin_enable;
	uint8_t pin_current;
	//uint8_t pin_limit_switch;
	int current;
	int est_position;
	int demanded_position;
	bool use_current_sensor;

	void motorControl(bool motor_on, bool direction);

public:
	motor(uint8_t _pin_A, uint8_t _pin_B, uint8_t _pin_enable); 
	~motor();

	void motorFwd();
	void motorRev();
	void motorStop();
	

	//void update();
	void useCurrentSensor(uint8_t _pin_current);

};

#endif // __DCMOTOR_H_INCLUDED__ 	