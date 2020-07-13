#include <unistd.h>

void ft_print_comb(void);
void ft_putchar(int c){
    write(1, &c, 2);
};

int main(){
    ft_print_comb();
}

void ft_print_comb(){
    int first = '0'; 
    int second = '1';
    int zero = '0' + '0';

    while (first < '9'){ 
        second = '1';
        while (second < '9'){ 
            
            if(first < second){
            ft_putchar('0');
            ft_putchar('0');
            ft_putchar(' ');
            ft_putchar(first);
            ft_putchar(second);
            ft_putchar(',');
            ft_putchar(' ');
             
            }
            second++;
        }
           

            ft_putchar('0');
            ft_putchar('0');
            ft_putchar(' ');
            ft_putchar(first);
            ft_putchar(second);
            ft_putchar(',');
            ft_putchar(' ');
            
            first++;
         
    }
    
    ft_putchar('0');
    ft_putchar('0');
    ft_putchar(' ');
    ft_putchar(first);
    ft_putchar(second);
    ft_putchar(',');
    ft_putchar(' ');
    
};
