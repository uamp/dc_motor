hbridge::hbridge(uint8_t _pin_A, uint8_t _pin_B, uint8_t _pin_enable){ 	
	pin_A=_pin_A;
	pin_B=_pin_B;
	pin_enable=_pin_enable;
	pinMode(pin_A,OUTPUT);
	pinMode(pin_B,OUTPUT);
	pinMode(pin_enable,OUTPUT);

}

void hbridge::control(bool motor_on, bool direction=true){
	if(pin_enable!=0) digitalWrite(pin_enable,motor_on);
	if(motor_on) {
		digitalWrite(pin_A,direction);
		digitalWrite(pin_B,!direction);
	} else {
		digitalWrite(pin_A,LOW);
		digitalWrite(pin_B,LOW);
	}
}

void hbridge::forward(){
	this->control(true,true);
}

void hbridge::reverse(){
	this->control(true,false);
}

void hbridge::stop(){
	this->control(false);
}


hbridge::~hbridge(){
}

