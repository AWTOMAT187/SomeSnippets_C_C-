// 3D_Data_Input.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <stdio.h>
#include <stdlib.h>

#define SPEICHERPLATZ 1000 //in Byte
#define INTERNAL_CLOCK 0x102
#define INPUT_X 0x102
#define INPUT_Y 0x102
#define INPUT_Z 0x102
#define MESSINTERVALL 100 //in ms

int main()
	{
	const int DATA_ARRAY_SIZE = sizeof(char) * SPEICHERPLATZ / sizeof(KOORD_DATA);
	KOORD_DATA A[DATA_ARRAY_SIZE];
	int i = 0;
	int delta_time = 0;

	while (1) {
		A[i].x = INPUT_X; //in mm
		A[i].y = INPUT_Y; //
		A[i].z = INPUT_Z; //
		A[i].s = INTERNAL_CLOCK; //in ms evtl. systime() in t_time Format
		delta_time = INTERNAL_CLOCK - delta_time;
		i = (delta_time >= MESSINTERVALL ? i + 1 : i);
	};


	return 0;
}


typedef struct DATA {

	float x, y, z;
	time_t s;

}KOORD_DATA;

void saveDATA() {
	for(i=0; i<)

}