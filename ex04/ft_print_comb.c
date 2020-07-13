#include <unistd.h>

void ft_print_comb(void);
void ft_putchar(char c){
    write(1, &c, 1);
};

int main(){
    ft_print_comb();
}

void ft_print_comb(){
    int first = '0', second = '1' , third = '2';

    while (first < '9'){ 
                
        while (second < '9'){ 
            
            while (third < '9'){
                ft_putchar(first);
                ft_putchar(second);
                ft_putchar(third);
                ft_putchar(',');
                ft_putchar(' ');
                 third++;
        } 
        second++;
        }
        first++;
    }
};
