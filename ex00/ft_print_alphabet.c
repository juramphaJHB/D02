#include <unistd.h>

void ft_print_alphabet(void);
void ft_putchar(char c){
    write(1, &c, 1);
}

int main(void){
    ft_print_alphabet();
}

void ft_print_alphabet(){
     char a;
     int x;

     while(x < 26){
         char c  = (char)(97 + x);
         ft_putchar(c);
         x++;
     }
 }
