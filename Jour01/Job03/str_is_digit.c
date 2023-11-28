int str_is_digit(const char *str) {
    while (*str != '\0') {
        if (!char_is_digit(*str)) {
            return 0; // If any character is not a digit, return 0
        }
        str++;
    }

    return 1; // All characters are digits
}