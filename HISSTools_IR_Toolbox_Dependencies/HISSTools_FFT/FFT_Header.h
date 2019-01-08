
#ifndef __FFT_HEADER__
#define __FFT_HEADER__

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#define SQRT_2_2 0.70710678118654752440084436210484904

#define FFTLOG2_TRIG_OFFSET ((HstFFT_UInt) 3)
#define PASS_TRIG_OFFSET ((HstFFT_UInt) 2)


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// 32 or 64 bits (assumes intel or GCC with 64 bit long to correctly identify 64 bit

#if defined( __x86_64__ ) || defined( __LP64__ )  || defined(_WIN64)
typedef unsigned long long HstFFT_UInt;
#else
typedef unsigned long HstFFT_UInt;
#endif


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


typedef struct _SplitDouble
{
    double *realp;
    double *imagp;

} SplitDouble;


typedef struct _SplitFloat
{
    float *realp;
    float *imagp;

} SplitFloat;


typedef struct _FFTSetupDouble
{
    HstFFT_UInt max_fft_log2;

    SplitDouble tables[28];

} FFTSetupDouble;

typedef struct _FFTSetupFloat
{
    HstFFT_UInt max_fft_log2;

    SplitFloat tables[28];

} FFTSetupFloat;


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#endif
