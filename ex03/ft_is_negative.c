#include <unistd.h>

void ft_is_negative(int);
void ft_putchar(char c){
    write(1, &c, 1);
};

int main(){
    ft_is_negative(8);
}

void ft_is_negative(int n){
    if (n > 0){
        char c = 'N';
        ft_putchar(c);
    }else{
        char c = 'P';
        ft_putchar(c);
    }
};
