double average(int array[], int n){
double sum = 0;

if (n < 1){
  return 0.0;
} else{
  for (int i = 0; i < n; i++){
    sum += array[i];
  }
}

double average = sum/n;
return average;
}
