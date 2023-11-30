
int my_sqrt(int n){
    int result = 0;
    if (n < 0 || n == NULL){
        return 0;
    }
    //if you go too high it's your problem
    for (int i = 0; i < n; i++){
        if (i * i == n){
            result = i;
            break;
        }else{
            result =  0;
        }
    }
    return result;
}
