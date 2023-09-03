#include <string>
#include <iostream>
#include <random>

using namespace std;


short max(short a, short b, short c, short d, short e, short f) {
	uint64_t temp = a;
	temp = (b > a) ? b : a;
	temp = (c > temp) ? c : temp;
	temp = (d > temp) ? d : temp;
	temp = (e > temp) ? e : temp;
	temp = (f > temp) ? f : temp;
	return temp;
}

bool isFull(short input, short white, uint64_t red, uint64_t blue, uint64_t green, uint64_t yellow, uint64_t orange) {
	if (input == 0) {
		if (white == 9) {
			return false;
		}
	}
	else if (input == 1) {
		if (red == 9) {
			return false;
		}
	}
	else if (input == 2) {
		if (blue == 9) {
			return false;
		}
	}
	else if (input == 3) {
		if (green == 9) {
			return false;
		}
	}
	else if (input == 4) {
		if (yellow == 9) {
			return false;
		}
	}
	else {
		if (orange == 9) {
			return false;
		}
	}
	return true;
}

void increaseColor(short id, short& white, short& red, short& orange, short& yellow, short& green, short& blue) {
	if (id == 0) {
		red++;
	}
	if (id == 1) {
		orange++;
	}
	if (id == 2) {
		yellow++;
	}
	if (id == 3) {
		green++;
	}
	if (id == 4) {
		blue++;
	}
	if (id == 5) {
		white++;
	}
}

class Pixel {
	public:
		uint64_t pixelId = 0;
		short position[4][3] = {{0,0,0},{0,0,0},{0,0,0},{0,0,0}};
		uint64_t idProducer() {
			uint64_t iD = 0;
			iD += (uint64_t)position[0][0] * 100000000000;
			iD += (uint64_t)position[0][1] * 10000000000;
			iD += (uint64_t)position[0][2] * 1000000000;
			iD += (uint64_t)position[1][0] * 100000000;
			iD += (uint64_t)position[1][1] * 10000000;
			iD += (uint64_t)position[1][2] * 1000000;
			iD += (uint64_t)position[2][0] * 100000;
			iD += (uint64_t)position[2][1] * 10000;
			iD += (uint64_t)position[2][2] * 1000;
			iD += (uint64_t)position[3][0] * 100;
			iD += (uint64_t)position[3][1] * 10;
			iD += (uint64_t)position[3][2];
			return iD;
		} 
		Pixel(Pixel &px) {
			
		}
		Pixel() {
			position[0][0] = 0;
			position[0][1] = 0;
			position[0][2] = 0;
			position[1][0] = 0;
			position[1][1] = 0;
			position[1][2] = 0;
			position[2][0] = 0;
			position[2][1] = 0;
			position[2][2] = 0;
			position[3][0] = 0;
			position[3][1] = 0;
			position[3][2] = 0;
		}
		Pixel(short p0[3], short p1[3], short p2[3], short p3[3]) {
			position[0][0] = p0[0];
			position[0][1] = p0[1];
			position[0][2] = p0[2];
			position[1][0] = p1[0];
			position[1][1] = p1[1];
			position[1][2] = p1[2];
			position[2][0] = p2[0];
			position[2][1] = p2[1];
			position[2][2] = p2[2];
			position[3][0] = p3[0];
			position[3][1] = p3[1];
			position[3][2] = p3[2];
		}
		short pxlColor; //Colors: 0 = Red, 1 = Orange, 2 = Yellow, 3 = Green, 4 = Blue, 5 = White
		void editColor(uint64_t colr) {
			pxlColor = colr;
		}
		void fixId() {
			pixelId = idProducer();
		}
		void printPosition() {
			cout << position[0][0] << position[0][1] << position[0][2] << position[1][0] << position[1][1] << position[1][2] << position[2][0] << position[2][1] << position[2][2] << position[3][0] << position[3][1] << position[3][2];
		}
};

class Rotation {
	public:
		//uint64_t ornt;
		short noOfBlocks;
		short lOrR;
		short numero = 0;
		Pixel* pxlIncluded;
		Rotation(uint64_t lOrR, uint64_t noOfBlocks, Pixel* pxlIncluded) {
			this->noOfBlocks = noOfBlocks;
			this->lOrR = lOrR;
			this->pxlIncluded = pxlIncluded;
		}
		Rotation() {

		}
		Rotation(uint64_t lOrR, uint64_t noOfBlocks, uint64_t numero) {
			this->noOfBlocks = noOfBlocks;
			this->lOrR = lOrR;
			this->numero = numero;
		}
};

