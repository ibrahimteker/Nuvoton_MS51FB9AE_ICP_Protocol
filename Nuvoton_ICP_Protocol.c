////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Author: İbrahim TEKER  under the GNU license! You can use this code in your Application           //  
//  Nuvoton MS51FB9AE ICP Programming Protocol. It is only tested in this chip model                  //
//  Author is not responsible for unpredicted results, financial lost or any information lost!!!      //
////////////////////////////////////////////////////////////////////////////////////////////////////////
// Following char array contains the hex file that you want to write your MS51FB9AE microcontroller   //
// You can change this hex file with yours and program your Nuvoton MS51 chip programmatically in any //
// enviroment                                                                                         //
// This hex file "normalised" with "hexmate.exe" to linearisation of the memory address range         //
// Direct Keil C compiler hex output file  may not work with this code!!!                             //
////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////

// A reverse engineered gift from me (: have fun!!!

// Nuvoton MS51FB9AE Blink LED example (This example hex file blinks the LED that connected to P1.2 pin)
const unsigned char hexfile[] = {
0x10,0x00,0x00,0x00,0x02,0x00,0x6E,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x02,0x00,0x0E,0xC0,0xE0,0xD8,
0x10,0x00,0x10,0x00,0x05,0x1E,0xE5,0x1E,0x70,0x02,0x05,0x1D,0xD0,0xE0,0x32,0xFF,0xFF,0xFF,0xFF,0xFF,0x49,
0x10,0x00,0x20,0x00,0xFF,0xFF,0xFF,0x02,0x00,0xFA,0x20,0x40,0x21,0x56,0x62,0x6E,0x64,0x3D,0x30,0x30,0x2F,
0x10,0x00,0x30,0x00,0x30,0x30,0x2C,0x56,0x62,0x61,0x74,0x3D,0x30,0x30,0x30,0x30,0x2C,0x49,0x62,0x61,0x72,
0x10,0x00,0x40,0x00,0x74,0x3D,0x30,0x30,0x30,0x30,0x2C,0x56,0x6F,0x75,0x74,0x3D,0x30,0x30,0x30,0x30,0x68,
0x10,0x00,0x50,0x00,0x2C,0x56,0x64,0x72,0x76,0x3D,0x30,0x30,0x30,0x30,0x3B,0x00,0x00,0x00,0x00,0x00,0x9A,
0x10,0x00,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x02,0x01,0x49,0x78,0x7F,0x4E,
0x10,0x00,0x70,0x00,0xE4,0xF6,0xD8,0xFD,0x75,0x81,0x71,0x02,0x00,0xB5,0x02,0x01,0xBB,0xE4,0x93,0xA3,0xDB,
0x10,0x00,0x80,0x00,0xF8,0xE4,0x93,0xA3,0x40,0x03,0xF6,0x80,0x01,0xF2,0x08,0xDF,0xF4,0x80,0x29,0xE4,0x4A,
0x10,0x00,0x90,0x00,0x93,0xA3,0xF8,0x54,0x07,0x24,0x0C,0xC8,0xC3,0x33,0xC4,0x54,0x0F,0x44,0x20,0xC8,0x96,
0x10,0x00,0xA0,0x00,0x83,0x40,0x04,0xF4,0x56,0x80,0x01,0x46,0xF6,0xDF,0xE4,0x80,0x0B,0x01,0x02,0x04,0x2D,
0x10,0x00,0xB0,0x00,0x08,0x10,0x20,0x40,0x80,0x90,0x00,0x26,0xE4,0x7E,0x01,0x93,0x60,0xBC,0xA3,0xFF,0xDE,
0x10,0x00,0xC0,0x00,0x54,0x3F,0x30,0xE5,0x09,0x54,0x1F,0xFE,0xE4,0x93,0xA3,0x60,0x01,0x0E,0xCF,0x54,0x62,
0x10,0x00,0xD0,0x00,0xC0,0x25,0xE0,0x60,0xA8,0x40,0xB8,0xE4,0x93,0xA3,0xFA,0xE4,0x93,0xA3,0xF8,0xE4,0x51,
0x10,0x00,0xE0,0x00,0x93,0xA3,0xC8,0xC5,0x82,0xC8,0xCA,0xC5,0x83,0xCA,0xF0,0xA3,0xC8,0xC5,0x82,0xC8,0xBD,
0x10,0x00,0xF0,0x00,0xCA,0xC5,0x83,0xCA,0xDF,0xE9,0xDE,0xE7,0x80,0xBE,0xC0,0xE0,0xC0,0xD0,0x75,0xD0,0xE4,
0x10,0x01,0x00,0x00,0x00,0xC0,0x00,0xC0,0x07,0xE5,0x98,0x30,0xE1,0x1B,0x53,0x98,0xFD,0xE5,0x19,0x30,0xA9,
0x10,0x01,0x10,0x00,0xE1,0x13,0xAF,0x0F,0x05,0x0F,0x74,0x21,0x2F,0xF8,0xE6,0xF5,0x99,0xE5,0x0F,0xB4,0x41,
0x10,0x01,0x20,0x00,0x33,0x03,0x53,0x19,0xFD,0xE5,0x98,0x30,0xE0,0x0E,0x53,0x98,0xFE,0x85,0x99,0x63,0x2B,
0x10,0x01,0x30,0x00,0xE5,0x63,0xB4,0x0A,0x03,0x43,0x19,0x01,0xE5,0x98,0x30,0xE7,0x03,0x53,0x98,0x7F,0x58,
0x10,0x01,0x40,0x00,0xD0,0x07,0xD0,0x00,0xD0,0xD0,0xD0,0xE0,0x32,0xC0,0xE0,0xC0,0xD0,0x75,0xD0,0x00,0x11,
0x10,0x01,0x50,0x00,0xC0,0x06,0xC0,0x07,0x53,0xD8,0xDF,0xAF,0x69,0x8F,0xDA,0xAE,0x68,0xAF,0x69,0xEE,0x6B,
0x10,0x01,0x60,0x00,0xF5,0xD2,0xAF,0x6B,0x8F,0xDC,0xAE,0x6A,0xAF,0x6B,0xEE,0xF5,0xD4,0x43,0xD8,0x40,0xFF,
0x10,0x01,0x70,0x00,0xD0,0x07,0xD0,0x06,0xD0,0xD0,0xD0,0xE0,0x32,0x75,0xB1,0xFF,0xE4,0xF5,0xB2,0x75,0x2B,
0x10,0x01,0x80,0x00,0xB3,0xFF,0xF5,0xB4,0x75,0xAC,0xFF,0xF5,0xAD,0x53,0xB3,0xFB,0x43,0xB4,0x04,0x53,0x03,
0x10,0x01,0x90,0x00,0xB3,0xFD,0x43,0xB4,0x02,0xF5,0x8E,0x43,0x8E,0x02,0x22,0xE4,0xFD,0xFC,0xC3,0xED,0xB1,
0x10,0x01,0xA0,0x00,0x9F,0xEC,0x9E,0x50,0x15,0xE4,0xFB,0xFA,0x0B,0xBB,0x00,0x01,0x0A,0xBA,0x01,0xF8,0x64,
0x10,0x01,0xB0,0x00,0xBB,0xF4,0xF5,0x0D,0xBD,0x00,0x01,0x0C,0x80,0xE4,0x22,0x7F,0x64,0x7E,0x00,0x12,0xCB,
0x10,0x01,0xC0,0x00,0x01,0x9B,0x12,0x01,0x79,0x7F,0xF4,0x7E,0x01,0x12,0x01,0x9B,0x75,0x90,0x04,0x12,0x4C,
0x07,0x01,0xD0,0x00,0x01,0x9B,0xE4,0xF5,0x90,0x80,0xEE,0xB5,
0x00,0x00,0x00,0x01,0xFF
};

