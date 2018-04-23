#include "Vector.h"
#include "Rectangle.h"
#include <fstream>

int main() {
	ifstream in;
	ofstream out;
	out.open("write.txt");
	in.open("read.txt");
	double xa, ya, xb, yb, xc, yc, xd, yd;
	double xCenter, yCenter, sideA, sideB;
	Rectangle *p;
	p = new Rectangle[5];
	
	int i = 0; 
	if (!in) {
		cerr << "file open error" << endl;	}
	else
	{
		while (!in.eof()) {
			//in >> xa >> ya>>xb>> yb>>xc>>yc>>xd>>yd;
			in >> xCenter >> yCenter >> sideA >> sideB;
			Rectangle R(xCenter, yCenter, sideA, sideB);


			p[i++] = R;
		}}
	
	for (int k = 0; k < i; k++) {
	

	p[k].resize(2, 10);
		
		out << p[k].getXA() << "\t" << p[k].getYA() << "\t" <<
			p[k].getXB() << "\t" << p[k].getYB() << "\t" <<
			p[k].getXC() << "\t" << p[k].getYC() << "\t" <<
			p[k].getXD() << "\t" << p[k].getYD() << endl;
	}

	out.close();
	system("pause");
	return 0;

}