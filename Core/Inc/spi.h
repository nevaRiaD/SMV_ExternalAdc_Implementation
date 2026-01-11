/*

*/

#ifndef SPI_H
#define SPI_H

#include <stm32f446xx.h>
#include "stm32f4xx_hal_spi.h"

extern SPI_HandleTypeDef hspi2;

void spi_init(void);
void spi_deinit(void);

#endif /* SPI_H */