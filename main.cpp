#include <stdio.h>
#include "IShape.h"

int main() {
	IShape* iShapes[3];

	for (int i = 0; i < 2; i++) {
		if (i < 1) 
			iShapes[i] = new Circle;
		else 
			iShapes[i] = new Rectangle;
	}

	return 0;
}