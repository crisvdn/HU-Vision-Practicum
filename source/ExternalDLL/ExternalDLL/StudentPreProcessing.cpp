#include "StudentPreProcessing.h"
#include "ImageFactory.h"
#include <vector>


IntensityImage * StudentPreProcessing::stepToIntensityImage(const RGBImage &image) const {
	std::vector<std::vector<RGB>> copy;
	IntensityImage *newCopy = ImageFactory::newIntensityImage();
	newCopy->set(image.getWidth(), image.getHeight());
	for (int i = 0; i < newCopy->getHeight(); i++) {
		for (int j = 0; j < newCopy->getWidth(); j++) {
		}
	}
	/*copy.resize(image.getHeight(), std::vector<RGB>(image.getWidth()));
	for (int i = 0; i < image.getHeight(); i++) {
		for (int j = 0; j < image.getWidth(); j++) {
			copy[i][j] = image.getPixel(i, j);
		}
	}
	*/
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