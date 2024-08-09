double arrayMin(double* array, int size) {
     double min = array[0];
     for (int i = 1; i < size; i++){
        if (min > array[i]){
            min = array[i];
        }
     }
     return min;
}