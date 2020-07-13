#include <unistd.h>

void ft_putchar(char c){
    write(1, &c, 1);
};


void ft_putnbr(int nb){
  if(nb < 10){
      ft_putchar(nb + '0');
  }else{
      ft_putnbr(nb/10);
      ft_putnbr(nb%10);
  }
}

int main(){
    ft_putnbr(89);
    return 0;
}