#ifndef DFUNCTIONS_H
#define DFUNCTIONS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <GL/freeglut.h>

typedef struct threeDPoint{
	float x,y,z;
} ThreeDPoint;

typedef struct face{
    int x,y,z;
} Face;

typedef struct off{
    int nvert, nfaces;
    ThreeDPoint *vertex;
    Face *face;
} Off;

typedef float Matrix[3][3];

typedef float Vector[3];

///Creates a rotation matrix which rotates (in radians) in one axis. Axis parameter must be 'x', 'y' or 'z' (case sensitive). angle is the angle of rotation in radians
void createRotationMatrix(char axis, float angle, Matrix *matrix);

///Calculates the cross product of a 3x3 matrix and 1x3 vector and returns the resultant vector in the product parameter. Multiplies mat x vec in that order (matters).
void crossProductMatVec(const Matrix *matrix, const Vector *vector, Vector *product);

ThreeDPoint vecScalMult(const ThreeDPoint *vector, const int scalar);

float dotProdVec(const ThreeDPoint *vector1, const ThreeDPoint *vector2);

void getFileName(char *fileName);

Off readOFFFile(const char *fileName);

void findCentre(const Off *off, GLfloat centrePoint[3]);

float findRadius(const Off *off, const GLfloat centrePoint[3]);

void drawOff(const Off *off);

void normaliseOff(Off *off, GLfloat centrePoint[3]);


#endif
