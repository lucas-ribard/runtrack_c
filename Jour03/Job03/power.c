int power(int n, int power){
    int result = 1;
    for (int i = 0; i < power; i++){
        result *= n;
    }
    return result;
}