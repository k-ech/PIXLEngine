#include "vec2.h"

PixlEngine::Vec2::Vec2(float x, float y)
{
	this->x = x;
	this->y = y;
}

void PixlEngine::Vec2::normalize()
{
	int mag = sqrt( (powf(this->x, 2) + powf(this->y, 2)) );

	this->x /= mag;
	this->y /= mag;
}

float PixlEngine::Vec2::dotProduct(PixlEngine::Vec2 &vec)
{
	float dotProd = (this->x * vec.x) + (this->x * vec.y);
	return dotProd;
}

float PixlEngine::Vec2::crossProduct(PixlEngine::Vec2 &vec)
{
	float crossProd = (this->x * vec.y) - (this->y * vec.x);
	return crossProd;
}

float PixlEngine::Vec2::operator * (PixlEngine::Vec2 &right)
{
	return dotProduct(right);
}

PixlEngine::Vec2 PixlEngine::Vec2::operator + (PixlEngine::Vec2 &right)
{
	PixlEngine::Vec2 newVec(
		this->x + right.x,
		this->y + right.y
	);

	return newVec;
}

PixlEngine::Vec2 PixlEngine::Vec2::operator - (PixlEngine::Vec2 &right)
{
	PixlEngine::Vec2 newVec(
		this->x - right.x,
		this->y - right.y
	);

	return newVec;
}