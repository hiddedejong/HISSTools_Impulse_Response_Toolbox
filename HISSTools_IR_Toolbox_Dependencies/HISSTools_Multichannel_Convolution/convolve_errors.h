
#ifndef __CONVOLVE_ERRORS__
#define __CONVOLVE_ERRORS__


typedef enum
{
    CONVOLVE_ERR_NONE = 0,
    CONVOLVE_ERR_IN_CHAN_OUT_OF_RANGE = 1,
    CONVOLVE_ERR_OUT_CHAN_OUT_OF_RANGE = 2,
    CONVOLVE_ERR_MEM_UNAVAILABLE = 3,
    CONVOLVE_ERR_MEM_ALLOC_TOO_SMALL = 4,
    CONVOLVE_ERR_TIME_IMPULSE_TOO_LONG = 5,
    CONVOLVE_ERR_TIME_LENGTH_OUT_OF_RANGE = 6,
    CONVOLVE_ERR_PARTITION_LENGTH_TOO_LARGE = 7,
    CONVOLVE_ERR_FFT_SIZE_MAX_TOO_SMALL = 8,
    CONVOLVE_ERR_FFT_SIZE_MAX_TOO_LARGE = 9,
    CONVOLVE_ERR_FFT_SIZE_MAX_NON_POWER_OF_TWO = 10,
    CONVOLVE_ERR_FFT_SIZE_OUT_OF_RANGE = 11,
    CONVOLVE_ERR_FFT_SIZE_NON_POWER_OF_TWO = 12,

} t_convolve_error;


#endif /* __CONVOLVE_ERRORS__ */
