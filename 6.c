/* Introduction to Programming - Insem 2 Solution
 * Author: Kesha Shah
 */

#include<stdio.h>
#include<math.h>

#define sqr(a) a*a

float* polar(float complexRect[]);

int main()
{
	//z=a+ib = rcos(s)+isin(s)

	float complexRect[2];

	// input real and imaginary parts
	scanf("%f %f",&complexRect[0],&complexRect[1]);	
	
	float *complexPolar;
	complexPolar=polar(complexRect);

	printf("%f+i%f \n = \n%fcos(%f)+%fsin(%f)\n",complexRect[0],complexRect[1],complexPolar[0],complexPolar[1],complexPolar[0],complexPolar[1]);
	return 0;
}

float* polar(float complexRect[])
{
	static float complexPolar[2];
	complexPolar[0]=sqrt(sqr(complexRect[0])+sqr(complexRect[1]));
	complexPolar[1]=atan(complexRect[1]/complexRect[0]);

	complexPolar[1]/=(3.141592/180);  //comment it if you dont want in degrees and radian is OK.
	return complexPolar;
}
