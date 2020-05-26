#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include "mss.h"

BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID)
{
	return TRUE;
}

DLLEXPORT S32 WINAPI AIL_enumerate_3D_providers(HPROENUM *next, HPROVIDER *dest, C8 **name)
{
	return 0;
};

DLLEXPORT void WINAPI AIL_release_3D_sample_handle(H3DSAMPLE S)
{
};

DLLEXPORT void WINAPI AIL_close_3D_provider(HPROVIDER lib)
{
};

DLLEXPORT void WINAPI AIL_set_3D_provider_preference(HPROVIDER lib, C8 const *name, void const *val)
{
};

DLLEXPORT M3DRESULT WINAPI AIL_open_3D_provider(HPROVIDER lib)
{
	return -1;
};

DLLEXPORT C8 *WINAPI AIL_last_error(void)
{
	return NULL;
};

DLLEXPORT S32 WINAPI AIL_3D_room_type(HPROVIDER lib)
{
	return 0;
};

DLLEXPORT void WINAPI AIL_set_3D_room_type(HPROVIDER lib, S32 room_type)
{
};

DLLEXPORT void WINAPI AIL_3D_provider_attribute(HPROVIDER lib, C8 const *name, void *val)
{
};

DLLEXPORT H3DSAMPLE WINAPI AIL_allocate_3D_sample_handle(HPROVIDER lib)
{
	return NULL;
};

DLLEXPORT void WINAPI AIL_set_3D_sample_effects_level(H3DSAMPLE S, F32 effects_level)
{
};

DLLEXPORT void WINAPI AIL_set_3D_speaker_type(HPROVIDER lib, S32 speaker_type)
{
};

DLLEXPORT HSTREAM WINAPI AIL_open_stream(HDIGDRIVER dig, C8 const *filename, S32 stream_mem)
{
	return NULL;
};

DLLEXPORT void WINAPI AIL_stream_ms_position(HSTREAM S, S32 *total_milliseconds, S32 *current_milliseconds)
{
};

DLLEXPORT void WINAPI AIL_close_stream(HSTREAM stream)
{
};

DLLEXPORT S32 WINAPI AIL_digital_handle_release(HDIGDRIVER drvr)
{
	return 0;
};

DLLEXPORT S32 WINAPI AIL_digital_handle_reacquire(HDIGDRIVER drvr)
{
	return 0;
};

DLLEXPORT C8 *WINAPI AIL_set_redist_directory(C8 const *dir)
{
	return NULL;
};

DLLEXPORT S32 WINAPI AIL_startup(void)
{
	return 0;
};

DLLEXPORT S32 WINAPI AIL_set_preference(U32 number, S32 value)
{
	return 0;
};

DLLEXPORT HDIGDRIVER WINAPI AIL_open_digital_driver(U32 frequency, S32 bits, S32 channel, U32 flags)
{
	return NULL;
};

DLLEXPORT void *WINAPI AIL_mem_alloc_lock(U32 size)
{
	return NULL;
};

DLLEXPORT HSAMPLE WINAPI AIL_allocate_sample_handle(HDIGDRIVER dig)
{
	return NULL;
};

DLLEXPORT void WINAPI AIL_init_sample(HSAMPLE S)
{
};

DLLEXPORT void WINAPI AIL_set_sample_type(HSAMPLE S, S32 format, U32 flags)
{
};

DLLEXPORT void WINAPI AIL_pause_stream(HSTREAM stream, S32 onoff)
{
};

DLLEXPORT void WINAPI AIL_release_sample_handle(HSAMPLE S)
{
};

DLLEXPORT void WINAPI AIL_mem_free_lock(void *ptr)
{
};

DLLEXPORT void WINAPI AIL_close_digital_driver(HDIGDRIVER dig)
{
};

DLLEXPORT void WINAPI AIL_shutdown(void)
{
};

DLLEXPORT void WINAPI AIL_set_3D_sample_volume(H3DSAMPLE S, S32 volume)
{
};

DLLEXPORT void WINAPI AIL_set_sample_volume(HSAMPLE S, S32 volume)
{
};

DLLEXPORT void WINAPI AIL_set_sample_address(HSAMPLE S, void const *start, U32 len)
{
};

DLLEXPORT S32 WINAPI AIL_set_3D_sample_info(H3DSAMPLE S, AILSOUNDINFO const *info)
{
	return 0;
};

DLLEXPORT void WINAPI AIL_set_3D_position(H3DPOBJECT obj, F32 X, F32 Y, F32 Z)
{
};

DLLEXPORT void WINAPI AIL_set_3D_sample_distances(H3DSAMPLE S, F32 max_dist, F32 min_dist)
{
};

DLLEXPORT void WINAPI AIL_set_sample_pan(HSAMPLE S, S32 pan)
{
};

DLLEXPORT void WINAPI AIL_set_sample_playback_rate(HSAMPLE S, S32 playback_rate)
{
};

DLLEXPORT void WINAPI AIL_set_3D_sample_playback_rate(H3DSAMPLE S, S32 playback_rate)
{
};

DLLEXPORT void WINAPI AIL_set_sample_loop_block(HSAMPLE S, S32 loop_start_offset, S32 loop_end_offset)
{
};

DLLEXPORT void WINAPI AIL_set_3D_sample_loop_block(H3DSAMPLE S, S32 loop_start_offset, S32 loop_end_offset)
{
};

DLLEXPORT void WINAPI AIL_set_sample_loop_count(HSAMPLE S, S32 loop_count)
{
};

DLLEXPORT void WINAPI AIL_set_3D_sample_loop_count(H3DSAMPLE S, S32 loops)
{
};

DLLEXPORT U32 WINAPI AIL_sample_status(HSAMPLE S)
{
	return 0;
};

DLLEXPORT U32 WINAPI AIL_3D_sample_status(H3DSAMPLE S)
{
	return 0;
};

DLLEXPORT void WINAPI AIL_start_sample(HSAMPLE S)
{
};

DLLEXPORT void WINAPI AIL_start_3D_sample(H3DSAMPLE S)
{
};

DLLEXPORT void WINAPI AIL_end_sample(HSAMPLE S)
{
};

DLLEXPORT void WINAPI AIL_end_3D_sample(H3DSAMPLE S)
{
};

DLLEXPORT void WINAPI AIL_set_stream_loop_count(HSTREAM stream, S32 count)
{
};

DLLEXPORT S32 WINAPI AIL_service_stream(HSTREAM stream, S32 fillup)
{
	return 0;
};

DLLEXPORT void WINAPI AIL_start_stream(HSTREAM stream)
{
};

DLLEXPORT void WINAPI AIL_set_stream_ms_position(HSTREAM S, S32 milliseconds)
{
};

DLLEXPORT void WINAPI AIL_set_stream_volume(HSTREAM stream, S32 volume)
{
};

DLLEXPORT void WINAPI AIL_set_stream_pan(HSTREAM stream, S32 pan)
{
};

DLLEXPORT S32 WINAPI AIL_stream_status(HSTREAM stream)
{
	return 0;
};

DLLEXPORT void WINAPI AIL_set_file_callbacks(AIL_file_open_callback opencb, AIL_file_close_callback closecb, AIL_file_seek_callback seekcb, AIL_file_read_callback readcb)
{
};
