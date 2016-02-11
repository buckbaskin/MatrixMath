/*
 *  MatrixMath.h Library for Matrix Math
 *
 *  Created by Charlie Matlack on 12/18/10.
 *  Modified from code by RobH45345 on Arduino Forums, algorithm from 
 *  NUMERICAL RECIPES: The Art of Scientific Computing.
 *
 *  Modified by buckbaskin starting on 2/7/16.
 *  For original, see http://playground.arduino.cc/Code/MatrixMath
 */

#ifndef MatrixMath_h
#define MatrixMath_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

class MatrixMath
{
public:
    //MatrixMath();
    void Print(float* A, int m, int n, String label);
    void Copy(float* A, int n, int m, float* out);
    void Multiply(float* A, float* B, int m, int p, int n, float* out);
    void Add(float* A, float* B, int m, int n, float* out);
    void Subtract(float* A, float* B, int m, int n, float* out);
    void Transpose(float* A, int m, int n, float* out);
    void Scale(float* A, int m, int n, float k, float* out);
    int Invert(float* A, int n);
};

extern MatrixMath Matrix;
#endif