class Cube {
	public:
		Pixel pixels[54];
		short cbCost = 0;
		void pixelCreator() { 
			short side = 0;
			short pxlsCreated = 0;
			short white = 0;
			short red = 0;
			short blue = 0;
			short green = 0;
			short yellow = 0;
			short orange = 0;
			
			while (pxlsCreated < 54) {
				short p0[3] = { 0,0,0 };
				short p1[3] = { 0,0,0 };
				short p2[3] = { 0,0,0 };
				short p3[3] = { 0,0,0 };
				uint64_t colr = rand() % 6;
				while (isFull(colr, white, red, blue, green, yellow, orange) == false) {
					colr = rand() % 6;
				}
				if (side == 0) {
					//Starting from point (0,0,0)
					uint64_t colr = rand() % 6;
					while (isFull(colr, white, red, blue, green, yellow, orange) == false) {
						colr = rand() % 6;
					}
					p0[0] = 0; p0[1] = 0; p0[2] = 0;
					p1[0] = 0; p1[1] = 0; p1[2] = 1;
					p2[0] = 1; p2[1] = 0; p2[2] = 1;
					p3[0] = 1; p3[1] = 0; p3[2] = 0;
					pixels[pxlsCreated] = Pixel(p0, p1, p2, p3);
					pixels[pxlsCreated].pxlColor = colr;
					increaseColor(colr, white, red, orange, yellow, green, blue);
					pxlsCreated++;
					for (uint64_t j = 1; j < 3; j++) {
						colr = rand() % 6;
						while (isFull(colr, white, red, blue, green, yellow, orange) == false) {
							colr = rand() % 6;
						}
						p0[0] = p0[0];
						p0[1] = p0[1];
						p0[2] = p0[2] + 1;
						p1[0] = p1[0];
						p1[1] = p1[1];
						p1[2] = p1[2] + 1;
						p2[0] = p2[0];
						p2[1] = p2[1];
						p2[2] = p2[2] + 1;
						p3[0] = p3[0];
						p3[1] = p3[1];
						p3[2] = p3[2] + 1;
						pixels[pxlsCreated] = Pixel(p0, p1, p2, p3);
						pixels[pxlsCreated].pxlColor = colr;
						increaseColor(colr, white, red, orange, yellow, green, blue);
						pxlsCreated++;
					}
					colr = rand() % 6;
					while (isFull(colr, white, red, blue, green, yellow, orange) == false) {
						colr = rand() % 6;
					}
					p0[0] = 1; p0[1] = 0; p0[2] = 0;
					p1[0] = 1; p1[1] = 0; p1[2] = 1;
					p2[0] = 2; p2[1] = 0; p2[2] = 1;
					p3[0] = 2; p3[1] = 0; p3[2] = 0;
					pixels[pxlsCreated] = Pixel(p0, p1, p2, p3);
					pixels[pxlsCreated].pxlColor = colr;
					increaseColor(colr, white, red, orange, yellow, green, blue);
					pxlsCreated++;
					for (uint64_t j = 1; j < 3; j++) {
						colr = rand() % 6;
						while (isFull(colr, white, red, blue, green, yellow, orange) == false) {
							colr = rand() % 6;
						}
						p0[0] = p0[0];
						p0[1] = p0[1];
						p0[2] = p0[2] + 1;
						p1[0] = p1[0];
						p1[1] = p1[1];
						p1[2] = p1[2] + 1;
						p2[0] = p2[0];
						p2[1] = p2[1];
						p2[2] = p2[2] + 1;
						p3[0] = p3[0];
						p3[1] = p3[1];
						p3[2] = p3[2] + 1;
						pixels[pxlsCreated] = Pixel(p0, p1, p2, p3);
						pixels[pxlsCreated].pxlColor = colr;
						increaseColor(colr, white, red, orange, yellow, green, blue);
						pxlsCreated++;
					}
					
					colr = rand() % 6;
					while (isFull(colr, white, red, blue, green, yellow, orange) == false) {
						colr = rand() % 6;
					}
					p0[0] = 2; p0[1] = 0; p0[2] = 0;
					p1[0] = 2; p1[1] = 0; p1[2] = 1;
					p2[0] = 3; p2[1] = 0; p2[2] = 1;
					p3[0] = 3; p3[1] = 0; p3[2] = 0;
					pixels[pxlsCreated] = Pixel(p0, p1, p2, p3);
					pixels[pxlsCreated].pxlColor = colr;
					increaseColor(colr, white, red, orange, yellow, green, blue);
					pxlsCreated++;
					for (uint64_t j = 1; j < 3; j++) {
						colr = rand() % 6;
						while (isFull(colr, white, red, blue, green, yellow, orange) == false) {
							colr = rand() % 6;
						}
						p0[0] = p0[0];
						p0[1] = p0[1];
						p0[2] = p0[2] + 1;
						p1[0] = p1[0];
						p1[1] = p1[1];
						p1[2] = p1[2] + 1;
						p2[0] = p2[0];
						p2[1] = p2[1];
						p2[2] = p2[2] + 1;
						p3[0] = p3[0];
						p3[1] = p3[1];
						p3[2] = p3[2] + 1;
						pixels[pxlsCreated] = Pixel(p0, p1, p2, p3);
						pixels[pxlsCreated].pxlColor = colr;
						increaseColor(colr, white, red, orange, yellow, green, blue);
						pxlsCreated++;
					}
					side++;
				}
				
				//Second Side
				else if (side == 1) {
					colr = rand() % 6;
					while (isFull(colr, white, red, blue, green, yellow, orange) == false) {
						colr = rand() % 6;
					}
					//Starting from point (0,0,3)
					p0[0] = 0; p0[1] = 0; p0[2] = 3;
					p1[0] = 0; p1[1] = 1; p1[2] = 3;
					p2[0] = 1; p2[1] = 1; p2[2] = 3;
					p3[0] = 1; p3[1] = 0; p3[2] = 3;
					pixels[pxlsCreated] = Pixel(p0, p1, p2, p3);
					pixels[pxlsCreated].pxlColor = colr;
					increaseColor(colr, white, red, orange, yellow, green, blue);
					pixels[pxlsCreated].fixId();
					pxlsCreated++;

					//Complete Side
					//Complete Column
					for (uint64_t j = 1; j < 3; j++) {
						colr = rand() % 6;
						while (isFull(colr, white, red, blue, green, yellow, orange) == false) {
							colr = rand() % 6;
						}
						p0[0] = p0[0];
						p0[1] = p0[1] + 1;
						p0[2] = p0[2];
						p1[0] = p1[0];
						p1[1] = p1[1] + 1;
						p1[2] = p1[2];
						p2[0] = p2[0];
						p2[1] = p2[1] + 1;
						p2[2] = p2[2];
						p3[0] = p3[0];
						p3[1] = p3[1] + 1;
						p3[2] = p3[2];
						pixels[pxlsCreated] = Pixel(p0, p1, p2, p3);
						pixels[pxlsCreated].pxlColor = colr;
						increaseColor(colr, white, red, orange, yellow, green, blue);
						pxlsCreated++;
					}
					colr = rand() % 6;
					while (isFull(colr, white, red, blue, green, yellow, orange) == false) {
						colr = rand() % 6;
					}
					p0[0] = 1; p0[1] = 0; p0[2] = 3;
					p1[0] = 1; p1[1] = 1; p1[2] = 3;
					p2[0] = 2; p2[1] = 1; p2[2] = 3;
					p3[0] = 2; p3[1] = 0; p3[2] = 3;
					pixels[pxlsCreated] = Pixel(p0, p1, p2, p3);
					pixels[pxlsCreated].pxlColor = colr;
					increaseColor(colr, white, red, orange, yellow, green, blue);
					pxlsCreated++;
					for (uint64_t j = 1; j < 3; j++) {
						colr = rand() % 6;
						while (isFull(colr, white, red, blue, green, yellow, orange) == false) {
							colr = rand() % 6;
						}
						p0[0] = p0[0];
						p0[1] = p0[1] + 1;
						p0[2] = p0[2];
						p1[0] = p1[0];
						p1[1] = p1[1] + 1;
						p1[2] = p1[2];
						p2[0] = p2[0];
						p2[1] = p2[1] + 1;
						p2[2] = p2[2];
						p3[0] = p3[0];
						p3[1] = p3[1] + 1;
						p3[2] = p3[2];
						pixels[pxlsCreated] = Pixel(p0, p1, p2, p3);
						pixels[pxlsCreated].pxlColor = colr;
						increaseColor(colr, white, red, orange, yellow, green, blue);
						pxlsCreated++;
					}
					colr = rand() % 6;
					while (isFull(colr, white, red, blue, green, yellow, orange) == false) {
						colr = rand() % 6;
					}
					p0[0] = 2; p0[1] = 0; p0[2] = 3;
					p1[0] = 2; p1[1] = 1; p1[2] = 3;
					p2[0] = 3; p2[1] = 1; p2[2] = 3;
					p3[0] = 3; p3[1] = 0; p3[2] = 3;
					for (uint64_t j = 1; j < 3; j++) {
						colr = rand() % 6;
						while (isFull(colr, white, red, blue, green, yellow, orange) == false) {
							colr = rand() % 6;
						}
						p0[0] = p0[0];
						p0[1] = p0[1] + 1;
						p0[2] = p0[2];
						p1[0] = p1[0];
						p1[1] = p1[1] + 1;
						p1[2] = p1[2];
						p2[0] = p2[0];
						p2[1] = p2[1] + 1;
						p2[2] = p2[2];
						p3[0] = p3[0];
						p3[1] = p3[1] + 1;
						p3[2] = p3[2];
						pixels[pxlsCreated] = Pixel(p0, p1, p2, p3);
						pixels[pxlsCreated].pxlColor = colr;
						increaseColor(colr, white, red, orange, yellow, green, blue);
						pxlsCreated++;
					}
					side++;
				}
				else if (side == 2) {
					//Starting from point (3,3,3)
					colr = rand() % 6;
					while (isFull(colr, white, red, blue, green, yellow, orange) == false) {
						colr = rand() % 6;
					}
					p0[0] = 3; p0[1] = 3; p0[2]= 3;
					p1[0] = 3; p1[1] = 3; p1[2] = 2;
					p2[0] = 2; p2[1] = 3; p2[2] = 2; 
					p3[0] = 2; p3[1] = 3; p3[2] = 3;
					pixels[pxlsCreated] = Pixel(p0, p1, p2, p3);
					pixels[pxlsCreated].pxlColor = colr;
					increaseColor(colr, white, red, orange, yellow, green, blue);
					pxlsCreated++;
					for (uint64_t j = 1; j < 3; j++) {
						colr = rand() % 6;
						while (isFull(colr, white, red, blue, green, yellow, orange) == false) {
							colr = rand() % 6;
						}
						p0[0] = p0[0];
						p0[1] = p0[1];
						p0[2] = p0[2] - 1;
						p1[0] = p1[0];
						p1[1] = p1[1];
						p1[2] = p1[2] - 1;
						p2[0] = p2[0];
						p2[1] = p2[1];
						p2[2] = p2[2] - 1;
						p3[0] = p3[0];
						p3[1] = p3[1];
						p3[2] = p3[2] - 1;
						pixels[pxlsCreated] = Pixel(p0, p1, p2, p3);
						pixels[pxlsCreated].pxlColor = colr;
						increaseColor(colr, white, red, orange, yellow, green, blue);
						pxlsCreated++;
					}
					colr = rand() % 6;
					while (isFull(colr, white, red, blue, green, yellow, orange) == false) {
						colr = rand() % 6;
					}
					p0[0] = 2; p0[1] = 3; p0[2] = 3;
					p1[0] = 2; p1[1] = 3; p1[2] = 2;
					p2[0] = 1; p2[1] = 3; p2[2] = 2;
					p3[0] = 1; p3[1] = 3; p3[2] = 3;
					pixels[pxlsCreated] = Pixel(p0, p1, p2, p3);
					pixels[pxlsCreated].pxlColor = colr;
					increaseColor(colr, white, red, orange, yellow, green, blue);
					pxlsCreated++;
					for (uint64_t j = 1; j < 3; j++) {
						colr = rand() % 6;
						while (isFull(colr, white, red, blue, green, yellow, orange) == false) {
							colr = rand() % 6;
						}
						p0[0] = p0[0];
						p0[1] = p0[1];
						p0[2] = p0[2] - 1;
						p1[0] = p1[0];
						p1[1] = p1[1];
						p1[2] = p1[2] - 1;
						p2[0] = p2[0];
						p2[1] = p2[1];
						p2[2] = p2[2] - 1;
						p3[0] = p3[0];
						p3[1] = p3[1];
						p3[2] = p3[2] - 1;
						pixels[pxlsCreated] = Pixel(p0, p1, p2, p3);
						pixels[pxlsCreated].pxlColor = colr;
						increaseColor(colr, white, red, orange, yellow, green, blue);
						pxlsCreated++;
					}
					
					colr = rand() % 6;
					while (isFull(colr, white, red, blue, green, yellow, orange) == false) {
						colr = rand() % 6;
					}
					p0[0] = 1; p0[1] = 3; p0[2] = 3;
					p1[0] = 1; p1[1] = 3; p1[2] = 2;
					p2[0] = 0; p2[1] = 3; p2[2] = 2;
					p3[0] = 0; p3[1] = 3; p3[2] = 3;
					pixels[pxlsCreated] = Pixel(p0, p1, p2, p3);
					pixels[pxlsCreated].pxlColor = colr;
					increaseColor(colr, white, red, orange, yellow, green, blue);
					pxlsCreated++;
					for (uint64_t j = 1; j < 3; j++) {
						colr = rand() % 6;
						while (isFull(colr, white, red, blue, green, yellow, orange) == false) {
							colr = rand() % 6;
						}
						p0[0] = p0[0];
						p0[1] = p0[1];
						p0[2] = p0[2] - 1;
						p1[0] = p1[0];
						p1[1] = p1[1];
						p1[2] = p1[2] - 1;
						p2[0] = p2[0];
						p2[1] = p2[1];
						p2[2] = p2[2] - 1;
						p3[0] = p3[0];
						p3[1] = p3[1];
						p3[2] = p3[2] - 1;
						pixels[pxlsCreated] = Pixel(p0, p1, p2, p3);
						pixels[pxlsCreated].pxlColor = colr;
						increaseColor(colr, white, red, orange, yellow, green, blue);
						pxlsCreated++;
					}
					side++;
				}
				else if (side == 3) {
					colr = rand() % 6;
					while (isFull(colr, white, red, blue, green, yellow, orange) == false) {
						colr = rand() % 6;
					}
					//Starting from point (0,3,0)
					
					p0[0] = 0; p0[1] = 3; p0[2] = 0;
					p1[0] = 0; p1[1] = 2; p1[2] = 0;
					p2[0] = 1; p2[1] = 2; p2[2] = 0;
					p3[0] = 1; p3[1] = 3; p3[2] = 0;
					pixels[pxlsCreated] = Pixel(p0, p1, p2, p3);
					pixels[pxlsCreated].pxlColor = colr;
					increaseColor(colr, white, red, orange, yellow, green, blue);
					pxlsCreated++;
					for (uint64_t j = 1; j < 3; j++) {
						colr = rand() % 6;
						while (isFull(colr, white, red, blue, green, yellow, orange) == false) {
							colr = rand() % 6;
						}
						p0[0] = p0[0];
						p0[1] = p0[1] - 1;
						p0[2] = p0[2];
						p1[0] = p1[0];
						p1[1] = p1[1] - 1;
						p1[2] = p1[2];
						p2[0] = p2[0];
						p2[1] = p2[1] - 1;
						p2[2] = p2[2];
						p3[0] = p3[0];
						p3[1] = p3[1] - 1;
						p3[2] = p3[2];
						pixels[pxlsCreated] = Pixel(p0, p1, p2, p3);
						pixels[pxlsCreated].pxlColor = colr;
						increaseColor(colr, white, red, orange, yellow, green, blue);
						pxlsCreated++;
					}
					
					colr = rand() % 6;
					while (isFull(colr, white, red, blue, green, yellow, orange) == false) {
						colr = rand() % 6;
					}
					p0[0] = 1; p0[1] = 3; p0[2] = 0;
					p1[0] = 1; p1[1] = 2; p1[2] = 0;
					p2[0] = 2; p2[1] = 2; p2[2] = 0;
					p3[0] = 2; p3[1] = 3; p3[2] = 0;
					pixels[pxlsCreated] = Pixel(p0, p1, p2, p3);
					pixels[pxlsCreated].pxlColor = colr;
					increaseColor(colr, white, red, orange, yellow, green, blue);
					pxlsCreated++;
					for (uint64_t j = 1; j < 3; j++) {
						colr = rand() % 6;
						while (isFull(colr, white, red, blue, green, yellow, orange) == false) {
							colr = rand() % 6;
						}
						p0[0] = p0[0];
						p0[1] = p0[1] - 1;
						p0[2] = p0[2];
						p1[0] = p1[0];
						p1[1] = p1[1] - 1;
						p1[2] = p1[2];
						p2[0] = p2[0];
						p2[1] = p2[1] - 1;
						p2[2] = p2[2];
						p3[0] = p3[0];
						p3[1] = p3[1] - 1;
						p3[2] = p3[2];
						pixels[pxlsCreated] = Pixel(p0, p1, p2, p3);
						pixels[pxlsCreated].pxlColor = colr;
						increaseColor(colr, white, red, orange, yellow, green, blue);
						pxlsCreated++;
					}
					
					colr = rand() % 6;
					while (isFull(colr, white, red, blue, green, yellow, orange) == false) {
						colr = rand() % 6;
					}
					p0[0] = 2; p0[1] = 3; p0[2] = 0;
					p1[0] = 2; p1[1] = 2; p1[2] = 0;
					p2[0] = 3; p2[1] = 3; p2[2] = 0;
					p3[0] = 2; p3[1] = 2; p3[2] = 0;
					for (uint64_t j = 1; j < 3; j++) {
						colr = rand() % 6;
						while (isFull(colr, white, red, blue, green, yellow, orange) == false) {
							colr = rand() % 6;
						}
						p0[0] = p0[0];
						p0[1] = p0[1] - 1;
						p0[2] = p0[2];
						p1[0] = p1[0];
						p1[1] = p1[1] - 1;
						p1[2] = p1[2];
						p2[0] = p2[0];
						p2[1] = p2[1] - 1;
						p2[2] = p2[2];
						p3[0] = p3[0];
						p3[1] = p3[1] - 1;
						p3[2] = p3[2];
						pixels[pxlsCreated] = Pixel(p0, p1, p2, p3);
						pixels[pxlsCreated].pxlColor = colr;
						increaseColor(colr, white, red, orange, yellow, green, blue);
						pxlsCreated++;
					}
					side++;
				}
				else if (side == 4) {
					colr = rand() % 6;
					while (isFull(colr, white, red, blue, green, yellow, orange) == false) {
						colr = rand() % 6;
					}
					//Starting from point (0,3,0)
					
					p0[0] = 0; p0[1] = 3; p0[2] = 0;
					p1[0] = 0; p1[1] = 3; p1[2] = 1;
					p2[0] = 0; p2[1] = 2; p2[2] = 1;
					p3[0] = 0; p3[1] = 2; p3[2] = 0;
					pixels[pxlsCreated] = Pixel(p0, p1, p2, p3);
					pixels[pxlsCreated].pxlColor = colr;
					increaseColor(colr, white, red, orange, yellow, green, blue);
					pxlsCreated++;
					for (uint64_t j = 1; j < 3; j++) {
						colr = rand() % 6;
						while (isFull(colr, white, red, blue, green, yellow, orange) == false) {
							colr = rand() % 6;
						}
						p0[0] = p0[0];
						p0[1] = p0[1];
						p0[2] = p0[2] + 1;
						p1[0] = p1[0];
						p1[1] = p1[1];
						p1[2] = p1[2] + 1;
						p2[0] = p2[0];
						p2[1] = p2[1];
						p2[2] = p2[2] + 1;
						p3[0] = p3[0];
						p3[1] = p3[1];
						p3[2] = p3[2] + 1;
						pixels[pxlsCreated] = Pixel(p0, p1, p2, p3);
						pixels[pxlsCreated].pxlColor = colr;
						increaseColor(colr, white, red, orange, yellow, green, blue);
						pxlsCreated++;
					}
					
					colr = rand() % 6;
					while (isFull(colr, white, red, blue, green, yellow, orange) == false) {
						colr = rand() % 6;
					}
					p0[0] = 0; p0[1] = 2; p0[2] = 0;
					p1[0] = 0; p1[1] = 2; p1[2] = 1;
					p2[0] = 0; p2[1] = 1; p2[2] = 1;
					p3[0] = 0; p3[1] = 1; p3[2] = 0;
					pixels[pxlsCreated] = Pixel(p0, p1, p2, p3);
					pixels[pxlsCreated].pxlColor = colr;
					increaseColor(colr, white, red, orange, yellow, green, blue);
					pxlsCreated++;
					for (uint64_t j = 1; j < 3; j++) {
						colr = rand() % 6;
						while (isFull(colr, white, red, blue, green, yellow, orange) == false) {
							colr = rand() % 6;
						}
						p0[0] = p0[0];
						p0[1] = p0[1];
						p0[2] = p0[2] + 1;
						p1[0] = p1[0];
						p1[1] = p1[1];
						p1[2] = p1[2] + 1;
						p2[0] = p2[0];
						p2[1] = p2[1];
						p2[2] = p2[2] + 1;
						p3[0] = p3[0];
						p3[1] = p3[1];
						p3[2] = p3[2] + 1;
						pixels[pxlsCreated] = Pixel(p0, p1, p2, p3);
						pixels[pxlsCreated].pxlColor = colr;
						increaseColor(colr, white, red, orange, yellow, green, blue);
						pxlsCreated++;
					}
					
					colr = rand() % 6;
					while (isFull(colr, white, red, blue, green, yellow, orange) == false) {
						colr = rand() % 6;
					}
					p0[0] = 0; p0[1] = 1; p0[2] = 0;
					p1[0] = 0; p1[1] = 1; p1[2] = 1;
					p2[0] = 0; p2[1] = 0; p2[2] = 1;
					p3[0] = 0; p3[1] = 0; p3[2] = 0;
					pixels[pxlsCreated] = Pixel(p0, p1, p2, p3);
					pixels[pxlsCreated].pxlColor = colr;
					increaseColor(colr, white, red, orange, yellow, green, blue);
					pxlsCreated++;
					for (uint64_t j = 1; j < 3; j++) {
						colr = rand() % 6;
						while (isFull(colr, white, red, blue, green, yellow, orange) == false) {
							colr = rand() % 6;
						}
						p0[0] = p0[0];
						p0[1] = p0[1];
						p0[2] = p0[2] + 1;
						p1[0] = p1[0];
						p1[1] = p1[1];
						p1[2] = p1[2] + 1;
						p2[0] = p2[0];
						p2[1] = p2[1];
						p2[2] = p2[2] + 1;
						p3[0] = p3[0];
						p3[1] = p3[1];
						p3[2] = p3[2] + 1;
						pixels[pxlsCreated] = Pixel(p0, p1, p2, p3);
						pixels[pxlsCreated].pxlColor = colr;
						increaseColor(colr, white, red, orange, yellow, green, blue);
						pxlsCreated++;
					}
				}
				else if (side == 5) {
					colr = rand() % 6;
					while (isFull(colr, white, red, blue, green, yellow, orange) == false) {
						colr = rand() % 6;
					}
					//Starting from point (3,0,0)
					
					p0[0] = 3; p0[1] = 0; p0[2] = 0;
					p1[0] = 3; p1[1] = 0; p1[2] = 1;
					p2[0] = 3; p2[1] = 1; p2[2] = 1;
					p3[0] = 3; p3[1] = 1; p3[2] = 0;
					pixels[pxlsCreated] = Pixel(p0, p1, p2, p3);
					pixels[pxlsCreated].pxlColor = colr;
					increaseColor(colr, white, red, orange, yellow, green, blue);
					pxlsCreated++;
					for (uint64_t j = 1; j < 3; j++) {
						colr = rand() % 6;
						while (isFull(colr, white, red, blue, green, yellow, orange) == false) {
							colr = rand() % 6;
						}
						p0[0] = p0[0];
						p0[1] = p0[1];
						p0[2] = p0[2] + 1;
						p1[0] = p1[0];
						p1[1] = p1[1];
						p1[2] = p1[2] + 1;
						p2[0] = p2[0];
						p2[1] = p2[1];
						p2[2] = p2[2] + 1;
						p3[0] = p3[0];
						p3[1] = p3[1];
						p3[2] = p3[2] + 1;
						pixels[pxlsCreated] = Pixel(p0, p1, p2, p3);
						pixels[pxlsCreated].pxlColor = colr;
						increaseColor(colr, white, red, orange, yellow, green, blue);
						pxlsCreated++;
					}
					
					colr = rand() % 6;
					while (isFull(colr, white, red, blue, green, yellow, orange) == false) {
						colr = rand() % 6;
					}
					p0[0] = 3; p0[1] = 1; p0[2] = 0;
					p1[0] = 3; p1[1] = 1; p1[2] = 1;
					p2[0] = 3; p2[1] = 2; p2[2] = 1;
					p3[0] = 3; p3[1] = 2; p3[2] = 0;
					pixels[pxlsCreated] = Pixel(p0, p1, p2, p3);
					pixels[pxlsCreated].pxlColor = colr;
					increaseColor(colr, white, red, orange, yellow, green, blue);
					pxlsCreated++;
					for (uint64_t j = 1; j < 3; j++) {
						colr = rand() % 6;
						while (isFull(colr, white, red, blue, green, yellow, orange) == false) {
							colr = rand() % 6;
						}
						p0[0] = p0[0];
						p0[1] = p0[1];
						p0[2] = p0[2] + 1;
						p1[0] = p1[0];
						p1[1] = p1[1];
						p1[2] = p1[2] + 1;
						p2[0] = p2[0];
						p2[1] = p2[1];
						p2[2] = p2[2] + 1;
						p3[0] = p3[0];
						p3[1] = p3[1];
						p3[2] = p3[2] + 1;
						pixels[pxlsCreated] = Pixel(p0, p1, p2, p3);
						pixels[pxlsCreated].pxlColor = colr;
						increaseColor(colr, white, red, orange, yellow, green, blue);
						pxlsCreated++;
					}
					
					colr = rand() % 6;
					while (isFull(colr, white, red, blue, green, yellow, orange) == false) {
						colr = rand() % 6;
					}
					p0[0] = 3; p0[1] = 2; p0[2] = 0;
					p1[0] = 3; p1[1] = 2; p1[2] = 1;
					p2[0] = 3; p2[1] = 3; p2[2] = 1;
					p3[0] = 3; p3[1] = 3; p3[2] = 0;
					pixels[pxlsCreated] = Pixel(p0, p1, p2, p3);
					pixels[pxlsCreated].pxlColor = colr;
					increaseColor(colr, white, red, orange, yellow, green, blue);
					pxlsCreated++;
					for (uint64_t j = 1; j < 3; j++) {
						colr = rand() % 6;
						while (isFull(colr, white, red, blue, green, yellow, orange) == false) {
							colr = rand() % 6;
						}
						p0[0] = p0[0];
						p0[1] = p0[1];
						p0[2] = p0[2] + 1;
						p1[0] = p1[0];
						p1[1] = p1[1];
						p1[2] = p1[2] + 1;
						p2[0] = p2[0];
						p2[1] = p2[1];
						p2[2] = p2[2] + 1;
						p3[0] = p3[0];
						p3[1] = p3[1];
						p3[2] = p3[2] + 1;
						pixels[pxlsCreated] = Pixel(p0, p1, p2, p3);
						pixels[pxlsCreated].pxlColor = colr;
						increaseColor(colr, white, red, orange, yellow, green, blue);
						pxlsCreated++;
					}
				}
				// <--->
			}
		};
		Pixel *searchPixel(Pixel start, uint64_t x, uint64_t y, uint64_t z) { //Dx, Dy, Dz from start (tbf)
			
			Pixel temp = start;
			temp.position[0][0] += x;
			temp.position[0][1] += y;
			temp.position[0][2] += z;
			temp.position[1][0] += x;
			temp.position[1][1] += y;
			temp.position[1][2] += z;
			temp.position[2][0] += x;
			temp.position[2][1] += y;
			temp.position[2][2] += z;
			temp.position[3][0] += x;
			temp.position[3][1] += y;
			temp.position[3][2] += z;
			
			for (uint64_t i = 0; i < 54; i++) {
				if (temp.idProducer() == pixels[i].idProducer()) {
					
					cout << &pixels[i];
					return &pixels[i];
				}
			}
			for (uint64_t i = 0; i < 54; i++) {
				if (temp.position ==pixels[i].position) {
					
					cout << &pixels[i];
					return &pixels[i];
				}
			}
		}
		
