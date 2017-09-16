//*****************************************************************************
#ifndef LCD_LIB
#define LCD_LIB

#include <inttypes.h>
#include <avr/io.h>
#include <avr/pgmspace.h>
#include <util/delay.h>

#define I2C_MODE
#define LCD_Y_SIZE		2
#define LCD_X_SIZE		16

#ifdef I2C_MODE
// **** i2c mode ******************************************
#define LCD_I2C_CLOCK		100000
#define LCD_I2C_ADR			( 0x27 << 1 )
#define LCD_I2C_BL			0b00001000 // back light
#define LCD_I2C_EN			0b00000100
#define LCD_I2C_RW			0b00000010
#define LCD_I2C_RS			0b00000001
// ********************************************************
#else
// *** 4-bit mode *****************************************
#define LCD_RS_PIN		0
#define LCD_RS_PORT		PORTB
#define LCD_RS_DDR		DDRB

#define LCD_E_PIN		1
#define LCD_E_PORT		PORTB
#define LCD_E_DDR		DDRB

#define LCD_D4_PIN		4
#define LCD_D4_PORT		PORTD
#define LCD_D4_DDR		DDRD

#define LCD_D5_PIN		5
#define LCD_D5_PORT		PORTD
#define LCD_D5_DDR		DDRD

#define LCD_D6_PIN		6
#define LCD_D6_PORT		PORTD
#define LCD_D6_DDR		DDRD

#define LCD_D7_PIN		7
#define LCD_D7_PORT		PORTD
#define LCD_D7_DDR		DDRD
// ********************************************************
#endif

void _command( uint8_t cmd );

#define lcd_cursor_on() _command(0x0E)

#define lcd_cursor_blink() _command(0x0F)

#define lcd_cursor_off() _command(0x0C)

#define lcd_blank() _command(0x08)

#define lcd_visible() _command(0x0C)

void lcd_init( void );

void lcd_write( uint8_t ch );

void lcd_clear(void);

void lcd_home( void );

void lcd_gotoxy( uint8_t x_col, uint8_t y_row );

void lcd_create_char( uint8_t char_code, const uint8_t * map ); // map in PROGMEM

void lcd_print_int( uint16_t value, uint8_t n_razr );

void lcd_print_string( uint8_t * str );

void lcd_print_flash( const uint8_t * str );

void lcd_print_time( uint16_t n_second, uint8_t is_hour );

#endif

