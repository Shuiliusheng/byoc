#ifndef NVDLA_SDP_HEADER
#define NVDLA_SDP_HEADER
#define SDP_S_STATUS 0xb000
#define SDP_S_POINTER 0xb004
#define SDP_S_LUT_ACCESS_CFG 0xb008
#define SDP_S_LUT_ACCESS_DATA 0xb00c
#define SDP_S_LUT_CFG 0xb010
#define SDP_S_LUT_INFO 0xb014
#define SDP_S_LUT_LE_START 0xb018
#define SDP_S_LUT_LE_END 0xb01c
#define SDP_S_LUT_LO_START 0xb020
#define SDP_S_LUT_LO_END 0xb024
#define SDP_S_LUT_LE_SLOPE_SCALE 0xb028
#define SDP_S_LUT_LE_SLOPE_SHIFT 0xb02c
#define SDP_S_LUT_LO_SLOPE_SCALE 0xb030
#define SDP_S_LUT_LO_SLOPE_SHIFT 0xb034
#define SDP_D_OP_ENABLE 0xb038
#define SDP_D_DATA_CUBE_WIDTH 0xb03c
#define SDP_D_DATA_CUBE_HEIGHT 0xb040
#define SDP_D_DATA_CUBE_CHANNEL 0xb044
#define SDP_D_DST_BASE_ADDR_LOW 0xb048
#define SDP_D_DST_BASE_ADDR_HIGH 0xb04c
#define SDP_D_DST_LINE_STRIDE 0xb050
#define SDP_D_DST_SURFACE_STRIDE 0xb054
#define SDP_D_DP_BS_CFG 0xb058
#define SDP_D_DP_BS_ALU_CFG 0xb05c
#define SDP_D_DP_BS_ALU_SRC_VALUE 0xb060
#define SDP_D_DP_BS_MUL_CFG 0xb064
#define SDP_D_DP_BS_MUL_SRC_VALUE 0xb068
#define SDP_D_DP_BN_CFG 0xb06c
#define SDP_D_DP_BN_ALU_CFG 0xb070
#define SDP_D_DP_BN_ALU_SRC_VALUE 0xb074
#define SDP_D_DP_BN_MUL_CFG 0xb078
#define SDP_D_DP_BN_MUL_SRC_VALUE 0xb07c
#define SDP_D_DP_EW_CFG 0xb080
#define SDP_D_DP_EW_ALU_CFG 0xb084
#define SDP_D_DP_EW_ALU_SRC_VALUE 0xb088
#define SDP_D_DP_EW_ALU_CVT_OFFSET_VALUE 0xb08c
#define SDP_D_DP_EW_ALU_CVT_SCALE_VALUE 0xb090
#define SDP_D_DP_EW_ALU_CVT_TRUNCATE_VALUE 0xb094
#define SDP_D_DP_EW_MUL_CFG 0xb098
#define SDP_D_DP_EW_MUL_SRC_VALUE 0xb09c
#define SDP_D_DP_EW_MUL_CVT_OFFSET_VALUE 0xb0a0
#define SDP_D_DP_EW_MUL_CVT_SCALE_VALUE 0xb0a4
#define SDP_D_DP_EW_MUL_CVT_TRUNCATE_VALUE 0xb0a8
#define SDP_D_DP_EW_TRUNCATE_VALUE 0xb0ac
#define SDP_D_FEATURE_MODE_CFG 0xb0b0
#define SDP_D_DST_DMA_CFG 0xb0b4
#define SDP_D_DST_BATCH_STRIDE 0xb0b8
#define SDP_D_DATA_FORMAT 0xb0bc
#define SDP_D_CVT_OFFSET 0xb0c0
#define SDP_D_CVT_SCALE 0xb0c4
#define SDP_D_CVT_SHIFT 0xb0c8
#define SDP_D_STATUS 0xb0cc
#define SDP_D_STATUS_NAN_INPUT_NUM 0xb0d0
#define SDP_D_STATUS_INF_INPUT_NUM 0xb0d4
#define SDP_D_STATUS_NAN_OUTPUT_NUM 0xb0d8
#define SDP_D_PERF_ENABLE 0xb0dc
#define SDP_D_PERF_WDMA_WRITE_STALL 0xb0e0
#define SDP_D_PERF_LUT_UFLOW 0xb0e4
#define SDP_D_PERF_LUT_OFLOW 0xb0e8
#define SDP_D_PERF_OUT_SATURATION 0xb0ec
#define SDP_D_PERF_LUT_HYBRID 0xb0f0
#define SDP_D_PERF_LUT_LE_HIT 0xb0f4
#define SDP_D_PERF_LUT_LO_HIT 0xb0f8
#endif