		Pixel* searchPixel(uint64_t id) {
			short post[4][3] = { 0 };
			uint64_t id2 = id;
			post[0][0] = id2 / 100000000000;
			id2 = id2 % 100000000000;
			post[0][1] = id2 / 10000000000;
			id2 = id2 % 10000000000;
			post[0][2] = id2 / 1000000000;
			id2 = id2 % 1000000000;
			post[1][0] = id2 / 100000000;
			id2 = id2 % 100000000;
			post[1][1] = id2 / 10000000;
			id2 = id2 % 10000000;
			post[1][2] = id2 / 1000000;
			id2 = id2 % 1000000;
			post[2][0] = id2 / 100000;
			id2 = id2 % 100000;
			post[2][1] = id2 / 10000;
			id2 = id2 % 10000;
			post[2][2] = id2 / 1000;
			id2 = id2 % 1000;
			post[3][0] = id2 / 100;
			id2 = id2 % 100;
			post[3][1] = id2 / 10;
			id2 = id2 % 10;
			post[3][2] = id2;
			for (uint64_t i = 0; i < 54; i++) {
				
				if (pixels[i].idProducer() == id) {
					return &pixels[i];
				}

			}
			for (uint64_t i = 0; i < 54; i++) {
			
				if (pixels[i].position == post) {
					return &pixels[i];
				}

			}
		}
		uint64_t searchPixel2(uint64_t id) {
			for (uint64_t i = 0; i < 54; i++) {
				if (pixels[i].idProducer() == id) {
					return i;
				}
			}
		}
		uint64_t searchPixel3(Pixel start, uint64_t x, uint64_t y, uint64_t z) { //Dx, Dy, Dz from start (tbf)
			Pixel temp(start);
			temp.position[0][0] += x;
			temp.position[0][1] += y;
			temp.position[0][2] += z;
			temp.position[1][0] += x;
			temp.position[1][1] += y;
			temp.position[1][2] += z;
			temp.position[2][0] += x;
			temp.position[2][1] += y;
			temp.position[2][2] += z;
			temp.position[3][0] += x;
			temp.position[3][1] += y;
			temp.position[3][2] += z;
			for (uint64_t i = 0; i < 54; i++) {
				if (temp.idProducer() == pixels[i].idProducer()) {
					return i;
				}
			}
		}
		Cube() {
			pixelCreator();
			cbCost = 0;
		}
		Cube(const Cube &c) {
			
			for (uint64_t i = 0; i < 54; i++) {
				pixels[i] = c.pixels[i];
			}
			cbCost = c.cbCost;
		}
		
