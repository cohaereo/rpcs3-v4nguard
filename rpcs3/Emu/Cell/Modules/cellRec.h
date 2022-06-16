#pragma once

enum CellRecError : u32
{
	CELL_REC_ERROR_OUT_OF_MEMORY = 0x8002c501,
	CELL_REC_ERROR_FATAL         = 0x8002c502,
	CELL_REC_ERROR_INVALID_VALUE = 0x8002c503,
	CELL_REC_ERROR_FILE_OPEN     = 0x8002c504,
	CELL_REC_ERROR_FILE_WRITE    = 0x8002c505,
	CELL_REC_ERROR_INVALID_STATE = 0x8002c506,
	CELL_REC_ERROR_FILE_NO_DATA  = 0x8002c507
};

enum
{
	CELL_REC_STATUS_UNLOAD = 0,
	CELL_REC_STATUS_OPEN   = 1,
	CELL_REC_STATUS_START  = 2,
	CELL_REC_STATUS_STOP   = 3,
	CELL_REC_STATUS_CLOSE  = 4,
	CELL_REC_STATUS_ERR    = 10
};

enum
{
	CELL_REC_MIN_MEMORY_CONTAINER_SIZE = 0,
	CELL_REC_MAX_MEMORY_CONTAINER_SIZE = 16 * 1024 * 1024, // 9 * 1024 * 1024 if SDK < 0x300000

	CELL_REC_MAX_PATH_LEN = 1023,
};

enum
{
	CELL_REC_PARAM_PPU_THREAD_PRIORITY_DEFAULT = 400,
	CELL_REC_PARAM_SPU_THREAD_PRIORITY_DEFAULT = 60,

	CELL_REC_PARAM_CAPTURE_PRIORITY_HIGHEST             = 0,
	CELL_REC_PARAM_CAPTURE_PRIORITY_EXCEPT_NOTIFICATION = 1,
	CELL_REC_PARAM_CAPTURE_PRIORITY_GAME_SCREEN         = 2,

	CELL_REC_PARAM_USE_SYSTEM_SPU_DISABLE = 0,
	CELL_REC_PARAM_USE_SYSTEM_SPU_ENABLE  = 1,

	CELL_REC_PARAM_XMB_BGM_DISABLE = 0,
	CELL_REC_PARAM_XMB_BGM_ENABLE  = 1,

	CELL_REC_PARAM_MPEG4_FAST_ENCODE_DISABLE = 0,
	CELL_REC_PARAM_MPEG4_FAST_ENCODE_ENABLE  = 1,

	CELL_REC_PARAM_VIDEO_INPUT_DISABLE           = 0,
	CELL_REC_PARAM_VIDEO_INPUT_ARGB_4_3          = 1,
	CELL_REC_PARAM_VIDEO_INPUT_ARGB_16_9         = 2,
	CELL_REC_PARAM_VIDEO_INPUT_RGBA_4_3          = 3,
	CELL_REC_PARAM_VIDEO_INPUT_RGBA_16_9         = 4,
	CELL_REC_PARAM_VIDEO_INPUT_YUV420PLANAR_16_9 = 5,

	CELL_REC_PARAM_AUDIO_INPUT_DISABLE = 0,
	CELL_REC_PARAM_AUDIO_INPUT_ENABLE  = 1,

	CELL_REC_PARAM_AUDIO_INPUT_MIX_VOL_MIN = 0,
	CELL_REC_PARAM_AUDIO_INPUT_MIX_VOL_MAX = 100,

	CELL_REC_PARAM_REDUCE_MEMSIZE_DISABLE = 0,
	CELL_REC_PARAM_REDUCE_MEMSIZE_ENABLE  = 1,

	// SMALL  = 320x240 (4:3) or 368x208 (16:9)
	// MIDDLE = 368x272 (4:3) or 480x272 (16:9)
	// LARGE  = 480x368 (4:3) or 640x368 (16:9)
	// HD720  = 1280x720 (16:9)

