#ifndef NVDLA_CSC_HEADER
#define NVDLA_CSC_HEADER
#define CSC_S_STATUS 0x6000
#define CSC_S_POINTER 0x6004
#define CSC_D_OP_ENABLE 0x6008
#define CSC_D_MISC_CFG 0x600c
#define CSC_D_DATAIN_FORMAT 0x6010
#define CSC_D_DATAIN_SIZE_EXT_0 0x6014
#define CSC_D_DATAIN_SIZE_EXT_1 0x6018
#define CSC_D_BATCH_NUMBER 0x601c
#define CSC_D_POST_Y_EXTENSION 0x6020
#define CSC_D_ENTRY_PER_SLICE 0x6024
#define CSC_D_WEIGHT_FORMAT 0x6028
#define CSC_D_WEIGHT_SIZE_EXT_0 0x602c
#define CSC_D_WEIGHT_SIZE_EXT_1 0x6030
#define CSC_D_WEIGHT_BYTES 0x6034
#define CSC_D_WMB_BYTES 0x6038
#define CSC_D_DATAOUT_SIZE_0 0x603c
#define CSC_D_DATAOUT_SIZE_1 0x6040
#define CSC_D_ATOMICS 0x6044
#define CSC_D_RELEASE 0x6048
#define CSC_D_CONV_STRIDE_EXT 0x604c
#define CSC_D_DILATION_EXT 0x6050
#define CSC_D_ZERO_PADDING 0x6054
#define CSC_D_ZERO_PADDING_VALUE 0x6058
#define CSC_D_BANK 0x605c
#define CSC_D_PRA_CFG 0x6060
#endif
