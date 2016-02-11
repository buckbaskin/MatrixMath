#include <MatrixMath.h>
#include <rate.h>

#define N  (5)
/*
 * State = x, y, heading, linear vel, angular vel
 */
float last_mean[N] = {0};
float last_covar[N][N] = {0};

Rate rate(10.0);

void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  for (int i = 0; i < N; i++) {
    last_covar[i][i] = .1;
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  
  rate.sleep();
}

void ekf_known_correspondences(float* last_mean, float* last_covar, 
  float* ctrl, float* mes, int* cor, float* m, float* new_mean, 
  float* new_covar) {
  // mu hat
  float temp[N];
  // TODO calc temp from control
  float temp_mean[N];
  Matrix.Add((float*) last_mean, (float*) temp, N, N, (float*) temp_mean);

  // jacobian of motion model G
  float G[N][N] = {0};

  // sigma hat
  float temp_sigma[N][N];
  float temp2[N][N];
  float R[N][N];
  Matrix.Multiply((float*) G, (float*) last_covar, N, N, N, (float*) temp2);
  Matrix.Transpose((float*) G, N, N, (float*) G);
  Matrix.Multiply((float*) temp2, (float*) G, N, N, N, (float*) temp2);
  Matrix.Add((float*) temp2, (float*) R, N, N, (float*) temp_sigma);

  // Qt
  float Q[N][N];

  // for loop over features
  // endfor
}
