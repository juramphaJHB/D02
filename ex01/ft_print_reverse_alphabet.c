#include <unistd.h>

void ft_print_reverse_alphabet(void);
void ft_putchar(char c){
         write(1, &c, 1);
}

int main(void){
    ft_print_reverse_alphabet();
    return 0;
}


void ft_print_reverse_alphabet(){
    int x;

    while(x < 26){
         char c  = (char)(122 - x);
         ft_putchar(c);
         x++;
     }
}