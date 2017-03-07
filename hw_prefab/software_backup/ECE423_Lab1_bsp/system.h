/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'cpu' in SOPC Builder design 'ECE423_QSYS'
 * SOPC Builder design path: ../../ECE423_QSYS.sopcinfo
 *
 * Generated: Tue Jan 10 21:14:33 EST 2017
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_gen2"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x20100820
#define ALT_CPU_CPU_ARCH_NIOS2_R1
#define ALT_CPU_CPU_FREQ 125000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "fast"
#define ALT_CPU_DATA_ADDR_WIDTH 0x1e
#define ALT_CPU_DCACHE_BYPASS_MASK 0x80000000
#define ALT_CPU_DCACHE_LINE_SIZE 32
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 5
#define ALT_CPU_DCACHE_SIZE 16384
#define ALT_CPU_EXCEPTION_ADDR 0x20080020
#define ALT_CPU_FLASH_ACCELERATOR_LINES 0
#define ALT_CPU_FLASH_ACCELERATOR_LINE_SIZE 0
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 125000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 1
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_EXTRA_EXCEPTION_INFO
#define ALT_CPU_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 32
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 5
#define ALT_CPU_ICACHE_SIZE 4096
#define ALT_CPU_INITDA_SUPPORTED
#define ALT_CPU_INST_ADDR_WIDTH 0x1e
#define ALT_CPU_NAME "cpu"
#define ALT_CPU_NUM_OF_SHADOW_REG_SETS 0
#define ALT_CPU_OCI_VERSION 1
#define ALT_CPU_RESET_ADDR 0x20080000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x20100820
#define NIOS2_CPU_ARCH_NIOS2_R1
#define NIOS2_CPU_FREQ 125000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "fast"
#define NIOS2_DATA_ADDR_WIDTH 0x1e
#define NIOS2_DCACHE_BYPASS_MASK 0x80000000
#define NIOS2_DCACHE_LINE_SIZE 32
#define NIOS2_DCACHE_LINE_SIZE_LOG2 5
#define NIOS2_DCACHE_SIZE 16384
#define NIOS2_EXCEPTION_ADDR 0x20080020
#define NIOS2_FLASH_ACCELERATOR_LINES 0
#define NIOS2_FLASH_ACCELERATOR_LINE_SIZE 0
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 1
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_EXTRA_EXCEPTION_INFO
#define NIOS2_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 32
#define NIOS2_ICACHE_LINE_SIZE_LOG2 5
#define NIOS2_ICACHE_SIZE 4096
#define NIOS2_INITDA_SUPPORTED
#define NIOS2_INST_ADDR_WIDTH 0x1e
#define NIOS2_NUM_OF_SHADOW_REG_SETS 0
#define NIOS2_OCI_VERSION 1
#define NIOS2_RESET_ADDR 0x20080000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_SYSID_QSYS
#define __ALTERA_AVALON_TIMER
#define __ALTERA_GENERIC_TRISTATE_CONTROLLER
#define __ALTERA_MEM_IF_LPDDR2_EMIF
#define __ALTERA_MSGDMA
#define __ALTERA_NIOS2_GEN2
#define __SD_CONT


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone V"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/jtag_uart"
#define ALT_STDERR_BASE 0x201014f8
#define ALT_STDERR_DEV jtag_uart
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/jtag_uart"
#define ALT_STDIN_BASE 0x201014f8
#define ALT_STDIN_DEV jtag_uart
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/jtag_uart"
#define ALT_STDOUT_BASE 0x201014f8
#define ALT_STDOUT_DEV jtag_uart
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "ECE423_QSYS"


/*
 * hal configuration
 *
 */

#define ALT_INCLUDE_INSTRUCTION_RELATED_EXCEPTION_API
#define ALT_MAX_FD 32
#define ALT_SYS_CLK none
#define ALT_TIMESTAMP_CLK TIMER_0


/*
 * i2c_scl configuration
 *
 */

#define ALT_MODULE_CLASS_i2c_scl altera_avalon_pio
#define I2C_SCL_BASE 0x201014d0
#define I2C_SCL_BIT_CLEARING_EDGE_REGISTER 0
#define I2C_SCL_BIT_MODIFYING_OUTPUT_REGISTER 0
#define I2C_SCL_CAPTURE 0
#define I2C_SCL_DATA_WIDTH 1
#define I2C_SCL_DO_TEST_BENCH_WIRING 0
#define I2C_SCL_DRIVEN_SIM_VALUE 0
#define I2C_SCL_EDGE_TYPE "NONE"
#define I2C_SCL_FREQ 125000000
#define I2C_SCL_HAS_IN 0
#define I2C_SCL_HAS_OUT 1
#define I2C_SCL_HAS_TRI 0
#define I2C_SCL_IRQ -1
#define I2C_SCL_IRQ_INTERRUPT_CONTROLLER_ID -1
#define I2C_SCL_IRQ_TYPE "NONE"
#define I2C_SCL_NAME "/dev/i2c_scl"
#define I2C_SCL_RESET_VALUE 0
#define I2C_SCL_SPAN 16
#define I2C_SCL_TYPE "altera_avalon_pio"


