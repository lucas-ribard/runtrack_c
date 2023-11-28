char my_strcpy(char *dest, const char *src) {
    char *dest_start = dest; // Save the start of the destination string
    while (*src != '\0') {
        *dest = *src; // Copy the character
        dest++; // Increment the destination pointer
        src++;
    }
    *dest = '\0'; // Add the null terminator
    return *dest_start;
}