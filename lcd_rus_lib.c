#include "lcd_rus_lib.h"

uint8_t _index[ 8 ] = { 0, 0, 0, 0, 0, 0, 0, 0 };
uint8_t _cur_index = 0;

//�
const uint8_t rus_B[8] PROGMEM = {
  0b11111,
  0b10000,
  0b10000,
  0b11110,
  0b10001,
  0b10001,
  0b11110,
  0b00000
};
//�
const uint8_t rus_G[8] PROGMEM = {
  0b11111,
  0b10000,
  0b10000,
  0b10000,
  0b10000,
  0b10000,
  0b10000,
  0b00000
};
//�
const uint8_t rus_D[8] PROGMEM = {
  0b00110,
  0b01010,
  0b01010,
  0b01010,
  0b01010,
  0b01010,
  0b11111,
  0b10001
};
//�
const uint8_t rus_ZH[8] PROGMEM = {
  0b10101,
  0b10101,
  0b10101,
  0b01110,
  0b10101,
  0b10101,
  0b10101,
  0b00000
};
//�
const uint8_t rus_Z[8] PROGMEM = {
  0b01110,
  0b10001,
  0b00001,
  0b00110,
  0b00001,
  0b10001,
  0b01110,
  0b00000
};
//�
const uint8_t rus_I[8] PROGMEM = {
  0b10001,
  0b10001,
  0b10001,
  0b10011,
  0b10101,
  0b11001,
  0b10001,
  0b00000
};
//�
const uint8_t rus_II[8] PROGMEM = {
  0b10101,
  0b10001,
  0b10001,
  0b10011,
  0b10101,
  0b11001,
  0b10001,
  0b00000
};
//�
const uint8_t rus_L[8] PROGMEM = {
  0b00111,
  0b01001,
  0b01001,
  0b01001,
  0b01001,
  0b01001,
  0b10001,
  0b00000
};
//�
const uint8_t rus_P[8] PROGMEM = {
  0b11111,
  0b10001,
  0b10001,
  0b10001,
  0b10001,
  0b10001,
  0b10001,
  0b00000
};
//�
const uint8_t rus_U[8] PROGMEM = {
  0b10001,
  0b10001,
  0b10001,
  0b01111,
  0b00001,
  0b10001,
  0b01110,
  0b00000
};
//�
const uint8_t rus_F[8] PROGMEM = {
  0b00100,
  0b01110,
  0b10101,
  0b10101,
  0b10101,
  0b01110,
  0b00100,
  0b00000
};
//�
const uint8_t rus_TS[8] PROGMEM = {
  0b10010,
  0b10010,
  0b10010,
  0b10010,
  0b10010,
  0b10010,
  0b11111,
  0b00001
};
//�
const uint8_t rus_CH[8] PROGMEM = {
  0b10001,
  0b10001,
  0b10001,
  0b01111,
  0b00001,
  0b00001,
  0b00001,
  0b00000
};
//�
const uint8_t rus_SH[8] PROGMEM = {
  0b10001,
  0b10001,
  0b10001,
  0b10101,
  0b10101,
  0b10101,
  0b11111,
  0b00000
};
//�
const uint8_t rus_SCH[8] PROGMEM = {
  0b10001,
  0b10001,
  0b10001,
  0b10101,
  0b10101,
  0b10101,
  0b11111,
  0b00001
};
//�
const uint8_t rus_tverd[8] PROGMEM = {
  0b11000,
  0b01000,
  0b01000,
  0b01110,
  0b01001,
  0b01001,
  0b01110,
  0b00000
};
//�
const uint8_t rus_Y[8] PROGMEM = {
  0b10001,
  0b10001,
  0b10001,
  0b11101,
  0b10011,
  0b10011,
  0b11101,
  0b00000
};
//�
const uint8_t rus_myagk[8] PROGMEM = {
  0b10000,
  0b10000,
  0b10000,
  0b11110,
  0b10001,
  0b10001,
  0b11110,
  0b00000
};
//�
const uint8_t rus_EE[8] PROGMEM = {
  0b01110,
  0b10001,
  0b00001,
  0b00111,
  0b00001,
  0b10001,
  0b01110,
  0b00000
};
//�
const uint8_t rus_YU[8] PROGMEM = {
  0b10010,
  0b10101,
  0b10101,
  0b11101,
  0b10101,
  0b10101,
  0b10010,
  0b00000
};
//�
const uint8_t rus_YA[8] PROGMEM = {
  0b01111,
  0b10001,
  0b10001,
  0b01111,
  0b00101,
  0b01001,
  0b10001,
  0b00000
};
const uint8_t rus_b[8] PROGMEM = {
  0b00011,
  0b01100,
  0b10000,
  0b11110,
  0b10001,
  0b10001,
  0b01110,
  0b00000
};//�
const uint8_t rus_v[8] PROGMEM = {
  0b00000,
  0b00000,
  0b11110,
  0b10001,
  0b11110,
  0b10001,
  0b11110,
  0b00000
};//�
const uint8_t rus_g[8] PROGMEM = {
  0b00000,
  0b00000,
  0b11110,
  0b10000,
  0b10000,
  0b10000,
  0b10000,
  0b00000
};//�
const uint8_t rus_d[8] PROGMEM = {
  0b00000,
  0b00000,
  0b00110,
  0b01010,
  0b01010,
  0b01010,
  0b11111,
  0b10001
};//�
const uint8_t rus_yo[8] PROGMEM = {
  0b01010,
  0b00000,
  0b01110,
  0b10001,
  0b11111,
  0b10000,
  0b01111,
  0b00000
};//�
const uint8_t rus_zh[8] PROGMEM = {
  0b00000,
  0b00000,
  0b10101,
  0b10101,
  0b01110,
  0b10101,
  0b10101,
  0b00000
};//�
const uint8_t rus_z[8] PROGMEM = {
  0b00000,
  0b00000,
  0b01110,
  0b10001,
  0b00110,
  0b10001,
  0b01110,
  0b00000
};//�
const uint8_t rus_i[8] PROGMEM = {
  0b00000,
  0b00000,
  0b10001,
  0b10011,
  0b10101,
  0b11001,
  0b10001,
  0b00000
};//�
const uint8_t rus_ii[8] PROGMEM = {
  0b01010,
  0b00100,
  0b10001,
  0b10011,
  0b10101,
  0b11001,
  0b10001,
  0b00000
};//�
const uint8_t rus_k[8] PROGMEM = {
  0b00000,
  0b00000,
  0b10010,
  0b10100,
  0b11000,
  0b10100,
  0b10010,
  0b00000
};//�
const uint8_t rus_l[8] PROGMEM = {
  0b00000,
  0b00000,
  0b00111,
  0b01001,
  0b01001,
  0b01001,
  0b10001,
  0b00000
};//�
const uint8_t rus_m[8] PROGMEM = {
  0b00000,
  0b00000,
  0b10001,
  0b11011,
  0b10101,
  0b10001,
  0b10001,
  0b00000
};//�
const uint8_t rus_n[8] PROGMEM = {
  0b00000,
  0b00000,
  0b10001,
  0b10001,
  0b11111,
  0b10001,
  0b10001,
  0b00000
};//�
const uint8_t rus_p[8] PROGMEM = {
  0b00000,
  0b00000,
  0b11111,
  0b10001,
  0b10001,
  0b10001,
  0b10001,
  0b00000
};//�
const uint8_t rus_t[8] PROGMEM = {
  0b00000,
  0b00000,
  0b11111,
  0b00100,
  0b00100,
  0b00100,
  0b00100,
  0b00000
};//�
const uint8_t rus_f[8] PROGMEM = {
  0b00000,
  0b00000,
  0b00100,
  0b01110,
  0b10101,
  0b01110,
  0b00100,
  0b00000
};//�
const uint8_t rus_ts[8] PROGMEM = {
  0b00000,
  0b00000,
  0b10010,
  0b10010,
  0b10010,
  0b10010,
  0b11111,
  0b00001
};//�
const uint8_t rus_ch[8] PROGMEM = {
  0b00000,
  0b00000,
  0b10001,
  0b10001,
  0b01111,
  0b00001,
  0b00001,
  0b00000
};//�
const uint8_t rus_sh[8] PROGMEM = {
  0b00000,
  0b00000,
  0b10101,
  0b10101,
  0b10101,
  0b10101,
  0b11111,
  0b00000
};//�
const uint8_t rus_sch[8] PROGMEM = {
  0b00000,
  0b00000,
  0b10101,
  0b10101,
  0b10101,
  0b10101,
  0b11111,
  0b00001
};//�
const uint8_t rus_tverd_mal[8] PROGMEM = {
  0b00000,
  0b00000,
  0b11000,
  0b01000,
  0b01110,
  0b01001,
  0b01110,
  0b00000
};//�
const uint8_t rus_y[8] PROGMEM = {
  0b00000,
  0b00000,
  0b10001,
  0b10001,
  0b11101,
  0b10011,
  0b11101,
  0b00000
};//�
const uint8_t rus_myagk_mal[8] PROGMEM = {
  0b00000,
  0b00000,
  0b10000,
  0b10000,
  0b11110,
  0b10001,
  0b11110,
  0b00000
};//�
const uint8_t rus_ee[8] PROGMEM = {
  0b00000,
  0b00000,
  0b01110,
  0b10001,
  0b00111,
  0b10001,
  0b01110,
  0b00000
};//�
const uint8_t rus_yu[8] PROGMEM = {
  0b00000,
  0b00000,
  0b10010,
  0b10101,
  0b11101,
  0b10101,
  0b10010,
  0b00000
};//�
const uint8_t rus_ya[8] PROGMEM = {
  0b00000,
  0b00000,
  0b01111,
  0b10001,
  0b01111,
  0b00101,
  0b01001,
  0b00000
};//�

// � �� E lat, � �� e lat
const uint8_t * const char_gen[] PROGMEM = {
// �        �      �           �      �       �          �       �      �      �
(const uint8_t *)'A'+0x8FFF, rus_B, (const uint8_t *)'B'+0x8FFF, rus_G, rus_D, (const uint8_t *)'E'+0x8FFF, rus_ZH, rus_Z, rus_I, rus_II,
// �        �       �           �           �          �       �           �           �          �      �
(const uint8_t *)'K'+0x8FFF, rus_L, (const uint8_t *)'M'+0x8FFF, (const uint8_t *)'H'+0x8FFF, (const uint8_t *)'O'+0x8FFF, rus_P,
(const uint8_t *)'P'+0x8FFF, (const uint8_t *)'C'+0x8FFF, (const uint8_t *)'T'+0x8FFF, rus_U, rus_F,
// �        �       �       �       �        �          �      �          �       �       �
(const uint8_t *)'X'+0x8FFF, rus_TS, rus_CH, rus_SH, rus_SCH, rus_tverd, rus_Y, rus_myagk, rus_EE, rus_YU, rus_YA,
// �        �      �      �      �       �          �       �      �      �
(const uint8_t *)'a'+0x8FFF, rus_b, rus_v, rus_g, rus_d, (const uint8_t *)'e'+0x8FFF, rus_zh, rus_z, rus_i, rus_ii,
// �   �      �      �       �          �       �           �          �       �          �
rus_k, rus_l, rus_m, rus_n, (const uint8_t *)'o'+0x8FFF, rus_p, (const uint8_t *)'p'+0x8FFF, (const uint8_t *)'c'+0x8FFF, rus_t,
(const uint8_t *)'y'+0x8FFF, rus_f,
// �        �       �       �       �        �              �      �              �       �       �
(const uint8_t *)'x'+0x8FFF, rus_ts, rus_ch, rus_sh, rus_sch, rus_tverd_mal, rus_y, rus_myagk_mal, rus_ee, rus_yu, rus_ya
};