/*
 * jtag_uart configuration
 *
 */

#define ALT_MODULE_CLASS_jtag_uart altera_avalon_jtag_uart
#define JTAG_UART_BASE 0x201014f8
#define JTAG_UART_IRQ 1
#define JTAG_UART_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_UART_NAME "/dev/jtag_uart"
#define JTAG_UART_READ_DEPTH 64
#define JTAG_UART_READ_THRESHOLD 8
#define JTAG_UART_SPAN 8
#define JTAG_UART_TYPE "altera_avalon_jtag_uart"
#define JTAG_UART_WRITE_DEPTH 64
#define JTAG_UART_WRITE_THRESHOLD 8


/*
 * key configuration
 *
 */

#define ALT_MODULE_CLASS_key altera_avalon_pio
#define KEY_BASE 0x201014e0
#define KEY_BIT_CLEARING_EDGE_REGISTER 0
#define KEY_BIT_MODIFYING_OUTPUT_REGISTER 0
#define KEY_CAPTURE 1
#define KEY_DATA_WIDTH 4
#define KEY_DO_TEST_BENCH_WIRING 0
#define KEY_DRIVEN_SIM_VALUE 0
#define KEY_EDGE_TYPE "FALLING"
#define KEY_FREQ 125000000
#define KEY_HAS_IN 1
#define KEY_HAS_OUT 0
#define KEY_HAS_TRI 0
#define KEY_IRQ 2
#define KEY_IRQ_INTERRUPT_CONTROLLER_ID 0
#define KEY_IRQ_TYPE "EDGE"
#define KEY_NAME "/dev/key"
#define KEY_RESET_VALUE 0
#define KEY_SPAN 16
#define KEY_TYPE "altera_avalon_pio"


/*
 * ledg configuration
 *
 */

#define ALT_MODULE_CLASS_ledg altera_avalon_pio
#define LEDG_BASE 0x20101480
#define LEDG_BIT_CLEARING_EDGE_REGISTER 0
#define LEDG_BIT_MODIFYING_OUTPUT_REGISTER 1
#define LEDG_CAPTURE 0
#define LEDG_DATA_WIDTH 8
#define LEDG_DO_TEST_BENCH_WIRING 0
#define LEDG_DRIVEN_SIM_VALUE 0
#define LEDG_EDGE_TYPE "NONE"
#define LEDG_FREQ 125000000
#define LEDG_HAS_IN 0
#define LEDG_HAS_OUT 1
#define LEDG_HAS_TRI 0
#define LEDG_IRQ -1
#define LEDG_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LEDG_IRQ_TYPE "NONE"
#define LEDG_NAME "/dev/ledg"
#define LEDG_RESET_VALUE 0
#define LEDG_SPAN 32
#define LEDG_TYPE "altera_avalon_pio"


/*
 * ledr configuration
 *
 */

#define ALT_MODULE_CLASS_ledr altera_avalon_pio
#define LEDR_BASE 0x20101460
#define LEDR_BIT_CLEARING_EDGE_REGISTER 0
#define LEDR_BIT_MODIFYING_OUTPUT_REGISTER 1
#define LEDR_CAPTURE 0
#define LEDR_DATA_WIDTH 8
#define LEDR_DO_TEST_BENCH_WIRING 0
#define LEDR_DRIVEN_SIM_VALUE 0
#define LEDR_EDGE_TYPE "NONE"
#define LEDR_FREQ 125000000
#define LEDR_HAS_IN 0
#define LEDR_HAS_OUT 1
#define LEDR_HAS_TRI 0
#define LEDR_IRQ -1
#define LEDR_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LEDR_IRQ_TYPE "NONE"
#define LEDR_NAME "/dev/ledr"
#define LEDR_RESET_VALUE 0
#define LEDR_SPAN 32
#define LEDR_TYPE "altera_avalon_pio"


/*
 * lpddr2 configuration
 *
 */

#define ALT_MODULE_CLASS_lpddr2 altera_mem_if_lpddr2_emif
#define LPDDR2_BASE 0x0
#define LPDDR2_IRQ -1
#define LPDDR2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LPDDR2_NAME "/dev/lpddr2"
#define LPDDR2_SPAN 536870912
#define LPDDR2_TYPE "altera_mem_if_lpddr2_emif"


/*
 * sd_cont_0 configuration
 *
 */

