/*
* Copyright (c) 2015 DottedEye Designs, Alexander Hustinx, NeoTech Software, Rolf Smit - All Rights Reserved
* Unauthorized copying of this file, via any medium is strictly prohibited
* Proprietary and confidential
*/

#pragma once



struct RGB {

	RGB(unsigned char r = 0, unsigned char g = 0, unsigned char b = 0)
		:r(r), g(g), b(b) {
	}

	unsigned char b;
	unsigned char g;
	unsigned char r;

	unsigned char getSmallestValue() {
		unsigned char smallestValue = r;
		if (g < smallestValue) {
			smallestValue = g;
		}
		if (b < smallestValue) {
			smallestValue = b;
		}
		return smallestValue;
	}

	unsigned char getBiggestValue() {
		unsigned char biggestValue = r;
		if (g > biggestValue) {
			biggestValue = g;
		}
		if (b > biggestValue) {
			biggestValue = b;
		}
		return biggestValue;
	}
};



typedef unsigned char Intensity;