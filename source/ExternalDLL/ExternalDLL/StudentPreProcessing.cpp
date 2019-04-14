#include "StudentPreProcessing.h"
#include "ImageFactory.h"
#include "IntensityImageStudent.h"

IntensityImage * StudentPreProcessing::stepToIntensityImage(const RGBImage &image) const {
	IntensityImageStudent *grayScaleImage = new IntensityImageStudent(image.getWidth(), image.getHeight());
	RGB pixel = { 0,0,0 };
	
	for (unsigned int i = 0; i < image.getWidth(); i++) {
		for (unsigned int j = 0; j < image.getHeight(); j++) {
			pixel = image.getPixel(i, j);
			if (1) { // luminosity method
				Intensity luminosityValue = (pixel.b * 0.07) + (pixel.g * 0.72) + (pixel.r * 0.21);
				grayScaleImage->setPixel(j, i, luminosityValue);
			}
			if (0) { // average method
				grayScaleImage->setPixel(j, i, (pixel.b + pixel.g + pixel.r) / 3);
			}
			if (0) { // lightness method takes the highest R, G, or B value and adds this with the lowest value. 
				unsigned char maxColorValue = pixel.getBiggestValue();
				unsigned char minColorValue = pixel.getSmallestValue();
				grayScaleImage->setPixel(j, i, (maxColorValue + minColorValue) / 2);

			}
		}
	}
	return grayScaleImage;
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