#define ALT_MODULE_CLASS_sd_cont_0 sd_cont
#define SD_CONT_0_BASE 0x20101000
#define SD_CONT_0_IRQ -1
#define SD_CONT_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SD_CONT_0_NAME "/dev/sd_cont_0"
#define SD_CONT_0_SPAN 1024
#define SD_CONT_0_TYPE "sd_cont"


/*
 * sram configuration
 *
 */

#define ALT_MODULE_CLASS_sram altera_generic_tristate_controller
#define SRAM_BASE 0x20080000
#define SRAM_IRQ -1
#define SRAM_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SRAM_NAME "/dev/sram"
#define SRAM_SPAN 524288
#define SRAM_SRAM_MEMORY_SIZE 524288
#define SRAM_SRAM_MEMORY_UNITS 1
#define SRAM_SSRAM_DATA_WIDTH 16
#define SRAM_TYPE "altera_generic_tristate_controller"


/*
 * sysid configuration
 *
 */

#define ALT_MODULE_CLASS_sysid altera_avalon_sysid_qsys
#define SYSID_BASE 0x201014f0
#define SYSID_ID 0
#define SYSID_IRQ -1
#define SYSID_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SYSID_NAME "/dev/sysid"
#define SYSID_SPAN 8
#define SYSID_TIMESTAMP 1484098491
#define SYSID_TYPE "altera_avalon_sysid_qsys"


/*
 * timer_0 configuration
 *
 */

#define ALT_MODULE_CLASS_timer_0 altera_avalon_timer
#define TIMER_0_ALWAYS_RUN 0
#define TIMER_0_BASE 0x201014a0
#define TIMER_0_COUNTER_SIZE 32
#define TIMER_0_FIXED_PERIOD 0
#define TIMER_0_FREQ 125000000
#define TIMER_0_IRQ 0
#define TIMER_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define TIMER_0_LOAD_VALUE 124999
#define TIMER_0_MULT 0.001
#define TIMER_0_NAME "/dev/timer_0"
#define TIMER_0_PERIOD 1
#define TIMER_0_PERIOD_UNITS "ms"
#define TIMER_0_RESET_OUTPUT 0
#define TIMER_0_SNAPSHOT 1
#define TIMER_0_SPAN 32
#define TIMER_0_TICKS_PER_SEC 1000
#define TIMER_0_TIMEOUT_PULSE_OUTPUT 0
#define TIMER_0_TYPE "altera_avalon_timer"


/*
 * timer_1 configuration
 *
 */

#define ALT_MODULE_CLASS_timer_1 altera_avalon_timer
#define TIMER_1_ALWAYS_RUN 0
#define TIMER_1_BASE 0x20101400
#define TIMER_1_COUNTER_SIZE 64
#define TIMER_1_FIXED_PERIOD 0
#define TIMER_1_FREQ 125000000
#define TIMER_1_IRQ 4
#define TIMER_1_IRQ_INTERRUPT_CONTROLLER_ID 0
#define TIMER_1_LOAD_VALUE 124
#define TIMER_1_MULT 1.0E-6
#define TIMER_1_NAME "/dev/timer_1"
#define TIMER_1_PERIOD 1
#define TIMER_1_PERIOD_UNITS "us"
#define TIMER_1_RESET_OUTPUT 0
#define TIMER_1_SNAPSHOT 1
#define TIMER_1_SPAN 64
#define TIMER_1_TICKS_PER_SEC 1000000
#define TIMER_1_TIMEOUT_PULSE_OUTPUT 0
#define TIMER_1_TYPE "altera_avalon_timer"


/*
 * video_dma_csr configuration
 *
 */

