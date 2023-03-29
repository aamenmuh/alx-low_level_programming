int is_palindrome(char *s)
{
    if (*s == '\0' || *(s + 1) == '\0') {
        return 1;  // an empty string or a single character string is a palindrome
    } else if (*s != *(s + strlen(s) - 1)) {
        return 0;  // the string is not a palindrome if the first and last characters differ
    } else {
        *(s + strlen(s) - 1) = '\0';  // temporarily remove the last character from the string
        return is_palindrome(s + 1);  // recursively check if the substring without the first and last characters is a palindrome
    }
}