		void printCube() {
			//
			uint64_t i = 0;
			while (i < 54) {
				cout << "Side: " << i / 9 << endl;
				cout << pixels[i + 2].pxlColor << " " << pixels[i + 5].pxlColor << " " << pixels[i + 8].pxlColor << endl;
				cout << pixels[i + 1].pxlColor << " " << pixels[i + 4].pxlColor << " " << pixels[i + 7].pxlColor << endl;
				cout << pixels[i].pxlColor << " " << pixels[i + 3].pxlColor << " " << pixels[i + 6].pxlColor << endl;
				i += 9;
			}
		}
		void rotateCube(Rotation* r) {
			rotateCubeSupport(r->noOfBlocks, r->lOrR, r->pxlIncluded);
		}
		void rotateCubeSupport(uint64_t noOfBlocks, uint64_t lOrR, Pixel *init) {
			if (lOrR == 0) { //Left / Up
				if (init->idProducer() == 100101201200) {
					if (noOfBlocks == 1) {
						Pixel* leftpx = searchPixel(*init, -1, 0, 0);
						Pixel* rightpx = searchPixel(*init, 1, 0, 0);
						//Save colors
						
						short leftclr = leftpx->pxlColor;
						short clr = init->pxlColor;
						short rightclr = rightpx->pxlColor;
						
						//Edit colors
						leftpx->editColor(searchPixel(300301311310)->pxlColor);
					
						init->editColor(searchPixel(310311321320)->pxlColor);
						
						rightpx->editColor(searchPixel(320321331330)->pxlColor);
						
						//
						leftpx = searchPixel(300301311310);
						init = searchPixel(310311321320);
						rightpx = searchPixel(320321331330);
						
						//
						leftpx->editColor(searchPixel(031030130131)->pxlColor);
						init->editColor(searchPixel(131130230231)->pxlColor);
						rightpx->editColor(searchPixel(231230330331)->pxlColor);
						//
						leftpx = searchPixel(031030130131);
						init = searchPixel(131130230231);
						rightpx = searchPixel(231230330331);
						//
						leftpx->editColor(searchPixel(030031021020)->pxlColor);
						init->editColor(searchPixel(020021011010)->pxlColor);
						rightpx->editColor(searchPixel(010011001000)->pxlColor);
						//
						leftpx = searchPixel(030031021020);
						init = searchPixel(020021011010);
						rightpx = searchPixel(010011001000);
						//
						leftpx->editColor(leftclr);
						init->editColor(clr);
						rightpx->editColor(rightclr);
						//A full rotation
					}
					else {
						//Same but for one more row
						Pixel* leftpx = searchPixel(*init, -1, 0, 0);
						Pixel* rightpx = searchPixel(*init, 1, 0, 0);
						Pixel* leftUPpx = searchPixel(*init, -1, 0, -1);
						Pixel* above = searchPixel(*init, 0, 0, -1);
						Pixel* rightUPpx = searchPixel(*init, 1, 0, -1);
						//Save colors
						uint64_t leftclr = leftpx->pxlColor;
						uint64_t clr = init->pxlColor;
						uint64_t rightclr = rightpx->pxlColor;
						uint64_t leftUPclr = leftUPpx->pxlColor;
						uint64_t aboveClr = above->pxlColor;
						uint64_t rightUPclr = rightUPpx->pxlColor;
						//Edit colors
						leftpx->editColor(searchPixel(300301311310)->pxlColor);
						init->editColor(searchPixel(310311321320)->pxlColor);
						rightpx->editColor(searchPixel(320321331330)->pxlColor);
						leftUPpx->editColor(searchPixel(301302312311)->pxlColor);
						above->editColor(searchPixel(311312322321)->pxlColor);
						rightUPpx->editColor(searchPixel(321322332331)->pxlColor);
						//
						leftpx = searchPixel(300301311310);
						init = searchPixel(310311321320);
						rightpx = searchPixel(320321331330);
						leftUPpx = searchPixel(301302312311);
						above = searchPixel(311312322321);
						rightUPpx = searchPixel(321322332331);
						//
						leftpx->editColor(searchPixel(031030130131)->pxlColor);
						init->editColor(searchPixel(131130230231)->pxlColor);
						rightpx->editColor(searchPixel(231230330331)->pxlColor);
						leftUPpx->editColor(searchPixel(032031131132)->pxlColor);
						above->editColor(searchPixel(132131231232)->pxlColor);
						rightUPpx->editColor(searchPixel(232231331332)->pxlColor);
						//
						leftpx = searchPixel(031030130131);
						init = searchPixel(131130230231);
						rightpx = searchPixel(231230330331);
						leftUPpx = searchPixel(032031131132);
						above = searchPixel(132131231232);
						rightUPpx = searchPixel(232231331332);
						//
						leftpx->editColor(searchPixel(030031021020)->pxlColor);
						init->editColor(searchPixel(020021011010)->pxlColor);
						rightpx->editColor(searchPixel(010011001000)->pxlColor);
						leftUPpx->editColor(searchPixel(031032022021)->pxlColor);
						above->editColor(searchPixel(021022012011)->pxlColor);
						rightUPpx->editColor(searchPixel(011012002001)->pxlColor);
						//
						leftpx = searchPixel(030031021020);
						init = searchPixel(020021011010);
						rightpx = searchPixel(010011001000);
						leftUPpx = searchPixel(031032022021);
						above = searchPixel(021022012011);
						rightUPpx = searchPixel(011012002001);
						//
						leftpx->editColor(leftclr);
						init->editColor(clr);
						rightpx->editColor(rightclr);
						leftUPpx->editColor(leftUPclr);
						above->editColor(aboveClr);
						rightUPpx->editColor(rightUPclr);
						//A full rotation
					}
				}
				if (init->idProducer() == 102103203202) {
					if (noOfBlocks == 1) {
						Pixel* leftpx = searchPixel(*init, -1, 0, 0);
						Pixel* rightpx = searchPixel(*init, 1, 0, 0);
						//Save colors
						uint64_t leftclr = leftpx->pxlColor;
						uint64_t clr = init->pxlColor;
						uint64_t rightclr = rightpx->pxlColor;
						//Edit colors
						leftpx->editColor(searchPixel(302303313312)->pxlColor);
						init->editColor(searchPixel(312313323322)->pxlColor);
						rightpx->editColor(searchPixel(322323333332)->pxlColor);
						//
						leftpx = searchPixel(302303313312);
						init = searchPixel(312313323322);
						rightpx = searchPixel(322323333332);
						//
						leftpx->editColor(searchPixel(033032132133)->pxlColor);
						init->editColor(searchPixel(133132232233)->pxlColor);
						rightpx->editColor(searchPixel(233232332333)->pxlColor);
						//
						leftpx = searchPixel(033032132133);
						init = searchPixel(133132232233);
						rightpx = searchPixel(233232332333);
						//
						leftpx->editColor(searchPixel(032033023022)->pxlColor);
						init->editColor(searchPixel(022023013012)->pxlColor);
						rightpx->editColor(searchPixel(012013003002)->pxlColor);
						//
						leftpx = searchPixel(032033023022);
						init = searchPixel(022023013012);
						rightpx = searchPixel(012013003002);
						//
						leftpx->editColor(leftclr);
						init->editColor(clr);
						rightpx->editColor(rightclr);
						//A full rotation
					}
					else {
						//Same but for one more row
						Pixel* leftpx = searchPixel(*init, -1, 0, 0);
						Pixel* rightpx = searchPixel(*init, 1, 0, 0);
						Pixel* leftUPpx = searchPixel(*init, -1, 0, -1);
						Pixel* above = searchPixel(*init, 0, 0, -1);
						Pixel* rightUPpx = searchPixel(*init, 1, 0, -1);
						//Save colors
						uint64_t leftclr = leftpx->pxlColor;
						uint64_t clr = init->pxlColor;
						uint64_t rightclr = rightpx->pxlColor;
						uint64_t leftUPclr = leftUPpx->pxlColor;
						uint64_t aboveClr = above->pxlColor;
						uint64_t rightUPclr = rightUPpx->pxlColor;
						//Edit colors
						leftpx->editColor(searchPixel(302303313312)->pxlColor);
						init->editColor(searchPixel(312313323322)->pxlColor);
						rightpx->editColor(searchPixel(322323333332)->pxlColor);
						leftUPpx->editColor(searchPixel(301302312311)->pxlColor);
						above->editColor(searchPixel(311312322321)->pxlColor);
						rightUPpx->editColor(searchPixel(321322332331)->pxlColor);
						//
						leftpx = searchPixel(302303313312);
						init = searchPixel(312313323322);
						rightpx = searchPixel(322323333332);
						leftUPpx = searchPixel(301302312311);
						above = searchPixel(311312322321);
						rightUPpx = searchPixel(321322332331);
						//
						leftpx->editColor(searchPixel(033032132133)->pxlColor);
						init->editColor(searchPixel(133132232233)->pxlColor);
						rightpx->editColor(searchPixel(233232332333)->pxlColor);
						leftUPpx->editColor(searchPixel(032031131132)->pxlColor);
						above->editColor(searchPixel(132131231232)->pxlColor);
						rightUPpx->editColor(searchPixel(232231331332)->pxlColor);
						//
						leftpx = searchPixel(033032132133);
						init = searchPixel(133132232233);
						rightpx = searchPixel(233232332333);
						leftUPpx = searchPixel(032031131132);
						above = searchPixel(132131231232);
						rightUPpx = searchPixel(232231331332);
						//
						leftpx->editColor(searchPixel(032033023022)->pxlColor);
						init->editColor(searchPixel(022023013012)->pxlColor);
						rightpx->editColor(searchPixel(012013003002)->pxlColor);
						leftUPpx->editColor(searchPixel(031032022021)->pxlColor);
						above->editColor(searchPixel(021022012011)->pxlColor);
						rightUPpx->editColor(searchPixel(011012002001)->pxlColor);
						//
						leftpx = searchPixel(032033023022);
						init = searchPixel(022023013012);
						rightpx = searchPixel(012013003002);
						leftUPpx = searchPixel(031032022021);
						above = searchPixel(021022012011);
						rightUPpx = searchPixel(011012002001);
						//
						leftpx->editColor(leftclr);
						init->editColor(clr);
						rightpx->editColor(rightclr);
						leftUPpx->editColor(leftUPclr);
						above->editColor(aboveClr);
						rightUPpx->editColor(rightUPclr);
						//A full rotation
					}
				}
				if (init->idProducer() == 001002102101) {
					if (noOfBlocks == 1) { //Up
						Pixel* leftpx = searchPixel(*init, 0, 0, -1);
						Pixel* rightpx = searchPixel(*init, 0, 0, 1);
						//Save colors
						uint64_t leftclr = leftpx->pxlColor;
						uint64_t clr = init->pxlColor;
						uint64_t rightclr = rightpx->pxlColor;
						//Edit colors
						leftpx->editColor(searchPixel(030130120020)->pxlColor);
						init->editColor(searchPixel(020120110010)->pxlColor);
						rightpx->editColor(searchPixel(010110100000)->pxlColor);
						//
						leftpx = searchPixel(030130120020);
						init = searchPixel(020120110010);
						rightpx = searchPixel(010110100000);
						//
						leftpx->editColor(searchPixel(033032132133)->pxlColor);
						init->editColor(searchPixel(032031131132)->pxlColor);
						rightpx->editColor(searchPixel(031030130131)->pxlColor);
						//
						leftpx = searchPixel(033032132133);
						init = searchPixel(032031131132);
						rightpx = searchPixel(031030130131); 
						//
						leftpx->editColor(searchPixel(003013113103)->pxlColor);
						init->editColor(searchPixel(013023123113)->pxlColor);
						rightpx->editColor(searchPixel(023033133123)->pxlColor);
						//
						leftpx = searchPixel(003013113103);
						init = searchPixel(013023123113);
						rightpx = searchPixel(023033133123);
						//
						leftpx->editColor(leftclr);
						init->editColor(clr);
						rightpx->editColor(rightclr);
						//A full rotation
					}
					else {
						Pixel* leftpx = searchPixel(*init, 0, 0, -1);
						Pixel* rightpx = searchPixel(*init, 0, 0, 1);
						Pixel* leftUPpx = searchPixel(*init, 0, 1, 1); //leftDOWN
						Pixel* above = searchPixel(*init, 0, 1, 0);
						Pixel* rightUPpx = searchPixel(*init, 0, 1, -1);
						//Save colors
						uint64_t leftclr = leftpx->pxlColor;
						uint64_t clr = init->pxlColor;
						uint64_t rightclr = rightpx->pxlColor;
						uint64_t leftUPclr = leftUPpx->pxlColor;
						uint64_t aboveClr = above->pxlColor;
						uint64_t rightUPclr = rightUPpx->pxlColor;
						//Edit colors
						leftpx->editColor(searchPixel(030130120020)->pxlColor);
						init->editColor(searchPixel(020120110010)->pxlColor);
						rightpx->editColor(searchPixel(010110100000)->pxlColor);
						leftUPpx->editColor(searchPixel(130230220120)->pxlColor);
						above->editColor(searchPixel(120220210110)->pxlColor);
						rightUPpx->editColor(searchPixel(110210200100)->pxlColor);
						//
						leftpx = searchPixel(030130120020);
						init = searchPixel(020120110010);
						rightpx = searchPixel(010110100000);
						leftUPpx = searchPixel(130230220120);
						above = searchPixel(120220210110);
						rightUPpx = searchPixel(110210200100);
						//
						leftpx->editColor(searchPixel(033032132133)->pxlColor);
						init->editColor(searchPixel(032031131132)->pxlColor);
						rightpx->editColor(searchPixel(031030130131)->pxlColor);
						leftUPpx->editColor(searchPixel(133132232233)->pxlColor);
						above->editColor(searchPixel(132131231232)->pxlColor);
						rightUPpx->editColor(searchPixel(131130230231)->pxlColor);
						//
						leftpx = searchPixel(033032132133);
						init = searchPixel(032031131132);
						rightpx = searchPixel(031030130131);
						leftUPpx = searchPixel(133132232233);
						above = searchPixel(132131231232);
						rightUPpx = searchPixel(131130230231);
						//
						leftpx->editColor(searchPixel(003013113103)->pxlColor);
						init->editColor(searchPixel(013023123113)->pxlColor);
						rightpx->editColor(searchPixel(023033133123)->pxlColor);
						leftUPpx->editColor(searchPixel(103113213203)->pxlColor);
						above->editColor(searchPixel(113123223213)->pxlColor);
						rightUPpx->editColor(searchPixel(123133233223)->pxlColor);
						//
						leftpx = searchPixel(003013113103);
						init = searchPixel(013023123113);
						rightpx = searchPixel(023033133123);
						leftUPpx = searchPixel(103113213203);
						above = searchPixel(113123223213);
						rightUPpx = searchPixel(123133233223);
						//
						leftpx->editColor(leftclr);
						init->editColor(clr);
						rightpx->editColor(rightclr);
						leftUPpx->editColor(leftUPclr);
						above->editColor(aboveClr);
						rightUPpx->editColor(rightUPclr);
						//A full rotation
					}
				}
				if (init->idProducer() == 201202302301) {
					if (noOfBlocks == 1) {
						Pixel* leftpx = searchPixel(*init, 0, 0, -1);
						Pixel* rightpx = searchPixel(*init, 0, 0, 1);
						//Save colors
						uint64_t leftclr = leftpx->pxlColor;
						uint64_t clr = init->pxlColor;
						uint64_t rightclr = rightpx->pxlColor;
						//Edit colors
						leftpx->editColor(searchPixel(230220320330)->pxlColor);
						init->editColor(searchPixel(220210310320)->pxlColor);
						rightpx->editColor(searchPixel(210200300310)->pxlColor);
						//
						leftpx = searchPixel(230220320330);
						init = searchPixel(220210310320);
						rightpx = searchPixel(210200300310);
						//
						leftpx->editColor(searchPixel(233232332333)->pxlColor);
						init->editColor(searchPixel(232231331332)->pxlColor);
						rightpx->editColor(searchPixel(231230330331)->pxlColor);
						//
						leftpx = searchPixel(233232332333);
						init = searchPixel(232231331332);
						rightpx = searchPixel(231230330331);
						//
						leftpx->editColor(searchPixel(203213313303)->pxlColor);
						init->editColor(searchPixel(213223323313)->pxlColor);
						rightpx->editColor(searchPixel(223233333323)->pxlColor);
						//
						leftpx = searchPixel(203213313303);
						init = searchPixel(213223323313);
						rightpx = searchPixel(223233333323);
						//
						leftpx->editColor(leftclr);
						init->editColor(clr);
						rightpx->editColor(rightclr);
						//A full rotation
					}
					else {
						Pixel* leftpx = searchPixel(*init, 0, 0, -1);
						Pixel* rightpx = searchPixel(*init, 0, 0, 1);
						//Save colors
						Pixel* leftUPpx = searchPixel(*init, 0, -1, 1); //leftDOWN
						Pixel* above = searchPixel(*init, 0, -1, 0);
						Pixel* rightUPpx = searchPixel(*init, 0, -1, -1);
						uint64_t leftclr = leftpx->pxlColor;
						uint64_t clr = init->pxlColor;
						uint64_t rightclr = rightpx->pxlColor;
						uint64_t leftUPclr = leftUPpx->pxlColor;
						uint64_t aboveClr = above->pxlColor;
						uint64_t rightUPclr = rightUPpx->pxlColor;
						//Edit colors
						leftpx->editColor(searchPixel(230220320330)->pxlColor);
						init->editColor(searchPixel(220210310320)->pxlColor);
						rightpx->editColor(searchPixel(210200300310)->pxlColor);
						leftUPpx->editColor(searchPixel(130120220230)->pxlColor);
						above->editColor(searchPixel(120110210220)->pxlColor);
						rightUPpx->editColor(searchPixel(110100200210)->pxlColor);
						//
						leftpx = searchPixel(230220320330);
						init = searchPixel(220210310320);
						rightpx = searchPixel(210200300310);
						leftUPpx = searchPixel(130120220230);
						above = searchPixel(120110210220);
						rightUPpx = searchPixel(110100200210);
						//
						leftpx->editColor(searchPixel(233232332333)->pxlColor);
						init->editColor(searchPixel(232231331332)->pxlColor);
						rightpx->editColor(searchPixel(231230330331)->pxlColor);
						leftUPpx->editColor(searchPixel(133132232233)->pxlColor);
						above->editColor(searchPixel(132131231232)->pxlColor);
						rightUPpx->editColor(searchPixel(131130230231)->pxlColor);
						//
						leftpx = searchPixel(233232332333);
						init = searchPixel(232231331332);
						rightpx = searchPixel(231230330331);
						leftUPpx = searchPixel(133132232233);
						above = searchPixel(132131231232);
						rightUPpx = searchPixel(131130230231);
						//
						leftpx->editColor(searchPixel(203213313303)->pxlColor);
						init->editColor(searchPixel(213223323313)->pxlColor);
						rightpx->editColor(searchPixel(223233333323)->pxlColor);
						leftUPpx->editColor(searchPixel(103113213203)->pxlColor);
						above->editColor(searchPixel(113123223213)->pxlColor);
						rightUPpx->editColor(searchPixel(123133233223)->pxlColor);
						//
						leftpx = searchPixel(203213313303);
						init = searchPixel(213223323313);
						rightpx = searchPixel(223233333323);
						leftUPpx = searchPixel(103113213203);
						above = searchPixel(113123223213);
						rightUPpx = searchPixel(123133233223);
						//
						leftpx->editColor(leftclr);
						init->editColor(clr);
						rightpx->editColor(rightclr);
						leftUPpx->editColor(leftUPclr);
						above->editColor(aboveClr);
						rightUPpx->editColor(rightUPclr);
						//A full rotation
					}
				}
				if (init->idProducer() == 123133233223) {
					if (noOfBlocks == 1) {
						Pixel* leftpx = searchPixel(*init, -1, 0, 0);
						Pixel* rightpx = searchPixel(*init, 1, 0, 0);
						//Save colors
						uint64_t leftclr = leftpx->pxlColor;
						uint64_t clr = init->pxlColor;
						uint64_t rightclr = rightpx->pxlColor;
						//Edit colors
						leftpx->editColor(searchPixel(320321331330)->pxlColor);
						init->editColor(searchPixel(321322332331)->pxlColor);
						rightpx->editColor(searchPixel(322323333332)->pxlColor);
						//
						leftpx = searchPixel(320321331330);
						init = searchPixel(321322332331);
						rightpx = searchPixel(322323333332);
						//
						leftpx->editColor(searchPixel(030020120130)->pxlColor);
						init->editColor(searchPixel(130120220230)->pxlColor);
						rightpx->editColor(searchPixel(230220320330)->pxlColor);
						//
						leftpx = searchPixel(030020120130);
						init = searchPixel(130120220230);
						rightpx = searchPixel(230220320330);
						//
						leftpx->editColor(searchPixel(032033023022)->pxlColor);
						init->editColor(searchPixel(031032022021)->pxlColor);
						rightpx->editColor(searchPixel(030031021020)->pxlColor);
						//
						leftpx = searchPixel(032033023022);
						init = searchPixel(031032022021);
						rightpx = searchPixel(030031021020);
						//
						leftpx->editColor(leftclr);
						init->editColor(clr);
						rightpx->editColor(rightclr);
						//A full rotation
					}
					else {
						Pixel* leftpx = searchPixel(*init, -1, 0, 0);
						Pixel* rightpx = searchPixel(*init, 1, 0, 0);
						//Save colors
						Pixel* leftUPpx = searchPixel(*init, -1, -1, 0); //leftDOWN
						Pixel* above = searchPixel(*init, -1, -1, 0);
						Pixel* rightUPpx = searchPixel(*init, -1, -1, 0);
						uint64_t leftclr = leftpx->pxlColor;
						uint64_t clr = init->pxlColor;
						uint64_t rightclr = rightpx->pxlColor;
						uint64_t leftUPclr = leftUPpx->pxlColor;
						uint64_t aboveClr = above->pxlColor;
						uint64_t rightUPclr = rightUPpx->pxlColor;
						//Edit colors
						leftpx->editColor(searchPixel(320321331330)->pxlColor);
						init->editColor(searchPixel(321322332331)->pxlColor);
						rightpx->editColor(searchPixel(322323333332)->pxlColor);
						leftUPpx->editColor(searchPixel(310311321320)->pxlColor);
						above->editColor(searchPixel(311312322321)->pxlColor);
						rightUPpx->editColor(searchPixel(312313323322)->pxlColor);
						//
						leftpx = searchPixel(320321331330);
						init = searchPixel(321322332331);
						rightpx = searchPixel(322323333332);
						leftUPpx = searchPixel(310311321320);
						above = searchPixel(311312322321);
						rightUPpx = searchPixel(312313323322);
						//
						leftpx->editColor(searchPixel(030020120130)->pxlColor);
						init->editColor(searchPixel(130120220230)->pxlColor);
						rightpx->editColor(searchPixel(230220320330)->pxlColor);
						leftUPpx->editColor(searchPixel(020010110120)->pxlColor);
						above->editColor(searchPixel(120110210220)->pxlColor);
						rightUPpx->editColor(searchPixel(220210310320)->pxlColor);
						//
						leftpx = searchPixel(030020120130);
						init = searchPixel(130120220230);
						rightpx = searchPixel(230220320330);
						leftUPpx = searchPixel(020010110120);
						above = searchPixel(120110210220);
						rightUPpx = searchPixel(220210310320);
						//
						leftpx->editColor(searchPixel(032033023022)->pxlColor);
						init->editColor(searchPixel(031032022021)->pxlColor);
						rightpx->editColor(searchPixel(030031021020)->pxlColor);
						leftUPpx->editColor(searchPixel(022023013012)->pxlColor);
						above->editColor(searchPixel(021022012011)->pxlColor);
						rightUPpx->editColor(searchPixel(020021011010)->pxlColor);
						//
						leftpx = searchPixel(032033023022);
						init = searchPixel(031032022021);
						rightpx = searchPixel(030031021020);
						leftUPpx = searchPixel(022023013012);
						above = searchPixel(021022012011);
						rightUPpx = searchPixel(020021011010);
						//
						leftpx->editColor(leftclr);
						init->editColor(clr);
						rightpx->editColor(rightclr);
						leftUPpx->editColor(leftUPclr);
						above->editColor(aboveClr);
						rightUPpx->editColor(rightUPclr);
						//A full rotation
					}
				}
				//  10/20 rotations: Now right/down directions
			}
			else {
				
					if (init->idProducer() == 100101201200) {
						if (noOfBlocks == 1) {
							Pixel* leftpx = searchPixel(*init, -1, 0, 0);
							Pixel* rightpx = searchPixel(*init, 1, 0, 0);
							//Save colors
							uint64_t leftclr = leftpx->pxlColor;
							uint64_t clr = init->pxlColor;
							uint64_t rightclr = rightpx->pxlColor;
							//Edit colors
							leftpx->editColor(searchPixel(030031021020)->pxlColor);
							init->editColor(searchPixel(020021011010)->pxlColor);
							rightpx->editColor(searchPixel(010011001000)->pxlColor);
							//
							leftpx = searchPixel(030031021020);
							init = searchPixel(020021011010);
							rightpx = searchPixel(010011001000);
							//
							leftpx->editColor(searchPixel(031030130131)->pxlColor);
							init->editColor(searchPixel(131130230231)->pxlColor);
							rightpx->editColor(searchPixel(231230330331)->pxlColor);
							//
							leftpx = searchPixel(031030130131);
							init = searchPixel(131130230231);
							rightpx = searchPixel(231230330331);
							//
							leftpx->editColor(searchPixel(300301311310)->pxlColor);
							init->editColor(searchPixel(310311321320)->pxlColor);
							rightpx->editColor(searchPixel(320321331330)->pxlColor);
							//
							leftpx = searchPixel(300301311310);
							init = searchPixel(310311321320);
							rightpx = searchPixel(320321331330);
							//
							
							leftpx->editColor(leftclr);
							init->editColor(clr);
							rightpx->editColor(rightclr);
							//A full rotation
						}
						else {
							//Same but for one more row
							Pixel* leftpx = searchPixel(*init, -1, 0, 0);
							Pixel* rightpx = searchPixel(*init, 1, 0, 0);
							Pixel* leftUPpx = searchPixel(*init, -1, 0, -1);
							Pixel* above = searchPixel(*init, 0, 0, -1);
							Pixel* rightUPpx = searchPixel(*init, 1, 0, -1);
							//Save colors
							uint64_t leftclr = leftpx->pxlColor;
							uint64_t clr = init->pxlColor;
							uint64_t rightclr = rightpx->pxlColor;
							uint64_t leftUPclr = leftUPpx->pxlColor;
							uint64_t aboveClr = above->pxlColor;
							uint64_t rightUPclr = rightUPpx->pxlColor;
							//Edit colors
							leftpx->editColor(searchPixel(030031021020)->pxlColor);
							init->editColor(searchPixel(020021011010)->pxlColor);
							rightpx->editColor(searchPixel(010011001000)->pxlColor);
							leftUPpx->editColor(searchPixel(031032022021)->pxlColor);
							above->editColor(searchPixel(021022012011)->pxlColor);
							rightUPpx->editColor(searchPixel(011012002001)->pxlColor);
							//
							leftpx = searchPixel(030031021020);
							init = searchPixel(020021011010);
							rightpx = searchPixel(010011001000);
							leftUPpx = searchPixel(031032022021);
							above = searchPixel(021022012011);
							rightUPpx = searchPixel(011012002001);
							//
							leftpx->editColor(searchPixel(031030130131)->pxlColor);
							init->editColor(searchPixel(131130230231)->pxlColor);
							rightpx->editColor(searchPixel(231230330331)->pxlColor);
							leftUPpx->editColor(searchPixel(032031131132)->pxlColor);
							above->editColor(searchPixel(132131231232)->pxlColor);
							rightUPpx->editColor(searchPixel(232231331332)->pxlColor);
							//
							leftpx = searchPixel(031030130131);
							init = searchPixel(131130230231);
							rightpx = searchPixel(231230330331);
							leftUPpx = searchPixel(032031131132);
							above = searchPixel(132131231232);
							rightUPpx = searchPixel(232231331332);
							//
							leftpx->editColor(searchPixel(300301311310)->pxlColor);
							init->editColor(searchPixel(310311321320)->pxlColor);
							rightpx->editColor(searchPixel(320321331330)->pxlColor);
							leftUPpx->editColor(searchPixel(301302312311)->pxlColor);
							above->editColor(searchPixel(311312322321)->pxlColor);
							rightUPpx->editColor(searchPixel(321322332331)->pxlColor);
							//
							leftpx = searchPixel(300301311310);
							init = searchPixel(310311321320);
							rightpx = searchPixel(320321331330);
							leftUPpx = searchPixel(301302312311);
							above = searchPixel(311312322321);
							rightUPpx = searchPixel(321322332331);
							//
							
							leftpx->editColor(leftclr);
							init->editColor(clr);
							rightpx->editColor(rightclr);
							leftUPpx->editColor(leftUPclr);
							above->editColor(aboveClr);
							rightUPpx->editColor(rightUPclr);
							//A full rotation
						}
					}
					if (init->idProducer() == 102103203202) {
						if (noOfBlocks == 1) {
							Pixel* leftpx = searchPixel(*init, -1, 0, 0);
							Pixel* rightpx = searchPixel(*init, 1, 0, 0);
							//Save colors
							uint64_t leftclr = leftpx->pxlColor;
							uint64_t clr = init->pxlColor;
							uint64_t rightclr = rightpx->pxlColor;
							//Edit colors
							leftpx->editColor(searchPixel(032033023022)->pxlColor);
							init->editColor(searchPixel(022023013012)->pxlColor);
							rightpx->editColor(searchPixel(012013003002)->pxlColor);
							//
							leftpx = searchPixel(032033023022);
							init = searchPixel(022023013012);
							rightpx = searchPixel(012013003002);
							//
							leftpx->editColor(searchPixel(033032132133)->pxlColor);
							init->editColor(searchPixel(133132232233)->pxlColor);
							rightpx->editColor(searchPixel(233232332333)->pxlColor);
							//
							leftpx = searchPixel(033032132133);
							init = searchPixel(133132232233);
							rightpx = searchPixel(233232332333);
							//
							leftpx->editColor(searchPixel(302303313312)->pxlColor);
							init->editColor(searchPixel(312313323322)->pxlColor);
							rightpx->editColor(searchPixel(322323333332)->pxlColor);
							//
							leftpx = searchPixel(302303313312);
							init = searchPixel(312313323322);
							rightpx = searchPixel(322323333332);
							//							
							leftpx->editColor(leftclr);
							init->editColor(clr);
							rightpx->editColor(rightclr);
							//A full rotation
						}
						else {
							//Same but for one more row
							Pixel* leftpx = searchPixel(*init, -1, 0, 0);
							Pixel* rightpx = searchPixel(*init, 1, 0, 0);
							Pixel* leftUPpx = searchPixel(*init, -1, 0, -1);
							Pixel* above = searchPixel(*init, 0, 0, -1);
							Pixel* rightUPpx = searchPixel(*init, 1, 0, -1);
							//Save colors
							uint64_t leftclr = leftpx->pxlColor;
							uint64_t clr = init->pxlColor;
							uint64_t rightclr = rightpx->pxlColor;
							uint64_t leftUPclr = leftUPpx->pxlColor;
							uint64_t aboveClr = above->pxlColor;
							uint64_t rightUPclr = rightUPpx->pxlColor;
							//Edit colors
							leftpx->editColor(searchPixel(032033023022)->pxlColor);
							init->editColor(searchPixel(022023013012)->pxlColor);
							rightpx->editColor(searchPixel(012013003002)->pxlColor);
							leftUPpx->editColor(searchPixel(031032022021)->pxlColor);
							above->editColor(searchPixel(021022012011)->pxlColor);
							rightUPpx->editColor(searchPixel(011012002001)->pxlColor);
							//
							leftpx = searchPixel(032033023022);
							init = searchPixel(022023013012);
							rightpx = searchPixel(012013003002);
							leftUPpx = searchPixel(031032022021);
							above = searchPixel(021022012011);
							rightUPpx = searchPixel(011012002001);
							//
							leftpx->editColor(searchPixel(033032132133)->pxlColor);
							init->editColor(searchPixel(133132232233)->pxlColor);
							rightpx->editColor(searchPixel(233232332333)->pxlColor);
							leftUPpx->editColor(searchPixel(032031131132)->pxlColor);
							above->editColor(searchPixel(132131231232)->pxlColor);
							rightUPpx->editColor(searchPixel(232231331332)->pxlColor);
							//
							leftpx = searchPixel(033032132133);
							init = searchPixel(133132232233);
							rightpx = searchPixel(233232332333);
							leftUPpx = searchPixel(032031131132);
							above = searchPixel(132131231232);
							rightUPpx = searchPixel(232231331332);
							//
							leftpx->editColor(searchPixel(302303313312)->pxlColor);
							init->editColor(searchPixel(312313323322)->pxlColor);
							rightpx->editColor(searchPixel(322323333332)->pxlColor);
							leftUPpx->editColor(searchPixel(301302312311)->pxlColor);
							above->editColor(searchPixel(311312322321)->pxlColor);
							rightUPpx->editColor(searchPixel(321322332331)->pxlColor);
							//
							leftpx = searchPixel(302303313312);
							init = searchPixel(312313323322);
							rightpx = searchPixel(322323333332);
							leftUPpx = searchPixel(301302312311);
							above = searchPixel(311312322321);
							rightUPpx = searchPixel(321322332331);
							//
							//
							leftpx->editColor(leftclr);
							init->editColor(clr);
							rightpx->editColor(rightclr);
							leftUPpx->editColor(leftUPclr);
							above->editColor(aboveClr);
							rightUPpx->editColor(rightUPclr);
							//A full rotation
						}
					}
					if (init->idProducer() == 001002102101) {
						if (noOfBlocks == 1) { //Up
							Pixel* leftpx = searchPixel(*init, 0, 0, -1);
							Pixel* rightpx = searchPixel(*init, 0, 0, 1);
							//Save colors
							uint64_t leftclr = leftpx->pxlColor;
							uint64_t clr = init->pxlColor;
							uint64_t rightclr = rightpx->pxlColor;
							//Edit colors
							leftpx->editColor(searchPixel(003013113103)->pxlColor);
							init->editColor(searchPixel(013023123113)->pxlColor);
							rightpx->editColor(searchPixel(023033133123)->pxlColor);
							//
							leftpx = searchPixel(003013113103);
							init = searchPixel(013023123113);
							rightpx = searchPixel(023033133123);
							//
							leftpx->editColor(searchPixel(033032132133)->pxlColor);
							init->editColor(searchPixel(032031131132)->pxlColor);
							rightpx->editColor(searchPixel(031030130131)->pxlColor);
							//
							leftpx = searchPixel(033032132133);
							init = searchPixel(032031131132);
							rightpx = searchPixel(031030130131);
							//
							leftpx->editColor(searchPixel(030130120020)->pxlColor);
							init->editColor(searchPixel(020120110010)->pxlColor);
							rightpx->editColor(searchPixel(010110100000)->pxlColor);
							//
							leftpx = searchPixel(030130120020);
							init = searchPixel(020120110010);
							rightpx = searchPixel(010110100000);
							//
							
							
							leftpx->editColor(leftclr);
							init->editColor(clr);
							rightpx->editColor(rightclr);
							//A full rotation
						}
						else {
							Pixel* leftpx = searchPixel(*init, 0, 0, -1);
							Pixel* rightpx = searchPixel(*init, 0, 0, 1);
							Pixel* leftUPpx = searchPixel(*init, 0, 1, 1); //leftDOWN
							Pixel* above = searchPixel(*init, 0, 1, 0);
							Pixel* rightUPpx = searchPixel(*init, 0, 1, -1);
							//Save colors
							uint64_t leftclr = leftpx->pxlColor;
							uint64_t clr = init->pxlColor;
							uint64_t rightclr = rightpx->pxlColor;
							uint64_t leftUPclr = leftUPpx->pxlColor;
							uint64_t aboveClr = above->pxlColor;
							uint64_t rightUPclr = rightUPpx->pxlColor;
							//Edit colors
							leftpx->editColor(searchPixel(003013113103)->pxlColor);
							init->editColor(searchPixel(013023123113)->pxlColor);
							rightpx->editColor(searchPixel(023033133123)->pxlColor);
							leftUPpx->editColor(searchPixel(103113213203)->pxlColor);
							above->editColor(searchPixel(113123223213)->pxlColor);
							rightUPpx->editColor(searchPixel(123133233223)->pxlColor);
							//
							leftpx = searchPixel(003013113103);
							init = searchPixel(013023123113);
							rightpx = searchPixel(023033133123);
							leftUPpx = searchPixel(103113213203);
							above = searchPixel(113123223213);
							rightUPpx = searchPixel(123133233223);
							//
							leftpx->editColor(searchPixel(033032132133)->pxlColor);
							init->editColor(searchPixel(032031131132)->pxlColor);
							rightpx->editColor(searchPixel(031030130131)->pxlColor);
							leftUPpx->editColor(searchPixel(133132232233)->pxlColor);
							above->editColor(searchPixel(132131231232)->pxlColor);
							rightUPpx->editColor(searchPixel(131130230231)->pxlColor);
							//
							leftpx = searchPixel(033032132133);
							init = searchPixel(032031131132);
							rightpx = searchPixel(031030130131);
							leftUPpx = searchPixel(133132232233);
							above = searchPixel(132131231232);
							rightUPpx = searchPixel(131130230231);
							//
							leftpx->editColor(searchPixel(030130120020)->pxlColor);
							init->editColor(searchPixel(020120110010)->pxlColor);
							rightpx->editColor(searchPixel(010110100000)->pxlColor);
							leftUPpx->editColor(searchPixel(130230220120)->pxlColor);
							above->editColor(searchPixel(120220210110)->pxlColor);
							rightUPpx->editColor(searchPixel(110210200100)->pxlColor);
							//
							leftpx = searchPixel(030130120020);
							init = searchPixel(020120110010);
							rightpx = searchPixel(010110100000);
							leftUPpx = searchPixel(130230220120);
							above = searchPixel(120220210110);
							rightUPpx = searchPixel(110210200100);
							//
							
							
							leftpx->editColor(leftclr);
							init->editColor(clr);
							rightpx->editColor(rightclr);
							leftUPpx->editColor(leftUPclr);
							above->editColor(aboveClr);
							rightUPpx->editColor(rightUPclr);
							//A full rotation
						}
					} //here
					if (init->idProducer() == 201202302301) {
						if (noOfBlocks == 1) {
							Pixel* leftpx = searchPixel(*init, 0, 0, -1);
							Pixel* rightpx = searchPixel(*init, 0, 0, 1);
							//Save colors
							uint64_t leftclr = leftpx->pxlColor;
							uint64_t clr = init->pxlColor;
							uint64_t rightclr = rightpx->pxlColor;
							//Edit colors
							leftpx->editColor(searchPixel(203213313303)->pxlColor);
							init->editColor(searchPixel(213223323313)->pxlColor);
							rightpx->editColor(searchPixel(223233333323)->pxlColor);
							//
							leftpx = searchPixel(203213313303);
							init = searchPixel(213223323313);
							rightpx = searchPixel(223233333323);
							//
							leftpx->editColor(searchPixel(233232332333)->pxlColor);
							init->editColor(searchPixel(232231331332)->pxlColor);
							rightpx->editColor(searchPixel(231230330331)->pxlColor);
							//
							leftpx = searchPixel(233232332333);
							init = searchPixel(232231331332);
							rightpx = searchPixel(231230330331);
							//
							leftpx->editColor(searchPixel(230220320330)->pxlColor);
							init->editColor(searchPixel(220210310320)->pxlColor);
							rightpx->editColor(searchPixel(210200300310)->pxlColor);
							//
							leftpx = searchPixel(230220320330);
							init = searchPixel(220210310320);
							rightpx = searchPixel(210200300310);
							//
							
							//
							leftpx->editColor(leftclr);
							init->editColor(clr);
							rightpx->editColor(rightclr);
							//A full rotation
						}
						else {
							Pixel* leftpx = searchPixel(*init, 0, 0, -1);
							Pixel* rightpx = searchPixel(*init, 0, 0, 1);
							//Save colors
							Pixel* leftUPpx = searchPixel(*init, 0, -1, 1); //leftDOWN
							Pixel* above = searchPixel(*init, 0, -1, 0);
							Pixel* rightUPpx = searchPixel(*init, 0, -1, -1);
							uint64_t leftclr = leftpx->pxlColor;
							uint64_t clr = init->pxlColor;
							uint64_t rightclr = rightpx->pxlColor;
							uint64_t leftUPclr = leftUPpx->pxlColor;
							uint64_t aboveClr = above->pxlColor;
							uint64_t rightUPclr = rightUPpx->pxlColor;
							//Edit colors
							leftpx->editColor(searchPixel(203213313303)->pxlColor);
							init->editColor(searchPixel(213223323313)->pxlColor);
							rightpx->editColor(searchPixel(223233333323)->pxlColor);
							leftUPpx->editColor(searchPixel(103113213203)->pxlColor);
							above->editColor(searchPixel(113123223213)->pxlColor);
							rightUPpx->editColor(searchPixel(123133233223)->pxlColor);
							//
							leftpx = searchPixel(203213313303);
							init = searchPixel(213223323313);
							rightpx = searchPixel(223233333323);
							leftUPpx = searchPixel(103113213203);
							above = searchPixel(113123223213);
							rightUPpx = searchPixel(123133233223);
							//
							leftpx->editColor(searchPixel(233232332333)->pxlColor);
							init->editColor(searchPixel(232231331332)->pxlColor);
							rightpx->editColor(searchPixel(231230330331)->pxlColor);
							leftUPpx->editColor(searchPixel(133132232233)->pxlColor);
							above->editColor(searchPixel(132131231232)->pxlColor);
							rightUPpx->editColor(searchPixel(131130230231)->pxlColor);
							//
							leftpx = searchPixel(233232332333);
							init = searchPixel(232231331332);
							rightpx = searchPixel(231230330331);
							leftUPpx = searchPixel(133132232233);
							above = searchPixel(132131231232);
							rightUPpx = searchPixel(131130230231);
							//
							leftpx->editColor(searchPixel(230220320330)->pxlColor);
							init->editColor(searchPixel(220210310320)->pxlColor);
							rightpx->editColor(searchPixel(210200300310)->pxlColor);
							leftUPpx->editColor(searchPixel(130120220230)->pxlColor);
							above->editColor(searchPixel(120110210220)->pxlColor);
							rightUPpx->editColor(searchPixel(110100200210)->pxlColor);
							//
							leftpx = searchPixel(230220320330);
							init = searchPixel(220210310320);
							rightpx = searchPixel(210200300310);
							leftUPpx = searchPixel(130120220230);
							above = searchPixel(120110210220);
							rightUPpx = searchPixel(110100200210);
							//
			
							leftpx->editColor(leftclr);
							init->editColor(clr);
							rightpx->editColor(rightclr);
							leftUPpx->editColor(leftUPclr);
							above->editColor(aboveClr);
							rightUPpx->editColor(rightUPclr);
							//A full rotation
						}
					}
					if (init->idProducer() == 123133233223) {
						if (noOfBlocks == 1) {
							Pixel* leftpx = searchPixel(*init, -1, 0, 0);
							Pixel* rightpx = searchPixel(*init, 1, 0, 0);
							//Save colors
							uint64_t leftclr = leftpx->pxlColor;
							uint64_t clr = init->pxlColor;
							uint64_t rightclr = rightpx->pxlColor;
							//Edit colors
							leftpx->editColor(searchPixel(032033023022)->pxlColor);
							init->editColor(searchPixel(031032022021)->pxlColor);
							rightpx->editColor(searchPixel(030031021020)->pxlColor);
							//
							leftpx = searchPixel(032033023022);
							init = searchPixel(031032022021);
							rightpx = searchPixel(030031021020);
							//
							leftpx->editColor(searchPixel(030020120130)->pxlColor);
							init->editColor(searchPixel(130120220230)->pxlColor);
							rightpx->editColor(searchPixel(230220320330)->pxlColor);
							//
							leftpx = searchPixel(030020120130);
							init = searchPixel(130120220230);
							rightpx = searchPixel(230220320330);
							//
							leftpx->editColor(searchPixel(320321331330)->pxlColor);
							init->editColor(searchPixel(321322332331)->pxlColor);
							rightpx->editColor(searchPixel(322323333332)->pxlColor);
							//
							leftpx = searchPixel(320321331330);
							init = searchPixel(321322332331);
							rightpx = searchPixel(322323333332);
							//
							//
							leftpx->editColor(leftclr);
							init->editColor(clr);
							rightpx->editColor(rightclr);
							//A full rotation
						}
						else {
							Pixel* leftpx = searchPixel(*init, -1, 0, 0);
							Pixel* rightpx = searchPixel(*init, 1, 0, 0);
							//Save colors
							Pixel* leftUPpx = searchPixel(*init, -1, -1, 0); //leftDOWN
							Pixel* above = searchPixel(*init, -1, -1, 0);
							Pixel* rightUPpx = searchPixel(*init, -1, -1, 0);
							uint64_t leftclr = leftpx->pxlColor;
							uint64_t clr = init->pxlColor;
							uint64_t rightclr = rightpx->pxlColor;
							uint64_t leftUPclr = leftUPpx->pxlColor;
							uint64_t aboveClr = above->pxlColor;
							uint64_t rightUPclr = rightUPpx->pxlColor;
							//Edit colors
							leftpx->editColor(searchPixel(032033023022)->pxlColor);
							init->editColor(searchPixel(031032022021)->pxlColor);
							rightpx->editColor(searchPixel(030031021020)->pxlColor);
							leftUPpx->editColor(searchPixel(022023013012)->pxlColor);
							above->editColor(searchPixel(021022012011)->pxlColor);
							rightUPpx->editColor(searchPixel(020021011010)->pxlColor);
							//
							leftpx = searchPixel(032033023022);
							init = searchPixel(031032022021);
							rightpx = searchPixel(030031021020);
							leftUPpx = searchPixel(022023013012);
							above = searchPixel(021022012011);
							rightUPpx = searchPixel(020021011010);
							//
							leftpx->editColor(searchPixel(030020120130)->pxlColor);
							init->editColor(searchPixel(130120220230)->pxlColor);
							rightpx->editColor(searchPixel(230220320330)->pxlColor);
							leftUPpx->editColor(searchPixel(020010110120)->pxlColor);
							above->editColor(searchPixel(120110210220)->pxlColor);
							rightUPpx->editColor(searchPixel(220210310320)->pxlColor);
							//
							leftpx = searchPixel(030020120130);
							init = searchPixel(130120220230);
							rightpx = searchPixel(230220320330);
							leftUPpx = searchPixel(020010110120);
							above = searchPixel(120110210220);
							rightUPpx = searchPixel(220210310320);
							//
							leftpx->editColor(searchPixel(320321331330)->pxlColor);
							init->editColor(searchPixel(321322332331)->pxlColor);
							rightpx->editColor(searchPixel(322323333332)->pxlColor);
							leftUPpx->editColor(searchPixel(310311321320)->pxlColor);
							above->editColor(searchPixel(311312322321)->pxlColor);
							rightUPpx->editColor(searchPixel(312313323322)->pxlColor);
							//
							leftpx = searchPixel(320321331330);
							init = searchPixel(321322332331);
							rightpx = searchPixel(322323333332);
							leftUPpx = searchPixel(310311321320);
							above = searchPixel(311312322321);
							rightUPpx = searchPixel(312313323322);
							//
														
							//
							leftpx->editColor(leftclr);
							init->editColor(clr);
							rightpx->editColor(rightclr);
							leftUPpx->editColor(leftUPclr);
							above->editColor(aboveClr);
							rightUPpx->editColor(rightUPclr);
							//A full rotation
						}
					}
			
				

			}
		} //lOrR = uOrD
};