// This protocol functions use bit banging so you can port this protocol with proper definition of GPIO pins
// ICSPFlags this structure use to show programming stage 
// ICP_BUFFER_DIR. this definition use to change ICP external logic buffer IC data flow direction (you may not use this chip and pin)
// ICP_DATA_DR. this definition use to change ICP data direction for the application enviroment itself. (E.g. STM32, Atmega, dsPIC pin direction) you may need to add more than one line for some platforms!
// ICP_DATA_WR this definition use to write serial data to pin
// ICP_CLK. this pin ICP clock output pin. This pin must be output for the application. 
// ICP_RST_HGH setting ICP reset pin to high level RESET pin is also an output
// ICP_RST_LOW setting ICP reset pin to low level
// ICP_RELAY you may use a relay output to connect and disconnect the MCU from application
// GLOBAL_INTERRUPT global interrupt flag you may need to disable interrupt routines for some part of the code
// CFG_Bytes[] this array contains config bytes
// delay_200ns() 200ns delays
// delay_1us() 1us delays

// bit delays for various type of communication parts (for keys, addresses, codes and datas)
#define ICP_100B_DELAY 50000 // 100 baud bit delay
#define ICP_8K3HB_DELAY 300 // 8300 baud half bit delay
#define ICP_115KHB_DELAY 20 // 115200 baud half bit delay
#define ICP_387KHB_DELAY 5 // 387500 baud half bit delay

