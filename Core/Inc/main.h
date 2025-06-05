/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32u5xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define USER_TX_Pin GPIO_PIN_0
#define USER_TX_GPIO_Port GPIOA
#define USER_RX_Pin GPIO_PIN_1
#define USER_RX_GPIO_Port GPIOA
#define NBIOT_BOOT_Pin GPIO_PIN_2
#define NBIOT_BOOT_GPIO_Port GPIOA
#define NBIOT_PSM_Pin GPIO_PIN_3
#define NBIOT_PSM_GPIO_Port GPIOA
#define NBIOT_RST_Pin GPIO_PIN_4
#define NBIOT_RST_GPIO_Port GPIOA
#define NBIOT_RX_Pin GPIO_PIN_5
#define NBIOT_RX_GPIO_Port GPIOA
#define NBIOT_PWR_Pin GPIO_PIN_6
#define NBIOT_PWR_GPIO_Port GPIOA
#define NBIOT_TX_Pin GPIO_PIN_7
#define NBIOT_TX_GPIO_Port GPIOA
#define SIM_CD_Pin GPIO_PIN_0
#define SIM_CD_GPIO_Port GPIOB
#define PSR_INT_Pin GPIO_PIN_1
#define PSR_INT_GPIO_Port GPIOB
#define GNSS_RST_Pin GPIO_PIN_2
#define GNSS_RST_GPIO_Port GPIOB
#define PSR_I2C_SCL_Pin GPIO_PIN_10
#define PSR_I2C_SCL_GPIO_Port GPIOB
#define FLASH_CS_Pin GPIO_PIN_12
#define FLASH_CS_GPIO_Port GPIOB
#define GNSS_PWR_Pin GPIO_PIN_8
#define GNSS_PWR_GPIO_Port GPIOA
#define GNSS_TX_Pin GPIO_PIN_9
#define GNSS_TX_GPIO_Port GPIOA
#define GNSS_RX_Pin GPIO_PIN_10
#define GNSS_RX_GPIO_Port GPIOA
#define FLASH_WP_Pin GPIO_PIN_11
#define FLASH_WP_GPIO_Port GPIOA
#define FLASH_RST_Pin GPIO_PIN_12
#define FLASH_RST_GPIO_Port GPIOA
#define SWDIO_Pin GPIO_PIN_13
#define SWDIO_GPIO_Port GPIOA
#define SWCLK_Pin GPIO_PIN_14
#define SWCLK_GPIO_Port GPIOA
#define USER_LED_Pin GPIO_PIN_15
#define USER_LED_GPIO_Port GPIOA
#define LSM_I2C_SDA_Pin GPIO_PIN_3
#define LSM_I2C_SDA_GPIO_Port GPIOB
#define LSM_INT1_XL_Pin GPIO_PIN_4
#define LSM_INT1_XL_GPIO_Port GPIOB
#define LSM_INT2_XL_Pin GPIO_PIN_5
#define LSM_INT2_XL_GPIO_Port GPIOB
#define LSM_I2C_SCL_Pin GPIO_PIN_6
#define LSM_I2C_SCL_GPIO_Port GPIOB
#define PSR_I2C_SDA_Pin GPIO_PIN_7
#define PSR_I2C_SDA_GPIO_Port GPIOB
#define USER_BT_Pin GPIO_PIN_8
#define USER_BT_GPIO_Port GPIOB
#define LSM_INT_MAG_Pin GPIO_PIN_9
#define LSM_INT_MAG_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
