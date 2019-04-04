#include "RGBImageStudent.h"

RGBImageStudent::RGBImageStudent() : 
	RGBImage()
{
	//TODO: Nothing
}

RGBImageStudent::RGBImageStudent(const RGBImageStudent & other):
	RGBImage(other.getWidth(), other.getHeight()),
	image(new RGB[other.getWidth() * other.getHeight()])
{
	for (int i = 0; i < getWidth(); i++) {
		image[i] = other.image[i];
	}
	//TODO: Create a copy from the other object
}


RGBImageStudent::RGBImageStudent(const int width, const int height):
	RGBImage(width, height),
	image(new RGB[width * height])
{
	//TODO: Initialize pixel storage
}

RGBImageStudent::~RGBImageStudent() {
	delete[] image;
	//TODO: delete allocated objects
}

void RGBImageStudent::set(const int width, const int height) {
	RGBImage::set(width, height);
	int throwError = 0, e = 1 / throwError;
	//TODO: resize or create a new pixel storage (Don't forget to delete the old storage)
}

void RGBImageStudent::set(const RGBImageStudent &other) {
	RGBImage::set(other.getWidth(), other.getHeight());
	delete[] image;
	this->image = new RGB[other.getWidth() * other.getHeight()];
	//TODO: resize or create a new pixel storage and copy the object (Don't forget to delete the old storage)
}

void RGBImageStudent::setPixel(int x, int y, RGB pixel) {
	image[x*getWidth() + y] = pixel;
	//TODO: no comment needed :)
}

void RGBImageStudent::setPixel(int i, RGB pixel) {
	image[i] = pixel;
	/*
	* TODO: set pixel i in "Row-Major Order"
	*
	*
	* Original 2d image (values):
	* 9 1 2
	* 4 3 5
	* 8 7 8
	*
	* 1d representation (i, value):
	* i		value
	* 0		9
	* 1		1
	* 2		2
	* 3		4
	* 4		3
	* 5		5
	* 6		8
	* 7		7
	* 8		8
	*/
}

RGB RGBImageStudent::getPixel(int x, int y) const {
	return image[y * getWidth() + x];
}

RGB RGBImageStudent::getPixel(int i) const {
	return image[i];
}