	// PS3 playable format; all
	// PSP playable format: MPEG4 + SMALL, AVC + SMALL, AVC + MIDDLE

	CELL_REC_PARAM_VIDEO_FMT_MPEG4_SMALL_512K_30FPS  = 0x0000,
	CELL_REC_PARAM_VIDEO_FMT_MPEG4_SMALL_768K_30FPS  = 0x0010,
	CELL_REC_PARAM_VIDEO_FMT_MPEG4_MIDDLE_512K_30FPS = 0x0100,
	CELL_REC_PARAM_VIDEO_FMT_MPEG4_MIDDLE_768K_30FPS = 0x0110,
	CELL_REC_PARAM_VIDEO_FMT_MPEG4_LARGE_512K_30FPS  = 0x0200,
	CELL_REC_PARAM_VIDEO_FMT_MPEG4_LARGE_768K_30FPS  = 0x0210,
	CELL_REC_PARAM_VIDEO_FMT_MPEG4_LARGE_1024K_30FPS = 0x0220,
	CELL_REC_PARAM_VIDEO_FMT_MPEG4_LARGE_1536K_30FPS = 0x0230,
	CELL_REC_PARAM_VIDEO_FMT_MPEG4_LARGE_2048K_30FPS = 0x0240,

	CELL_REC_PARAM_VIDEO_FMT_AVC_MP_SMALL_512K_30FPS   = 0x1000,
	CELL_REC_PARAM_VIDEO_FMT_AVC_MP_SMALL_768K_30FPS   = 0x1010,
	CELL_REC_PARAM_VIDEO_FMT_AVC_MP_MIDDLE_512K_30FPS  = 0x1100,
	CELL_REC_PARAM_VIDEO_FMT_AVC_MP_MIDDLE_768K_30FPS  = 0x1110,
	CELL_REC_PARAM_VIDEO_FMT_AVC_MP_MIDDLE_1024K_30FPS = 0x1120,
	CELL_REC_PARAM_VIDEO_FMT_AVC_MP_MIDDLE_1536K_30FPS = 0x1130,

	CELL_REC_PARAM_VIDEO_FMT_AVC_BL_SMALL_512K_30FPS   = 0x2000,
	CELL_REC_PARAM_VIDEO_FMT_AVC_BL_SMALL_768K_30FPS   = 0x2010,
	CELL_REC_PARAM_VIDEO_FMT_AVC_BL_MIDDLE_512K_30FPS  = 0x2100,
	CELL_REC_PARAM_VIDEO_FMT_AVC_BL_MIDDLE_768K_30FPS  = 0x2110,
	CELL_REC_PARAM_VIDEO_FMT_AVC_BL_MIDDLE_1024K_30FPS = 0x2120,
	CELL_REC_PARAM_VIDEO_FMT_AVC_BL_MIDDLE_1536K_30FPS = 0x2130,

	CELL_REC_PARAM_VIDEO_FMT_MJPEG_SMALL_5000K_30FPS  = 0x3060,
	CELL_REC_PARAM_VIDEO_FMT_MJPEG_MIDDLE_5000K_30FPS = 0x3160,
	CELL_REC_PARAM_VIDEO_FMT_MJPEG_LARGE_11000K_30FPS = 0x3270,
	CELL_REC_PARAM_VIDEO_FMT_MJPEG_HD720_11000K_30FPS = 0x3670,
	CELL_REC_PARAM_VIDEO_FMT_MJPEG_HD720_20000K_30FPS = 0x3680,
	CELL_REC_PARAM_VIDEO_FMT_MJPEG_HD720_25000K_30FPS = 0x3690,