void ICP_key(void) // send key sequence to start ICP function in chip
{
    #define ICP_KEYLEN 24
    unsigned long ICP_keydata = 0x5AA503;
    unsigned int ICP_bitcnt;
    ICP_BUFFER_DIR = 1; // output
    ICP_DATA_DR = 0; // output
    ICP_CLK=0;
    for(ICP_bitcnt=0;ICP_bitcnt<ICP_KEYLEN;ICP_bitcnt++)
    {
        if( (ICP_keydata) & (((unsigned long)(1)) << (ICP_KEYLEN-ICP_bitcnt-1) )){ICP_DATA_WR=1;}else {ICP_DATA_WR=0;}
        delay_200ns(ICP_8K3HB_DELAY);ICP_CLK=1;delay_200ns(ICP_8K3HB_DELAY);ICP_CLK=0;
    }
}

void ICP_resetkey(void) // The that send from RESET pin to reset the ICP protocol
{
    #define ICP_RKEYLEN 24
    unsigned long ICP_rkeydata = 0xAE1CB6;
    unsigned int ICP_bitcnt;
    for(ICP_bitcnt=0;ICP_bitcnt<ICP_RKEYLEN;ICP_bitcnt++)
    {
        if( (ICP_rkeydata) & (((unsigned long)(1)) << (ICP_RKEYLEN-ICP_bitcnt-1) )){ICP_RST_HGH;}else{ICP_RST_LOW;}
        delay_200ns(ICP_100B_DELAY);
    }
}

void ICP_bulkerase(void) // Bulk erase command
{
    #define ICP_ECODELEN 32
    unsigned long ICP_ecodedata = 0xE96966FF;
    unsigned int ICP_bitcnt;
    ICP_BUFFER_DIR = 1; // output
    ICP_DATA_DR = 0; // output
    ICP_CLK=0;
    for(ICP_bitcnt=0;ICP_bitcnt<ICP_ECODELEN;ICP_bitcnt++)
    {
        if( (ICP_ecodedata) & (((unsigned long)(1)) << (ICP_ECODELEN-ICP_bitcnt-1) ))ICP_DATA_WR=1;else ICP_DATA_WR=0;
        delay_200ns(ICP_115KHB_DELAY);ICP_CLK=1;delay_200ns(ICP_115KHB_DELAY);ICP_CLK=0;
    }
    ICP_DATA_WR=1;
    delay_1us(200000);
    ICP_CLK=1;
    delay_1us(2000);
    ICP_CLK=0;
    ICP_DATA_WR=0;
    delay_1us(2000);
}

void ICP_exitcode(void) // End the ICP protocol. if the code protection enabled after this command you can not read the code again.
{
    #define ICP_EXITCODELEN 24
    unsigned long ICP_exitcode = 0x0F78F0;
    unsigned int ICP_bitcnt;
    ICP_BUFFER_DIR = 1; // output
    ICP_DATA_DR = 0; // output
    ICP_CLK=0;
    for(ICP_bitcnt=0;ICP_bitcnt<ICP_EXITCODELEN;ICP_bitcnt++)
    {
        if( (ICP_exitcode) & (((unsigned long)(1)) << (ICP_EXITCODELEN-ICP_bitcnt-1) ))ICP_DATA_WR=1;else ICP_DATA_WR=0;
        delay_200ns(ICP_8K3HB_DELAY);ICP_CLK=1;delay_200ns(ICP_8K3HB_DELAY);ICP_CLK=0;
    }
    ICP_DATA_WR=0;
}

