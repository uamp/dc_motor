#ifndef __HBRIDGE_H_INCLUDED__
#define __HBRIDGE_H_INCLUDED__

class hbridge {
private:
	uint8_t pin_A;
	uint8_t pin_B;
	uint8_t pin_enable;

public:
	hbridge(uint8_t _pin_A, uint8_t _pin_B, uint8_t _pin_enable=0); //optional _pin_enable 
	~hbridge();

	void forward();
	void reverse();
	void stop();
	void control(bool motor_on, bool direction);
};

#endif // __HBRIDGE_H_INCLUDED__ 	