	CELL_REC_PARAM_VIDEO_FMT_M4HD_SMALL_768K_30FPS   = 0x4010,
	CELL_REC_PARAM_VIDEO_FMT_M4HD_MIDDLE_768K_30FPS  = 0x4110,
	CELL_REC_PARAM_VIDEO_FMT_M4HD_LARGE_1536K_30FPS  = 0x4230,
	CELL_REC_PARAM_VIDEO_FMT_M4HD_LARGE_2048K_30FPS  = 0x4240,
	CELL_REC_PARAM_VIDEO_FMT_M4HD_HD720_2048K_30FPS  = 0x4640,
	CELL_REC_PARAM_VIDEO_FMT_M4HD_HD720_5000K_30FPS  = 0x4660,
	CELL_REC_PARAM_VIDEO_FMT_M4HD_HD720_11000K_30FPS = 0x4670,

	CELL_REC_PARAM_AUDIO_FMT_AAC_96K   = 0x0000,
	CELL_REC_PARAM_AUDIO_FMT_AAC_128K  = 0x0001,
	CELL_REC_PARAM_AUDIO_FMT_AAC_64K   = 0x0002,

	CELL_REC_PARAM_AUDIO_FMT_ULAW_384K = 0x1007,
	CELL_REC_PARAM_AUDIO_FMT_ULAW_768K = 0x1008,

	CELL_REC_PARAM_AUDIO_FMT_PCM_384K  = 0x2007,
	CELL_REC_PARAM_AUDIO_FMT_PCM_768K  = 0x2008,
	CELL_REC_PARAM_AUDIO_FMT_PCM_1536K = 0x2009,

	CELL_REC_PARAM_VIDEO_FMT_YOUTUBE       = 0x0310,
	CELL_REC_PARAM_VIDEO_FMT_YOUTUBE_LARGE = CELL_REC_PARAM_VIDEO_FMT_MPEG4_LARGE_2048K_30FPS,
	CELL_REC_PARAM_VIDEO_FMT_YOUTUBE_HD720 = CELL_REC_PARAM_VIDEO_FMT_M4HD_HD720_5000K_30FPS,
	CELL_REC_PARAM_AUDIO_FMT_YOUTUBE       = CELL_REC_PARAM_AUDIO_FMT_AAC_64K,

	CELL_REC_PARAM_VIDEO_FMT_YOUTUBE_MJPEG = CELL_REC_PARAM_VIDEO_FMT_MJPEG_HD720_11000K_30FPS,
	CELL_REC_PARAM_AUDIO_FMT_YOUTUBE_MJPEG = CELL_REC_PARAM_AUDIO_FMT_PCM_768K,

	CELL_REC_AUDIO_BLOCK_SAMPLES = 256,
};

enum
{
	CELL_REC_INFO_VIDEO_INPUT_ADDR        = 0,
	CELL_REC_INFO_VIDEO_INPUT_WIDTH       = 1,
	CELL_REC_INFO_VIDEO_INPUT_PITCH       = 2,
	CELL_REC_INFO_VIDEO_INPUT_HEIGHT      = 3,
	CELL_REC_INFO_AUDIO_INPUT_ADDR        = 4,
	CELL_REC_INFO_MOVIE_TIME_MSEC         = 5,
	CELL_REC_INFO_SPURS_SYSTEMWORKLOAD_ID = 6,
};

enum
{
	CELL_REC_SETINFO_MOVIE_START_TIME_MSEC = 100,
	CELL_REC_SETINFO_MOVIE_END_TIME_MSEC   = 101,
	CELL_REC_SETINFO_MOVIE_META            = 200,
	CELL_REC_SETINFO_SCEME_META            = 201,

	CELL_REC_MOVIE_META_GAME_TITLE_LEN  = 128,
	CELL_REC_MOVIE_META_MOVIE_TITLE_LEN = 128,
	CELL_REC_MOVIE_META_DESCRIPTION_LEN = 384,
	CELL_REC_MOVIE_META_USERDATA_LEN    = 64,

	CELL_REC_SCENE_META_TYPE_CHAPTER        = 0,
	CELL_REC_SCENE_META_TYPE_CLIP_HIGHLIGHT = 1,
	CELL_REC_SCENE_META_TYPE_CLIP_USER      = 2,

	CELL_REC_SCENE_META_TITLE_LEN = 128,
	CELL_REC_SCENE_META_TAG_NUM   = 6,
	CELL_REC_SCENE_META_TAG_LEN   = 64,
};

