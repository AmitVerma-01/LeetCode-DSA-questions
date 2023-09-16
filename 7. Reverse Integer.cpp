int reverse(int x) {
         int reversed = 0;
    
    while (x != 0) {
        int digit = x % 10;
        
        // Check for potential overflow/underflow before updating 'reversed'
        if (reversed > INT_MAX / 10 || (reversed == INT_MAX / 10 && digit > 7)) {
            return 0; // Overflow will occur
        }
        if (reversed < INT_MIN / 10 || (reversed == INT_MIN / 10 && digit < -8)) {
            return 0; // Underflow will occur
        }

        reversed = reversed * 10 + digit;
        x /= 10;
    }

    return reversed;

    }
