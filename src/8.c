int main() {
  float height = 7;
  float weight = 180;

  float bmi = weight / (height * height);

  if (bmi < 18.5) {
    printf("Your BMI is underweight\n");
  } else if (bmi <= 24.9) {
    printf("Your BMI is normal\n");
  } else if (bmi <= 29.9) {
    printf("Your BMI is overweight\n");
  } else {
    printf("Your BMI is obese\n");
  }

  return 0;
}