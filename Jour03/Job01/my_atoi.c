int my_atoi(char *str){
    int result = 0;
    int i = 0;
    int sign = 1;
    
    while (str[i] != '\0'){
        result = result * 10 + str[i] - '0';
        i++;
    }
    return result * sign;
  
}