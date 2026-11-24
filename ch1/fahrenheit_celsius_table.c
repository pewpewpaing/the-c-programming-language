#include <stdio.h>

/* print Fahrenheit-Celsius table
	for fahr = 0, 20, ..., 300 */

int main() {
	/* float lower = 0;	lower limit of temperature scale
	float upper = 300;	 upper limit
	float step = 20;		step size 

	float fahr = lower;
	while (fahr <= upper) {
		float celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0f %6.1d\n", fahr, celsius);
		fahr = fahr + step;
	} */

	for (int fahr = 0; fahr <= 300; fahr = fahr + 20) {
		printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
	}
}