void ICP_ack(unsigned char ack) // ICP acknowledge bit read
{
    ICP_BUFFER_DIR = 1; // output
    ICP_DATA_DR = 0; // output
    ICP_CLK=0;
    if(ack){ICP_DATA_WR=1;}else{ICP_DATA_WR=0;}
    delay_200ns(ICP_387KHB_DELAY);ICP_CLK=1;delay_200ns(ICP_387KHB_DELAY);ICP_CLK=0;
    ICP_DATA_WR=0;
    delay_200ns(ICP_387KHB_DELAY);
}

void ICP_ackwr(unsigned char ack) // ICP acknowledge bit for write data
{
    delay_1us(20);
    if(ack){ICP_DATA_WR=1;}else{ICP_DATA_WR=0;}
    delay_1us(1);ICP_CLK=1;delay_1us(5);ICP_CLK=0;delay_1us(2);
    ICP_DATA_WR=0;
}

void ICP_bytewr(unsigned char data_byte) // Byte write function
{
    unsigned char ICP_bitcnt;
    for(ICP_bitcnt=0;ICP_bitcnt<8;ICP_bitcnt++)
    {
        if(data_byte&(1<<(7-ICP_bitcnt))){ICP_DATA_WR=1;}else{ICP_DATA_WR=0;}
        delay_200ns(ICP_387KHB_DELAY);ICP_CLK=1;delay_200ns(ICP_387KHB_DELAY);ICP_CLK=0;
    }
    ICP_DATA_WR=0;
}

unsigned char ICP_byterd(void) // Byte read function
{
    unsigned char ICP_bitcnt, ICP_databyte=0;
    ICP_BUFFER_DIR = 0; // input
    ICP_DATA_DR = 1; // input
    ICP_CLK=0;
    for(ICP_bitcnt=0;ICP_bitcnt<8;ICP_bitcnt++)
    {
        delay_200ns(ICP_387KHB_DELAY);ICP_CLK=1;
        if(ICP_DATA_RD){ICP_databyte|=( (unsigned char)(1) << (7-ICP_bitcnt) );}
        delay_200ns(ICP_387KHB_DELAY);ICP_CLK=0;
    }
    return ICP_databyte;
}

void ICP_adrload(unsigned int adrh, unsigned int adrm, unsigned int adrl) // ICP address load function
{
    ICP_BUFFER_DIR = 1; // output
    ICP_DATA_DR = 0; // output
    ICP_CLK=0;
    ICP_bytewr(adrh);
    ICP_bytewr(adrm);
    ICP_bytewr(adrl);
}

void Read_DeviceID(void) // ICP read device ID function
{
    ICP_RELAY = 1;
    delay_1us(600000);
    Target_DevID = 0;
    Target_RevID = 0;
    // islemci vdd si test edilir.
    ADC_ReadChannel( ADC_VDD_CHANNEL ); // checking for MCU voltage
    if( ADC_Result < 2048 ) // find you appropiate voltage level for you application
        goto ID_Read_End; // unsuccessfull read operaiton because of the voltage level. you may not use this part.
    ICP_RST_ICP;
    ICP_RST_LOW;
    delay_1us(1500);
    ICP_key();
    ICP_adrload(0x00,0x00,0x0B);
    Target_DevID=(ICP_byterd()<<8);   ICP_ack(1);
    ICP_adrload(0x00,0x00,0x0C);
    Target_DevID+=ICP_byterd();       ICP_ack(1);
    ICP_adrload(0x00,0x00,0x4C);
    Target_RevID=ICP_byterd();        ICP_ack(1); 
    ID_Read_End:
    ICP_RST_HGH;
    delay_1us(1500);
    ICP_RELAY = 0;
}

