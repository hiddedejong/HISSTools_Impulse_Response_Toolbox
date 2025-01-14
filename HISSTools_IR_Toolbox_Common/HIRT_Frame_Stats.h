

#ifndef __HIRT_FRAME_STATS_
#define __HIRT_FRAME_STATS_

#include <AH_Types.h>


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////// Mode Enum ////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


typedef enum {

    MODE_COPY = 0,
    MODE_PEAKS = 1,
    MODE_SMOOTH = 2,
    MODE_ACCUMULATE = 3,

} t_frame_mode;


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////// Frame Stats Struct ///////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


typedef struct frame_stats
{
    double *current_frame;
    AH_UInt32 *ages;

    double alpha_u;
    double alpha_d;

    AH_UInt32 max_age;

    AH_UIntPtr frames;
    AH_UIntPtr max_N;
    AH_UIntPtr last_N;

    t_frame_mode mode;

} t_frame_stats;


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////// Function Prototypes ///////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


t_frame_stats *create_frame_stats(AH_UIntPtr max_N);
void destroy_frame_stats(t_frame_stats *stats);

void frame_stats_reset(t_frame_stats *stats, AH_Boolean full);
void frame_stats_mode(t_frame_stats *stats, t_frame_mode mode);
void frame_stats_max_age(t_frame_stats *stats, AH_UInt32 max_age);
void frame_stats_alpha(t_frame_stats *stats, double alpha_u, double alpha_d);

void frame_stats_write(t_frame_stats *stats, float *in, AH_UIntPtr N);
void frame_stats_read(t_frame_stats *stats, float *out, AH_UIntPtr N);


#endif /*__HIRT_FRAME_STATS_ */