Cube CubeRotator(Cube cb, Rotation r) {
	Cube n(cb);
	Pixel pixels[54];
	for (uint64_t i = 0; i < 54; i++) {
		pixels[i] = n.pixels[i];
	}
	uint64_t lOrR = r.lOrR;
	uint64_t numero = r.numero;
	uint64_t noOfBlocks = r.noOfBlocks;
	Pixel init = n.pixels[r.numero];
	if (lOrR == 0) { //Left / Up
		if (pixels[numero].idProducer() == 100101201200) {
			if (noOfBlocks == 1) {
				uint64_t leftpx = n.searchPixel3(init, -1, 0, 0);
				uint64_t rightpx = n.searchPixel3(init, 1, 0, 0);
				//Save colors
				uint64_t leftclr = pixels[leftpx].pxlColor;
				uint64_t clr = pixels[numero].pxlColor;
				uint64_t rightclr = pixels[rightpx].pxlColor;
				cout << "Attention! " << leftclr << clr << rightclr << endl;
				//Edit colors
				pixels[leftpx].editColor(pixels[n.searchPixel2(300301311310)].pxlColor);
				pixels[numero].editColor(pixels[n.searchPixel2(310311321320)].pxlColor);
				pixels[rightpx].editColor(pixels[n.searchPixel2(320321331330)].pxlColor);
				//
				leftpx = n.searchPixel2(300301311310);
				numero = n.searchPixel2(310311321320);
				rightpx = n.searchPixel2(320321331330);
				//
				pixels[leftpx].editColor(pixels[n.searchPixel2(031030130131)].pxlColor);
				pixels[numero].editColor(pixels[n.searchPixel2(131130230231)].pxlColor);
				pixels[rightpx].editColor(pixels[n.searchPixel2(231230330331)].pxlColor);
				//
				leftpx = n.searchPixel2(031030130131);
				numero = n.searchPixel2(131130230231);
				rightpx = n.searchPixel2(231230330331);
				//
				pixels[leftpx].editColor(pixels[n.searchPixel2(030031021020)].pxlColor);
				pixels[numero].editColor(pixels[n.searchPixel2(020021011010)].pxlColor);
				pixels[rightpx].editColor(pixels[n.searchPixel2(010011001000)].pxlColor);
				//
				leftpx = n.searchPixel2(030031021020);
				numero = n.searchPixel2(020021011010);
				rightpx = n.searchPixel2(010011001000);
				//
				pixels[leftpx].editColor(leftclr);
				pixels[numero].editColor(clr);
				pixels[rightpx].editColor(rightclr);
				//A full rotation
			}
		}
	}
	return n;
}

