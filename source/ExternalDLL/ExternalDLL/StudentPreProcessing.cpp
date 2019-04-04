#include "StudentPreProcessing.h"
#include "ImageFactory.h"
#include "IntensityImageStudent.h"
#include <vector>
#include <iostream>


IntensityImage * StudentPreProcessing::stepToIntensityImage(const RGBImage &image) const {
	std::cout << "To intensity image \n";
	//std::vector<std::vector<RGB>> copy;
	IntensityImageStudent *newCopy = new IntensityImageStudent(image.getWidth(), image.getHeight());
	RGB pixel;
	
	for (unsigned int i = 0; i < image.getWidth(); i++) {
		for (unsigned int j = 0; j < image.getHeight(); j++) {
			pixel = image.getPixel(i, j);
			//Intensity luminosityValue = (pixel.b * 0.07) + (pixel.g * 0.72) + (pixel.r * 0.21);
			//newCopy->setPixel(j, i, luminosityValue);
			newCopy->setPixel(j, i, (pixel.b + pixel.g + pixel.r) / 3);
		}
	}
	
	
	return newCopy;
}

IntensityImage * StudentPreProcessing::stepScaleImage(const IntensityImage &image) const {
	return nullptr;
}

IntensityImage * StudentPreProcessing::stepEdgeDetection(const IntensityImage &image) const {
	return nullptr;
}

IntensityImage * StudentPreProcessing::stepThresholding(const IntensityImage &image) const {
	return nullptr;
}