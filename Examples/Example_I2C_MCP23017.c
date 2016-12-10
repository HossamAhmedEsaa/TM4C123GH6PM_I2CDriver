// File: Example_I2C_MCP23017.c
// Title:       Example of using I2C Driver with MCP23017 I/O Expander
// Author:      William Huang
// Date:        2016/12/10
 
#include "I2C.h"

#define MCP23017_ADDR   0x20
#define IODIRA_ADDR     0x00
#define GPIOA_ADDR      0x12
#define GPIOB_ADDR      0x13

int main(void)
{
    uint32_t i;
    uint8_t data;
    
    I2C1_MasterOpen();  // Initializer I2C1 for master operation
    I2C1_WriteData(MCP23017_ADDR, IODIRA_ADDR, 0x00);   // Configure IODIRA to all output
    
    for(;;)
    {
        I2C1_WriteData(MCP23017_ADDR, GPIOA_ADDR, 0xFF);   // Set GPIOA to all LOW
        for(i = 0; i < 400000; i++);
        I2C1_WriteData(MCP23017_ADDR, GPIOA_ADDR, 0x00);   // Set GPIOA to all HIGH
        for(i = 0; i < 400000; i++);
        
        // Read data from GPIOB
        I2C1_ReadData(MCP23017_ADDR, GPIOB_ADDR, &data);
        data = data;
        
    }
    
    return 0;
}