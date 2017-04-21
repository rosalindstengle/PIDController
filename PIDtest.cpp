#include <iostream>

uint32_t targetSpd;
uint32_t measuredSpd;
uint32_t curError;
uint32_t integError;
uint32_t difError;
uint32_t input;

curError = 0;
integError = 0;
difError = 0;
targetSpd = 1000;
input = targetSpd;
 measuredSpd = 3*input +50;

//uint32_t Kp = ;
//uint32_t Ki = ;
//uint32_t Kd = ;
//uint32_t scale = ; 

uint32_t PIDcontroller (uint32_t targetSpd, uint32_t measuredSpd) {
	if (targetSpd = measuredSpd) {
		difError = 0;
		curError = 0;
		integError = 0;
		integError = 0;
		return 0;
	}
	difError = (curError - (targetSpd - measuredSpd));
	curError = targetSpd - measuredSpd;
	integError += curError;
	uint32_t difference = scale*(Kp*curError + Ki*integError + Kd*difError);
	std::cout << "difference: " << difference <<;
	input += difference;
	std::cout << "input: " << input << std::endl; 
	return input;
	}

int main () {
	for (int i = 0; i <= 500; i++) {
		 PIDcontroller(targetSpd, measuredSpd);
		 measuredSpd = 3*input +50;
		 std::cout << "Measured speed: " << measuredSpd << std::endl;
	}
	
	return 0;
}