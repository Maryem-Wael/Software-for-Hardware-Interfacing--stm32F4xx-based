
#ifndef INC_USART_H_
#define INC_USART_H_


#define TRANS_COMPLETE  ((*USART_SR)&(1<<6))

#define USART_REG(PORT_ID, REG_ID) ((unsigned int*)(PORT_ID + REG_ID))

#define RCC_APB1ENR    USART_REG(0x40023800 , 0x40)

#define USART_SR       USART_REG(0x40004400 , 0x00)
#define USART_DR       USART_REG(0x40004400 , 0x04)
#define USART_BRR      USART_REG(0x40004400 , 0x08)
#define USART_CR1      USART_REG(0x40004400 , 0x0C)
#define USART_CR2      USART_REG(0x40004400 , 0x10)

void USART_EnableClock(void);
void USART_INIT(void);
void USART_TRANSMIT(char* str);


#endif /* INC_USART_H_ */