#define ALT_MODULE_CLASS_video_dma_csr altera_msgdma
#define VIDEO_DMA_CSR_BASE 0x20101440
#define VIDEO_DMA_CSR_BURST_ENABLE 1
#define VIDEO_DMA_CSR_BURST_WRAPPING_SUPPORT 1
#define VIDEO_DMA_CSR_CHANNEL_ENABLE 0
#define VIDEO_DMA_CSR_CHANNEL_ENABLE_DERIVED 0
#define VIDEO_DMA_CSR_CHANNEL_WIDTH 8
#define VIDEO_DMA_CSR_DATA_FIFO_DEPTH 1024
#define VIDEO_DMA_CSR_DATA_WIDTH 32
#define VIDEO_DMA_CSR_DESCRIPTOR_FIFO_DEPTH 32
#define VIDEO_DMA_CSR_DMA_MODE 1
#define VIDEO_DMA_CSR_ENHANCED_FEATURES 0
#define VIDEO_DMA_CSR_ERROR_ENABLE 0
#define VIDEO_DMA_CSR_ERROR_ENABLE_DERIVED 0
#define VIDEO_DMA_CSR_ERROR_WIDTH 8
#define VIDEO_DMA_CSR_IRQ 3
#define VIDEO_DMA_CSR_IRQ_INTERRUPT_CONTROLLER_ID 0
#define VIDEO_DMA_CSR_MAX_BURST_COUNT 128
#define VIDEO_DMA_CSR_MAX_BYTE 16777216
#define VIDEO_DMA_CSR_MAX_STRIDE 1
#define VIDEO_DMA_CSR_NAME "/dev/video_dma_csr"
#define VIDEO_DMA_CSR_PACKET_ENABLE 1
#define VIDEO_DMA_CSR_PACKET_ENABLE_DERIVED 1
#define VIDEO_DMA_CSR_PREFETCHER_ENABLE 0
#define VIDEO_DMA_CSR_PROGRAMMABLE_BURST_ENABLE 0
#define VIDEO_DMA_CSR_RESPONSE_PORT 2
#define VIDEO_DMA_CSR_SPAN 32
#define VIDEO_DMA_CSR_STRIDE_ENABLE 0
#define VIDEO_DMA_CSR_STRIDE_ENABLE_DERIVED 0
#define VIDEO_DMA_CSR_TRANSFER_TYPE "Full Word Accesses Only"
#define VIDEO_DMA_CSR_TYPE "altera_msgdma"


/*
 * video_dma_descriptor_slave configuration
 *
 */

#define ALT_MODULE_CLASS_video_dma_descriptor_slave altera_msgdma
#define VIDEO_DMA_DESCRIPTOR_SLAVE_BASE 0x201014c0
#define VIDEO_DMA_DESCRIPTOR_SLAVE_BURST_ENABLE 1
#define VIDEO_DMA_DESCRIPTOR_SLAVE_BURST_WRAPPING_SUPPORT 1
#define VIDEO_DMA_DESCRIPTOR_SLAVE_CHANNEL_ENABLE 0
#define VIDEO_DMA_DESCRIPTOR_SLAVE_CHANNEL_ENABLE_DERIVED 0
#define VIDEO_DMA_DESCRIPTOR_SLAVE_CHANNEL_WIDTH 8
#define VIDEO_DMA_DESCRIPTOR_SLAVE_DATA_FIFO_DEPTH 1024
#define VIDEO_DMA_DESCRIPTOR_SLAVE_DATA_WIDTH 32
#define VIDEO_DMA_DESCRIPTOR_SLAVE_DESCRIPTOR_FIFO_DEPTH 32
#define VIDEO_DMA_DESCRIPTOR_SLAVE_DMA_MODE 1
#define VIDEO_DMA_DESCRIPTOR_SLAVE_ENHANCED_FEATURES 0
#define VIDEO_DMA_DESCRIPTOR_SLAVE_ERROR_ENABLE 0
#define VIDEO_DMA_DESCRIPTOR_SLAVE_ERROR_ENABLE_DERIVED 0
#define VIDEO_DMA_DESCRIPTOR_SLAVE_ERROR_WIDTH 8
#define VIDEO_DMA_DESCRIPTOR_SLAVE_IRQ -1
#define VIDEO_DMA_DESCRIPTOR_SLAVE_IRQ_INTERRUPT_CONTROLLER_ID -1
#define VIDEO_DMA_DESCRIPTOR_SLAVE_MAX_BURST_COUNT 128
#define VIDEO_DMA_DESCRIPTOR_SLAVE_MAX_BYTE 16777216
#define VIDEO_DMA_DESCRIPTOR_SLAVE_MAX_STRIDE 1
#define VIDEO_DMA_DESCRIPTOR_SLAVE_NAME "/dev/video_dma_descriptor_slave"
#define VIDEO_DMA_DESCRIPTOR_SLAVE_PACKET_ENABLE 1
#define VIDEO_DMA_DESCRIPTOR_SLAVE_PACKET_ENABLE_DERIVED 1
#define VIDEO_DMA_DESCRIPTOR_SLAVE_PREFETCHER_ENABLE 0
#define VIDEO_DMA_DESCRIPTOR_SLAVE_PROGRAMMABLE_BURST_ENABLE 0
#define VIDEO_DMA_DESCRIPTOR_SLAVE_RESPONSE_PORT 2
#define VIDEO_DMA_DESCRIPTOR_SLAVE_SPAN 16
#define VIDEO_DMA_DESCRIPTOR_SLAVE_STRIDE_ENABLE 0
#define VIDEO_DMA_DESCRIPTOR_SLAVE_STRIDE_ENABLE_DERIVED 0
#define VIDEO_DMA_DESCRIPTOR_SLAVE_TRANSFER_TYPE "Full Word Accesses Only"
#define VIDEO_DMA_DESCRIPTOR_SLAVE_TYPE "altera_msgdma"

#endif /* __SYSTEM_H_ */