class Player {
	public:
		uint64_t position[3];
		uint64_t cost;
		Player() {
			cost = 0;
			position[0] = 0;
			position[1] = 0;
			position[2] = 0;
		}
};

uint64_t findClosestToPerfectSide(Cube cb) {
	uint64_t side = 0;
	uint64_t wantedSide = 0;
	uint64_t maxm = -1;
	while (side < 6) {
		uint64_t noOfWhite = 0;
		uint64_t noOfRed = 0;
		uint64_t noOfBlue = 0;
		uint64_t noOfGreen = 0;
		uint64_t noOfYellow = 0;
		uint64_t noOfOrange = 0;
		for (uint64_t j = 0; j < 9; j++) {
			if (cb.pixels[side * 9 + j].pxlColor == 0) {
				noOfRed++;
			}
			else if (cb.pixels[side * 9 + j].pxlColor == 1) {
				noOfOrange++;
			}
			else if (cb.pixels[side * 9 + j].pxlColor == 2) {
				noOfYellow++;
			}
			else if (cb.pixels[side * 9 + j].pxlColor == 3) {
				noOfGreen++;
			}
			else if (cb.pixels[side * 9 + j].pxlColor == 4) {
				noOfBlue++;
			}
			else if (cb.pixels[side * 9 + j].pxlColor == 5) {
				noOfWhite++;
			}
		}
		uint64_t mx = max(noOfRed, noOfBlue, noOfGreen, noOfOrange, noOfWhite, noOfYellow);
		if (mx > maxm) {
			maxm = mx;
			wantedSide = side;
		}
		side++;
	}
	return wantedSide;
}

