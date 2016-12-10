# TM4C123GH6PM_I2CDriver
I2C Driver for TM4C123GH6PM

Implements I2C using CMSIS. At the moment, only I2C module 1 is implemented. The clock speed (SCL) is configured to 100 KHz.

# Functions
*'x' is the module number. For example, I2C module 1 is I2C1_functionName. <br>
I2Cx_MasterOpen<br>
I2Cx_WriteData<br>
I2Cx_ReadData<br>

*Note: Only Module 1 is implemented so far.

# Pinout
SCL&#8209;SDA&#8209;Module <br>
PA6&#8209;PA7&#8209;I2C1
