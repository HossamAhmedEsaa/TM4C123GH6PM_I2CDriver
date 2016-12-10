# TM4C123GH6PM_I2CDriver
I2C Driver for TM4C123GH6PM

Implements I2C using CMSIS. At the moment, only I2C module 1 is implemented. The clock speed (SCL) is configured to 100 KHz.

# Functions
*'x' is the module number. For example, I2C module 1 is I2C1_functionName
I2Cx_MasterOpen
I2Cx_WriteData
I2Cx_ReadData

*Note: Only Module 1 is implemented so far.

# Pinout
SCL     SDA     Module
=======================
 PA6     PA7     I2C1