enum
{
	CELL_REC_OPTION_PPU_THREAD_PRIORITY = 1,
	CELL_REC_OPTION_SPU_THREAD_PRIORITY = 2,
	CELL_REC_OPTION_CAPTURE_PRIORITY    = 3,
	CELL_REC_OPTION_USE_SYSTEM_SPU      = 4,
	CELL_REC_OPTION_FIT_TO_YOUTUBE      = 5,
	CELL_REC_OPTION_XMB_BGM             = 6,
	CELL_REC_OPTION_RING_SEC            = 7,
	CELL_REC_OPTION_MPEG4_FAST_ENCODE   = 8,
	CELL_REC_OPTION_VIDEO_INPUT         = 9,
	CELL_REC_OPTION_AUDIO_INPUT         = 10,
	CELL_REC_OPTION_AUDIO_INPUT_MIX_VOL = 11,
	CELL_REC_OPTION_REDUCE_MEMSIZE      = 12,
	CELL_REC_OPTION_SHOW_XMB            = 13,
	CELL_REC_OPTION_METADATA_FILENAME   = 14,
	CELL_REC_OPTION_SPURS               = 15,
};

struct CellRecSpursParam
{
	vm::bptr<struct CellSpurs> pSpurs;
	be_t<s32> spu_usage_rate;
	u8 priority[8];
};

struct CellRecOption
{
	be_t<s32> option;
	union
	{
		be_t<s32> ppu_thread_priority;           // CELL_REC_OPTION_PPU_THREAD_PRIORITY
		be_t<s32> spu_thread_priority;           // CELL_REC_OPTION_SPU_THREAD_PRIORITY
		be_t<s32> capture_priority;              // CELL_REC_OPTION_CAPTURE_PRIORITY
		be_t<s32> use_system_spu;                // CELL_REC_OPTION_USE_SYSTEM_SPU
		be_t<s32> fit_to_youtube;                // CELL_REC_OPTION_FIT_TO_YOUTUBE
		be_t<s32> xmb_bgm;                       // CELL_REC_OPTION_XMB_BGM
		be_t<s32> mpeg4_fast_encode;             // CELL_REC_OPTION_MPEG4_FAST_ENCODE
		be_t<u32> ring_sec;                      // CELL_REC_OPTION_RING_SEC
		be_t<s32> video_input;                   // CELL_REC_OPTION_VIDEO_INPUT
		be_t<s32> audio_input;                   // CELL_REC_OPTION_AUDIO_INPUT
		be_t<s32> audio_input_mix_vol;           // CELL_REC_OPTION_AUDIO_INPUT_MIX_VOL
		be_t<s32> reduce_memsize;                // CELL_REC_OPTION_REDUCE_MEMSIZE
		be_t<s32> show_xmb;                      // CELL_REC_OPTION_SHOW_XMB
		vm::bptr<char> metadata_filename;        // CELL_REC_OPTION_METADATA_FILENAME
		vm::bptr<CellRecSpursParam> pSpursParam; // CELL_REC_OPTION_SPURS
		be_t<u64> dummy;                         // -
	} value;
};

struct CellRecParam
{
	be_t<s32> videoFmt;
	be_t<s32> audioFmt;
	be_t<s32> numOfOpt;
	vm::bptr<CellRecOption> pOpt;
};

struct CellRecMovieMetadata
{
	vm::bptr<char> gameTitle;
	vm::bptr<char> movieTitle;
	vm::bptr<char> description;
	vm::bptr<char> userdata;
};

struct CellRecSceneMetadata
{
	be_t<u32> type;
	be_t<u64> startTime;
	be_t<u64> endTime;
	u8 unk[4];             // NOTE: there seems to be undocumented padding
	vm::bptr<char> title;
	be_t<u32> tagNum;
	vm::bpptr<char> tag;
};

using CellRecCallback = void(s32 recStatus, s32 recError, vm::ptr<void> userdata);
