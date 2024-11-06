#include <avr/io.h>
#include <util/delay.h>

#define MASK(target, value) (target = value)
#define INPUT(ddr, pin) (ddr &= ~(1 << pin))
#define OUTPUT(ddr, pin) (ddr |= (1 << pin))

#define LOW(ddr, pin) (ddr &= ~(1 << pin))
#define HIGH(ddr, pin) (ddr |= (1 << pin))

int main(void) {
  OUTPUT(DDRB, 5);

  while (true) {
    HIGH(PORTB, 5);
    _delay_ms(1000);
    LOW(PORTB, 5);
    _delay_ms(1000);
  }
}
