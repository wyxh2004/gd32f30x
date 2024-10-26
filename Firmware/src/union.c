typedef union{
    unsigned char data;
    struct{
        unsigned char RED;
        unsigned char GREEN;
        unsigned char BLUE;
    }LED;
    struct p8_bit{
      unsigned char bit0 : 1;
      unsigned char bit1 : 1;
      unsigned char bit2 : 1;
      unsigned char bit3 : 1;
      unsigned char bit4 : 1;
      unsigned char bit5 : 1;
      unsigned char bit6 : 1;
      unsigned char bit7 : 1;
      
      unsigned char bit8 : 1;
      unsigned char bit9 : 1;
      unsigned char bit10 : 1;
      unsigned char bit11 : 1;
      unsigned char bit12 : 1;
      unsigned char bit13 : 1;
      unsigned char bit14 : 1;
      unsigned char bit15 : 1;
      
      unsigned char bit16 : 1;
      unsigned char bit17 : 1;
      unsigned char bit18 : 1;
      unsigned char bit19 : 1;
      unsigned char bit20 : 1;
      unsigned char bit21 : 1;
      unsigned char bit22 : 1;
      unsigned char bit23 : 1;
    }bit_n;
}BitAddress;