void ICP_Programming_Algorithm(void) // The main protocol function.
{
    ICSPFlags.bits.StartProgram = 0;

    ICSP_BUFFER_DIR = 1; // ICSP logic buffer output
    ICSP_RELAY = 1; // programlayici role kontagi kapatilir.
    ICP_RST_ICP;
    ICP_RST_HGH;

    GLOBAL_INTERRUPT = 0;  // global interrupts disable
    
	// Reading device ID first!
    TargetID_ReadTry = 0; // Try to read ID twice to break if there is a code protection
    ICP_Read_Device_ID:
    ICP_RST_LOW;
    delay_1us(1500);
    ICP_key();
    ICP_adrload(0x00,0x00,0x0B);
    Target_DevID=(ICP_byterd()<<8);   ICP_ack(1);
    ICP_adrload(0x00,0x00,0x0C);
    Target_DevID+=ICP_byterd();       ICP_ack(1);
    ICP_adrload(0x00,0x00,0x4C);
    Target_RevID=ICP_byterd();        ICP_ack(1); 
    ICP_RST_HGH;
    delay_1us(1500);
    GLOBAL_INTERRUPT = 1;  // global interrupts enable 
    
    if( ( (Target_DevID!=MCU_DEVICE_ID) || (Target_RevID!=0x4B) ) && (TargetID_ReadTry==0) ) {goto ICP_Erase_Memory;}
    if( Target_DevID!=MCU_DEVICE_ID )
        goto ICSPProgram_End;
    ICSPFlags.bits.DevID_OK = 1;
    if( Target_RevID!=0x4B )
        goto ICSPProgram_End;
    ICSPFlags.bits.RevID_OK = 1;
    
    ICP_Erase_Memory:
    delay_1us(1000000);
    GLOBAL_INTERRUPT = 0;  // global interrupts disable
    if((ICSPFlags.bits.DevID_OK && ICSPFlags.bits.RevID_OK) || ( ( (Target_DevID!=MCU_DEVICE_ID) || (Target_RevID!=0x4B) ) && (TargetID_ReadTry==0) ) )
    {
        // If the device ID match all device memory erased
		// It may not be match for the first time it is also erase for once a time to break code protection
        delay_1us(40000);
        ICP_RST_LOW;
        delay_1us(3500);
        ICP_key();
        ICP_adrload(0x00,0x00,0x0B);
        ICP_DummyRead=ICP_byterd();       ICP_ack(1);
        ICP_adrload(0x00,0x00,0x0C);
        ICP_DummyRead=ICP_byterd();       ICP_ack(1);
        ICP_adrload(0x00,0x00,0x4C);
        ICP_DummyRead=ICP_byterd();       ICP_ack(1); 
        delay_1us(30000);
        ICP_resetkey(); // Sending a key with RESET pin it is like a asynchronous serial protocol
        ICP_key();
        ICP_adrload(0x00,0x00,0x0B);
        ICP_DummyRead=ICP_byterd();       ICP_ack(1);
        ICP_adrload(0x00,0x00,0x0C);
        ICP_DummyRead=ICP_byterd();       ICP_ack(1);
        ICP_adrload(0x00,0x00,0x4C);
        ICP_DummyRead=ICP_byterd();       ICP_ack(1);
        ICP_RST_HGH;
        delay_1us(30000);
        ICP_RST_LOW;
        delay_1us(3000);
        ICP_key();
        ICP_bulkerase();
        ICP_RST_HGH;
        delay_1us(42000);
        ICP_RST_LOW;
        delay_1us(2000);
        ICP_exitcode();
        delay_1us(500);
        ICP_RST_HGH;
        // Read device ID one more time
        if( ( (Target_DevID!=MCU_DEVICE_ID) || (Target_RevID!=0x4B) ) && (TargetID_ReadTry == 0) ) {TargetID_ReadTry = 1;delay_1us(50000); goto ICP_Read_Device_ID;}
        ICSPFlags.bits.FlashMem_CLR = 1;
    }    
    delay_1us(1000000);    
    if(ICSPFlags.bits.FlashMem_CLR)
    {
	// Reading ID, UID etc. words memory area you may can investigate this area for more details...
        delay_1us(1000);
        ICP_RST_LOW;
        delay_1us(1500);
        ICP_key();
        ICP_adrload(0x00,0x00,0x0B);
        ICP_DummyRead=ICP_byterd();       ICP_ack(1);
        ICP_adrload(0x00,0x00,0x0C);
        ICP_DummyRead=ICP_byterd();       ICP_ack(1);
        ICP_adrload(0x00,0x00,0x4C);
        ICP_DummyRead=ICP_byterd();       ICP_ack(1); 
        ICP_RST_HGH;
        delay_1us(15000);
        ICP_RST_LOW;
        delay_1us(3200);
        ICP_key();
        delay_1us(2000);
        ICP_adrload(0x00,0x00,0x0B);
        ICP_DummyRead=ICP_byterd();       ICP_ack(1);
        ICP_adrload(0x00,0x00,0x0C);
        ICP_DummyRead=ICP_byterd();       ICP_ack(1);
        ICP_adrload(0x00,0x00,0x4C);
        ICP_DummyRead=ICP_byterd();       ICP_ack(1); 
        delay_1us(1700); // 1. part readings
        ICP_adrload(0x00,0x00,0x8C);
        ICP_DummyRead=ICP_byterd();       ICP_ack(1); // 0x00 
        ICP_adrload(0x00,0x00,0xCC);
        ICP_DummyRead=ICP_byterd();       ICP_ack(1); // 0x0C 
        delay_1us(1700); // 2. part readings
        ICP_adrload(0x00,0x00,0x04);
        ICP_DummyRead=ICP_byterd();       ICP_ack(1); // 0x02 
        ICP_adrload(0x00,0x00,0x44);
        ICP_DummyRead=ICP_byterd();       ICP_ack(1); // 0xBF 
        ICP_adrload(0x00,0x00,0x84);
        ICP_DummyRead=ICP_byterd();       ICP_ack(1); // 0x38
        ICP_adrload(0x00,0x00,0xC4);
        ICP_DummyRead=ICP_byterd();       ICP_ack(1); // 0x00
        delay_1us(1700); // 3. part readings
        ICP_adrload(0x00,0x01,0x04);
        ICP_DummyRead=ICP_byterd();       ICP_ack(1); // 0x6E
        ICP_adrload(0x00,0x01,0x44);
        ICP_DummyRead=ICP_byterd();       ICP_ack(1); // 0xDA
        ICP_adrload(0x00,0x01,0x84);
        ICP_DummyRead=ICP_byterd();       ICP_ack(1); // 0x51
        ICP_adrload(0x00,0x01,0xC4);
        ICP_DummyRead=ICP_byterd();       ICP_ack(1); // 0x04 
        delay_1us(1700); // 4. part readings
        ICP_adrload(0x00,0x02,0x04);
        ICP_DummyRead=ICP_byterd();       ICP_ack(1); // 0x96 
        ICP_adrload(0x00,0x02,0x44);
        ICP_DummyRead=ICP_byterd();       ICP_ack(1); // 0x25
        ICP_adrload(0x00,0x02,0x84);
        ICP_DummyRead=ICP_byterd();       ICP_ack(1); // 0x00
        ICP_adrload(0x00,0x02,0xC4);
        ICP_DummyRead=ICP_byterd();       ICP_ack(1); // 0x00
        delay_1us(1700); // 5. part readings
        ICP_adrload(0x00,0x08,0x04);
        ICP_DummyRead=ICP_byterd();       ICP_ack(1); // 0xFF
        ICP_adrload(0x00,0x08,0x44);
        ICP_DummyRead=ICP_byterd();       ICP_ack(1); // 0xFF
        ICP_adrload(0x00,0x08,0x84);
        ICP_DummyRead=ICP_byterd();       ICP_ack(1); // 0xFF
        ICP_adrload(0x00,0x08,0xC4);
        ICP_DummyRead=ICP_byterd();       ICP_ack(1); // 0xFF
        delay_1us(1700); // 6. part readings
        ICP_adrload(0x00,0x09,0x04);
        ICP_DummyRead=ICP_byterd();       ICP_ack(1); // 0xFF
        ICP_adrload(0x00,0x09,0x44);
        ICP_DummyRead=ICP_byterd();       ICP_ack(1); // 0xFF
        ICP_adrload(0x00,0x09,0x84);
        ICP_DummyRead=ICP_byterd();       ICP_ack(1); // 0xFF
        ICP_adrload(0x00,0x09,0xC4);
        ICP_DummyRead=ICP_byterd();       ICP_ack(1); // 0xFF
        delay_1us(1700); // 7. part readings
        ICP_adrload(0x00,0x0A,0x04);
        ICP_DummyRead=ICP_byterd();       ICP_ack(1); // 0xFF
        ICP_adrload(0x00,0x0A,0x44);
        ICP_DummyRead=ICP_byterd();       ICP_ack(1); // 0xFF
        ICP_adrload(0x00,0x0A,0x84);
        ICP_DummyRead=ICP_byterd();       ICP_ack(1); // 0xFF
        ICP_adrload(0x00,0x0A,0xC4);
        ICP_DummyRead=ICP_byterd();       ICP_ack(1); // 0xFF
        delay_1us(1700); // 8. part readings
        ICP_adrload(0x00,0x0B,0x04);
        ICP_DummyRead=ICP_byterd();       ICP_ack(1); // 0xFF
        ICP_adrload(0x00,0x0B,0x44);
        ICP_DummyRead=ICP_byterd();       ICP_ack(1); // 0xFF
        ICP_adrload(0x00,0x0B,0x84);
        ICP_DummyRead=ICP_byterd();       ICP_ack(1); // 0xFF
        ICP_adrload(0x00,0x0B,0xC4);
        ICP_DummyRead=ICP_byterd();       ICP_ack(1); // 0xFF
        delay_1us(1700); // Config bytes readings
        ICP_adrload(0xC0,0x00,0x00);
        for(CFG_index = 0; CFG_index < 8; CFG_index++)
        {CFG_Bytes[CFG_index]=ICP_byterd();if(CFG_index==7)ICP_ack(1);else ICP_ack(0); }
        delay_1us(38000);
        ICP_key();
        delay_1us(10);
        // some dummy reads...
        ICP_adrload(0x00,0x00,0x0B);
        ICP_DummyRead=ICP_byterd();       ICP_ack(1); 
        ICP_adrload(0x00,0x00,0x0C);
        ICP_DummyRead=ICP_byterd();       ICP_ack(1);
        ICP_adrload(0x00,0x00,0x4C);
        ICP_DummyRead=ICP_byterd();       ICP_ack(1); 
        delay_1us(30000);
        ICP_resetkey(); // Sending a key with RESET pin it is like a asynchronous serial protocol
        ICP_key();
        ICP_adrload(0x00,0x00,0x0B);
        Target_DevID=(ICP_byterd()<<8);   ICP_ack(1);
        ICP_adrload(0x00,0x00,0x0C);
        Target_DevID+=ICP_byterd();       ICP_ack(1);
        ICP_adrload(0x00,0x00,0x4C);
        Target_RevID=ICP_byterd();        ICP_ack(1); 
        ICP_RST_HGH;
        delay_1us(12000);
        ICP_RST_LOW;
        delay_1us(4000);
        ICP_key();
        delay_1us(5000);
        ICP_adrload(0xC0,0x00,0x21);
        ICP_bytewr(0xF9);ICP_ackwr(0); // 0xF9 means code protection 
        ICP_bytewr(0xFF);ICP_ackwr(0); // you can change these bytes to make a different configuration
        ICP_bytewr(0xFF);ICP_ackwr(0); // for more details look to the technical reference
        ICP_bytewr(0xFF);ICP_ackwr(0);
        ICP_bytewr(0xFF);ICP_ackwr(0);
        ICP_bytewr(0xFF);ICP_ackwr(0);
        ICP_bytewr(0xFF);ICP_ackwr(0);
        ICP_bytewr(0xFF);ICP_ackwr(1);
        delay_1us(5000); // after this point we start to write APROM
        
        hexfile_index = 0;
        APpage_index = 0;
        APROM_program_start:
        APhex_last = hexfile[hexfile_index++];
        APROM_adrh = hexfile[hexfile_index++];
        APROM_adrl = hexfile[hexfile_index++];
        APhex_code = hexfile[hexfile_index++];
        if(APhex_code == 0x01 && APpage_index == 0) goto APROM_program_finished; // hex file end of file code
        if(APpage_index == 0) // start of page
        {
            APpage_index = 32; // we write 32 bytes for every program page
            APROM_adr = (unsigned int)(APROM_adrl); APROM_adr |= (unsigned int)(APROM_adrh) << 8;
            APROM_adr = APROM_adr >> 2;
            APROM_adrl = (unsigned char)(APROM_adr & 0xFF);
            APROM_adrh = (unsigned char)((APROM_adr>>8)&0xFF);
            ICP_adrload(APROM_adrh,APROM_adrl,0x21); // loading page address
        }
        for(APROM_index = 0; APROM_index < 16; APROM_index++)
        {
            if(APROM_index < APhex_last)
                ICP_bytewr(hexfile[hexfile_index++]); // data writes 
            else
                ICP_bytewr(0xFF); // dummy writes
            APpage_index--;
            if(APpage_index==0)ICP_ackwr(1);else ICP_ackwr(0); 
        }
        hexfile_index++; // checksum passed you may check hex file checksum do need at this point
        if(APpage_index == 0)
        {delay_1us(1400);if(APhex_code == 0x01) goto APROM_program_finished;}
        goto APROM_program_start; // goto next line
        APROM_program_finished: 
        delay_1us(500000);
		
        // After this point we start to verify APROM memory region to verify our program
        hexfile_index = 0;
        APpage_index = 0;
        APROM_verify_start:
        APhex_last = hexfile[hexfile_index++];
        APROM_adrh = hexfile[hexfile_index++];
        APROM_adrl = hexfile[hexfile_index++];
        APhex_code = hexfile[hexfile_index++];
        if(APhex_code == 0x01) goto APROM_verify_finished; // hex file end of file code
        if(APpage_index == 0)
        {
            APpage_index = 32;
            APROM_adr = (unsigned int)(APROM_adrl); APROM_adr |= (unsigned int)(APROM_adrh) << 8;
            APROM_adr = APROM_adr >> 2;
            APROM_adrl = (unsigned char)(APROM_adr & 0xFF);
            APROM_adrh = (unsigned char)((APROM_adr>>8)&0xFF);
            ICP_adrload(APROM_adrh,APROM_adrl,0x00);
        }
        for(APROM_index = 0; APROM_index < 16; APROM_index++)
        {
            if(APROM_index < APhex_last)
            {
                ICP_DummyRead = ICP_byterd(); // data verify
                if(ICP_DummyRead != hexfile[hexfile_index++])
                    goto APROM_verify_failed;
            }
            else
            {
                ICP_DummyRead = ICP_byterd();
                if(ICP_DummyRead != 0xFF) // dummy verify (:
                    goto APROM_verify_failed;
            }
            APpage_index--;
            if(APpage_index==0)ICP_ack(1);else ICP_ack(0); 
        }
        hexfile_index++; // checksum passed
        if(APpage_index == 0)
        {delay_1us(1400);}
        goto APROM_verify_start; // goto next line
        APROM_verify_finished:
        ICSPFlags.bits.FlashVerify_OK = 1;
        ICSPFlags.bits.ConfigVerify_OK = 1;
        goto APROM_verify_OK;
        APROM_verify_failed:
        ICSPFlags.bits.FlashVerify_OK = 0;
        ICSPFlags.bits.ConfigVerify_OK = 0;
        APROM_verify_OK:
        ICP_RST_HGH;
        delay_1us(13000);
        ICP_RST_LOW; 
        delay_1us(13000);   
        ICP_exitcode(); // finishing the ICP protocol...
        delay_1us(500);
        ICP_RST_HGH;
        GLOBAL_INTERRUPT = 1;  // global interrupts enable 
    }
    ICSPProgram_End:
    asm("nop");
	
    if(ICSPFlags.bits.FlashVerify_OK && ICSPFlags.bits.ConfigVerify_OK) // well done you have successfully programed the chip!!!
	
    ICP_RST_LOW;
    ICSP_RELAY = 0; // releasing programming relay
    ICSP_BUFFER_DIR = 1; // ICSP logic buffer output
    delay_1us(1000000);
}
