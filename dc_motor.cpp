motor::motor(uint8_t _pin_A, uint8_t _pin_B, uint8_t _pin_enable){ 	
	pin_A=_pin_A;
	pin_B=_pin_B;
	pin_enable=_pin_enable;
	use_current_sensor=false;
}

void motor::useCurrentSensor(uint8_t _pin_current){
	pin_current=_pin_current;
	use_current_sensor=true;
}

void motor::int getCurrent(){
	return analogRead(CURRENT_PIN);
}

void motor::motorControl(bool motor_on, bool direction=true){
	digitalWrite(pin_enable,motor_on);
  	digitalWrite(pin_A,direction);
  	digitalWrite(pin_B,!direction);
}

void motor::forward(){
	this->motorControl(true,true);
}

void motor::reverse(){
	this->motorControl(true,false);
}

void motor::stop(){
	this->motorControl(false);
}


motor::~motor(){
}

