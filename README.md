# MatrixMath
Great repository names are short and memorable. Need inspiration? How about verbose-broccoli. 
But actually, this code represents my fork of the code found here: http://playground.arduino.cc/Code/MatrixMath

From the original:

## MatrixMath library for Arduino
by Charlie Matlack
contact: eecharlie in Arduino forums
This library was modified from code posted by RobH45345,
notably including replacement of the inversion algorithm. See the book
NUMERICAL RECIPES: The Art of Scientific Computing.
The version of the library here (updated 4/3/2013) is patched for all Arduino library versions. A patch to make the original library workable for the DUE is discussed here

## FEATURES
Briefly, the functions provided by MatrixMath:
```
void MatrixPrint(float* A, int m, int n, String label);
void MatrixCopy(float* A, int n, int m, float* B);
void MatrixMult(float* A, float* B, int m, int p, int n, float* C);
void MatrixAdd(float* A, float* B, int m, int n, float* C);
void MatrixSubtract(float* A, float* B, int m, int n, float* C);
void MatrixTranspose(float* A, int m, int n, float* C);
int MatrixInvert(float* A, int n);
```
Matrices should be stored in row-major arrays, which is fairly standard. The user must keep track of array dimensions and send them to the functions; mistakes on dimensions will not be caught by the library.

It's worth pointing out that the MatrixInvert() function uses Gauss-Jordan elimination with partial pivoting. Partial pivoting is a compromise between a numerically unstable algorithm and full pivoting, which involves more searching and swapping matrix elements.

Also, the inversion algorithm stores the result matrix on top of the the input matrix, meaning no extra memory is allocated during inversion but your original matrix is gone.

## HOW TO IMPORT/INSTALL
~~Grab the source code below, and put in a folder called MatrixMath. [Apparently recent Playground changes have killed the zip file. Please edit this if there is a preferred way of making the source available.]~~

~~Put the MatrixMath folder in "libraries\".~~

*Edit: clone this repo at https://github.com/buckbaskin/MatrixMath.git into your `libraries\` folder*

In the Arduino IDE, create a new sketch (or open one) and

select from the menubar "Sketch->Import Library->MatrixMath".

Once the library is imported, a "#include MatrixMath.h" line will appear at the top of your Sketch.

The MatrixMathDemo in the Examples folder demonstrates multiplication and inversion using the MatrixPrint() function to show results.