void lcd_rus_clear( void )
{
  uint8_t i = 8;

  while( i-- ) _index[ i ] = 0;
  _cur_index = 0;
  lcd_clear();
}

void lcd_rus_print_string( uint8_t * str )
{
	while( *str ) lcd_rus_write( *str++ );
}

void lcd_rus_print_flash( const uint8_t * str )
{
	uint8_t ch;

	while( (ch = pgm_read_byte( str++ )) ) lcd_rus_write( ch );
}

void lcd_rus_write( uint8_t ch )
{
  uint16_t ptr;
  uint8_t i;

  if( ch == 168 ) ch = 'E';
  else if( ch == 184 ) ch = 'e';

  if( ch < 192 ) { lcd_write( ch ); return; }

  ptr = pgm_read_word( &char_gen[ ch - 192 ] );

  if( ptr > 0x8FFF ) { lcd_write( (uint8_t) ptr-0x8FFF ); return; }

  for( i = 0; i < 8; i++ )
  {
    if( _index[ i ] == ch ) { lcd_write( i ); return; }
  }

  _index[ _cur_index ] = ch;
  lcd_create_char( _cur_index, (uint8_t *)ptr );
  lcd_write( _cur_index++ );
  if( _cur_index > 7 ) _cur_index = 0;

  }