uint64_t remainingPixels(uint64_t ctps, Cube cb) {
	/*Return the number of pixels to fill the maximum used color of the ctps*/
	uint64_t noOfWhite = 0;
	uint64_t noOfRed = 0;
	uint64_t noOfBlue = 0;
	uint64_t noOfGreen = 0;
	uint64_t noOfYellow = 0;
	uint64_t noOfOrange = 0;
	for (uint64_t j = 0; j < 9; j++) {
		if (cb.pixels[ctps * 9 + j].pxlColor == 0) {
			noOfRed++;
		}
		else if (cb.pixels[ctps * 9 + j].pxlColor == 1) {
			noOfOrange++;
		}
		else if (cb.pixels[ctps * 9 + j].pxlColor == 2) {
			noOfYellow++;
		}
		else if (cb.pixels[ctps * 9 + j].pxlColor == 3) {
			noOfGreen++;
		}
		else if (cb.pixels[ctps * 9 + j].pxlColor == 4) {
			noOfBlue++;
		}
		else if (cb.pixels[ctps * 9 + j].pxlColor == 5) {
			noOfWhite++;
		}
	}
	return 9 - max(noOfRed, noOfBlue, noOfGreen, noOfOrange, noOfWhite, noOfYellow);
};

uint64_t g(Cube cb, Player plr) {
	return cb.cbCost + plr.cost;
};

uint64_t h(Cube cb, Player plr) {
	uint64_t t = remainingPixels(findClosestToPerfectSide(cb), cb);
	return t/3 + t%3;
};

uint64_t f(Cube cb, Player plr) {
	return g(cb, plr) + h(cb, plr);
};

void AstarAlgorithm(Cube& cb, Player& plr, Rotation* rtss) {
	Cube resl(cb);
	//resl.pixelCreator(); ????
	Player p = plr;
	Cube* frontier = new Cube[20]; //Cases to be counted based on combinatorics!
	
	
	/*Create all cases of the frontier*/
	for (uint64_t i = 0; i < 20; i++) {
		Cube temp(resl);
		//cout << rtss[i].lOrR << " " << rtss[i].noOfBlocks << endl;
		temp.rotateCube(rtss + sizeof(Rotation)*i);
		//temp.printCube();
		frontier[i] = temp;
		temp.cbCost = (i % 2 == 0) ? 2 : 1;
		//set cost of cube! 1 for a simple rotation, 2 for a double
	}
	/*Examine all cases of the frontier
	Find the case n with the minimum f(n)*/
	uint64_t min = f(frontier[0], plr);
	uint64_t plc = 0;
	for (uint64_t i = 1; i < 20; i++) {
		if (f(frontier[i], plr) < min) {
			min = f(frontier[i], plr);
			plc = i;
		}
	}
	resl = frontier[plc];
	p.cost = g(resl, plr);
	delete[] frontier;
	cb = resl;
}

int main() {

	/*Setup AI player and Rubik Cube*/
	Cube cb;
	cb.pixelCreator();
	Player plr = Player();

	Rotation* rts = new Rotation[20];
	
	/*Create all rotations*/
	rts[0] = Rotation(0, 1, &cb.pixels[3]);
	rts[1] = Rotation(0, 2, &cb.pixels[3]);
	rts[2] = Rotation(1, 1, &cb.pixels[3]);
	rts[3] = Rotation(1, 2, &cb.pixels[3]);
	rts[4] = Rotation(0, 1, &cb.pixels[5]);
	rts[5] = Rotation(0, 2, &cb.pixels[5]);
	rts[6] = Rotation(1, 1, &cb.pixels[5]);
	rts[7] = Rotation(1, 2, &cb.pixels[5]);
	rts[8] = Rotation(0, 1, &cb.pixels[1]);
	rts[9] = Rotation(0, 2, &cb.pixels[1]);
	rts[10] = Rotation(1, 1, &cb.pixels[1]);
	rts[11] = Rotation(1, 2, &cb.pixels[1]);
	rts[12] = Rotation(0, 1, &cb.pixels[7]);
	rts[13] = Rotation(0, 2, &cb.pixels[7]);
	rts[14] = Rotation(1, 1, &cb.pixels[7]);
	rts[15] = Rotation(1, 2, &cb.pixels[7]);
	rts[16] = Rotation(0, 1, &cb.pixels[14]);
	rts[17] = Rotation(0, 2, &cb.pixels[14]);
	rts[18] = Rotation(1, 1, &cb.pixels[14]);
	rts[19] = Rotation(1, 2, &cb.pixels[14]);

	cout << "Starting Cube: " << endl;
	cb.printCube();
	cout << "Issue is : " << "Expected ids " << "vs obtained ids " << endl;
	 for (uint64_t i = 0; i < 54; i++) {
		cb.pixels[i].printPosition();
	cout << " " << cb.pixels[i].idProducer() << endl;
	}

	
	cout << endl;
	/*Apply A* algorithm*/
	cout << "Cube created. Application of A*: ";
	cout << endl;
	cout << endl;
	for (uint64_t i = 0; i < 50; i++) {
		cout << "Attempt of applying A*: " << i << endl;
		AstarAlgorithm(cb, plr, rts);
		cb.printCube();
		cout << endl;
	}

	int a;
	cin >> a;

	/*Print Result*/
	
	delete[] rts;
	
	return 0;

}