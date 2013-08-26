#ifndef _VN_PLAY_H
#define _VN_PLAY_H

namespace WQ{

#ifdef WIN32

#define PLAY_API  __declspec(dllexport)

#define CALLMETHOD __stdcall
#define CALLBACK __stdcall

#else

#define PLAY_API	extern "C"
#define CALLMETHOD
#define CALLBACK
#define __stdcall
#define WINAPI

#define WORD	unsigned short
#define DWORD	unsigned long
#define LPDWORD	DWORD*
#define BOOL	unsigned long
#define TRUE	0x01
#define FALSE	0x00
#define BYTE	unsigned char
#define LONG	long
#define UINT	unsigned int
#define HDC		void*
#define HWND	void*
#define LPVOID	void*
#define VOID void
#define NULL	0
#define LPSTR   char*
#define PBYTE   unsigned char*
#define LPBYTE  unsigned char*
#define __int64 long long
#define HANDLE  void*
#define HMONITOR void*
typedef DWORD   COLORREF;
typedef struct  tagRECT
{
	LONG left;
	LONG top;
	LONG right;
	LONG bottom;
}RECT;

#endif

#define  FUNC_MAX_PORT 101              //��󲥷�ͨ����
//Wave coef range;
#define MIN_WAVE_COEF -100
#define MAX_WAVE_COEF 100
//Timer type
#define TIMER_1 1 //Only 16 timers for every process.Default TIMER;
#define TIMER_2 2 //Not limit;But the precision less than TIMER_1; 
//��������
#define BUF_VIDEO_SRC 1    //��ƵԴ����        
#define BUF_AUDIO_SRC 2    //��ƵԴ����
#define BUF_VIDEO_RENDER 3  //�������Ƶ���ݻ���
#define BUF_AUDIO_RENDER 4  //�������Ƶ���ݻ���

//��������
#define	PLAY_NOERROR					0              //û�д���
#define PLAY_PARA_OVER				1              //��������Ƿ���
#define PLAY_ORDER_ERROR				2              //����˳�򲻶ԣ�
#define PLAY_TIMER_ERROR				3              //��ý��ʱ������ʧ�ܣ�
#define PLAY_DEC_VIDEO_ERROR			4	           //��Ƶ����ʧ�ܣ�
#define PLAY_DEC_AUDIO_ERROR			5	           //��Ƶ����ʧ�ܣ�
#define PLAY_ALLOC_MEMORY_ERROR		6		       //�����ڴ�ʧ�ܣ�
#define PLAY_OPEN_FILE_ERROR			7			   //�ļ�����ʧ�ܣ�
#define PLAY_CREATE_OBJ_ERROR		8	           //�����߳��¼���ʧ�ܣ�
#define PLAY_CREATE_DDRAW_ERROR		9		       //����directDrawʧ�ܣ�
#define PLAY_CREATE_OFFSCREEN_ERROR	10		       //������˻���ʧ�ܣ�
#define PLAY_BUF_OVER				11	           //����������������ʧ�ܣ�
#define PLAY_CREATE_SOUND_ERROR		12		       //������Ƶ�豸ʧ�ܣ�
#define PLAY_SET_VOLUME_ERROR		13	           //��������ʧ�ܣ�
#define PLAY_SUPPORT_FILE_ONLY		14		       //ֻ���ڲ����ļ�ʱ����ʹ�ô˽ӿڣ�
#define PLAY_SUPPORT_STREAM_ONLY		15		       //ֻ���ڲ�����ʱ����ʹ�ô˽ӿڣ�
#define PLAY_SYS_NOT_SUPPORT			16		       //ϵͳ��֧�֣�������ֻ�ܹ�����Pentium 3���ϣ�
#define PLAY_FILEHEADER_UNKNOWN		17		       //û���ļ�ͷ��
#define PLAY_VERSION_INCORRECT		18	           //�������ͱ������汾����Ӧ��
#define PLAY_INIT_DECODER_ERROR		19		       //��ʼ��������ʧ�ܣ�
#define PLAY_CHECK_FILE_ERROR		20		       //�ļ�̫�̻������޷�ʶ��
#define PLAY_INIT_TIMER_ERROR		21		       //��ʼ����ý��ʱ��ʧ�ܣ�
#define PLAY_BLT_ERROR				22		       //λ����ʧ�ܣ�
#define PLAY_UPDATE_ERROR            23			   //��ʾoverlayʧ�ܣ�


//Max display regions.
#define MAX_DISPLAY_WND 4

//Display type
#define DISPLAY_NORMAL  1   
#define DISPLAY_QUARTER 2	

//Display buffers
#define MAX_DIS_FRAMES 50
#define MIN_DIS_FRAMES 6

 //chenfeng20090512 -s
#define MAX_PLAYING_BUF_NUM (50)
#define MIN_PLAYING_BUF_NUM (1)
#define DEF_PLAYING_BUF_NUM (3)

 //chenfeng20090512 -e
 
//Locate by
#define BY_FRAMENUM  1
#define BY_FRAMETIME 2

//Source buffer
#define SOURCE_BUF_MAX	1024*100000
#define SOURCE_BUF_MIN	1024*50

//Stream type
#define STREAME_REALTIME 0
#define STREAME_FILE	 1

//frame type
#define T_AUDIO16	101
#define T_AUDIO8	100
#define T_CH2_AUDIO16	201  //˫����16λ
#define T_CH2_AUDIO8	200  //˫����8λ

#define T_UYVY		1
#define T_YV12		3
#define T_RGB32		7

//ϵͳ֧�ֵĹ��ܣ����ڰ�λ��ʾϵͳ����
#define SUPPORT_DDRAW		1  //֧��DIRECTDRAW�������֧�֣��򲥷������ܹ�����
#define SUPPORT_BLT         2  //�Կ�֧��BLT�����������֧�֣��򲥷������ܹ���
#define SUPPORT_BLTFOURCC   4  //�Կ�BLT֧����ɫת����
#define SUPPORT_BLTSHRINKX  8  //�Կ�BLT֧��X����С��
#define SUPPORT_BLTSHRINKY  16 //�Կ�BLT֧��Y����С��
#define SUPPORT_BLTSTRETCHX 32 //�Կ�BLT֧��X��Ŵ�
#define SUPPORT_BLTSTRETCHY 64 //�Կ�BLT֧��Y��Ŵ�
#define SUPPORT_SSE         128 //CPU֧��SSEָ��,Intel Pentium3����֧��SSEָ�
#define SUPPORT_MMX			256 //CPU֧��MMXָ���

//Frame position
typedef struct{
	long nFilePos;
	long nFrameNum;
	long nFrameTime;
	long nErrorFrameNum;
#ifdef WIN32
	SYSTEMTIME *pErrorTime;
#endif
	long nErrorLostFrameNum;
	long nErrorFrameSize;
}FRAME_POS,*PFRAME_POS;

//Frame Info
typedef struct{
	long nWidth;  //�������λ���ء��������Ƶ������Ϊ0��
	long nHeight; //����ߡ��������Ƶ������Ϊ0��
	long nStamp;  //ʱ����Ϣ����λ���롣
	long nType;   //�������ͣ�T_AUDIO16��T_RGB32�� T_YV12������궨��˵����
	long nFrameRate; //����ʱ������ͼ��֡�ʡ�
}FRAME_INFO;

typedef struct 
{
	char *pDataBuf;
	long nSize;
	long nFrameNum;
	BOOL bIsAudio;
	long nReserved;
}FRAME_TYPE;

//����Ϊ����ӿڣ����û������ο�������
//���������ǿ��Բ���Ҫ���õĽӿ�
PLAY_API BOOL CALLMETHOD VN_PLAY_InitDDraw(HWND hWnd);

PLAY_API BOOL CALLMETHOD VN_PLAY_RealeseDDraw();

PLAY_API BOOL CALLMETHOD VN_PLAY_OpenFile(LONG nPort,LPSTR sFileName);
PLAY_API BOOL CALLMETHOD VN_PLAY_CloseFile(LONG nPort);
PLAY_API BOOL CALLMETHOD VN_PLAY_Play(LONG nPort, HWND hWnd);
PLAY_API BOOL CALLMETHOD VN_PLAY_Stop(LONG nPort);
PLAY_API BOOL CALLMETHOD VN_PLAY_Pause(LONG nPort,DWORD nPause);
PLAY_API BOOL CALLMETHOD VN_PLAY_Fast(LONG nPort);
PLAY_API BOOL CALLMETHOD VN_PLAY_Slow(LONG nPort);
PLAY_API BOOL CALLMETHOD VN_PLAY_OneByOne(LONG nPort);//����طŵ�֡
PLAY_API BOOL CALLMETHOD VN_PLAY_SetPlayPos(LONG nPort,float fRelativePos);
PLAY_API float CALLMETHOD VN_PLAY_GetPlayPos(LONG nPort);
PLAY_API BOOL CALLMETHOD VN_PLAY_SetFileEndMsg(LONG nPort,HWND hWnd,UINT nMsg);
PLAY_API BOOL CALLMETHOD VN_PLAY_SetVolume(LONG nPort,WORD nVolume);
PLAY_API BOOL CALLMETHOD VN_PLAY_StopSound();
PLAY_API BOOL CALLMETHOD VN_PLAY_PlaySound(LONG nPort);
PLAY_API BOOL CALLMETHOD VN_PLAY_OpenStream(LONG nPort,PBYTE pFileHeadBuf,DWORD nSize,DWORD nBufPoolSize);
PLAY_API BOOL CALLMETHOD VN_PLAY_InputData(LONG nPort,PBYTE pBuf,DWORD nSize);
PLAY_API BOOL CALLMETHOD VN_PLAY_CloseStream(LONG nPort);
PLAY_API int  CALLMETHOD VN_PLAY_GetCaps();
PLAY_API DWORD CALLMETHOD VN_PLAY_GetFileTime(LONG nPort);
PLAY_API DWORD CALLMETHOD VN_PLAY_GetPlayedTime(LONG nPort);
PLAY_API DWORD CALLMETHOD VN_PLAY_GetPlayedFrames(LONG nPort);
PLAY_API BOOL CALLMETHOD VN_PLAY_Back(LONG nPort);
PLAY_API BOOL CALLMETHOD VN_PLAY_BackOne(LONG nPort);
PLAY_API BOOL CALLMETHOD VN_PLAY_SetDecCallBack(LONG nPort,void (CALLBACK* DecCBFun)(long nPort,char * pBuf,	long nSize,FRAME_INFO * pFrameInfo, long nReserved1,long nReserved2));
PLAY_API BOOL CALLMETHOD VN_PLAY_SetDisplayCallBack(LONG nPort,void (CALLBACK* DisplayCBFun)(long nPort,char * pBuf,long nSize,long nWidth,long nHeight,long nStamp,long nType,long nReserved), long nUser = 0);
PLAY_API BOOL CALLMETHOD VN_PLAY_ConvertToBmpFile(char * pBuf,long nSize,long nWidth,long nHeight,long nType,char *sFileName);
PLAY_API DWORD CALLMETHOD VN_PLAY_GetFileTotalFrames(LONG nPort);
PLAY_API DWORD CALLMETHOD VN_PLAY_GetCurrentFrameRate(LONG nPort);
PLAY_API DWORD CALLMETHOD VN_PLAY_GetPlayedTimeEx(LONG nPort);
PLAY_API BOOL CALLMETHOD VN_PLAY_SetPlayedTimeEx(LONG nPort,DWORD nTime);
PLAY_API DWORD CALLMETHOD VN_PLAY_GetCurrentFrameNum(LONG nPort);
PLAY_API BOOL CALLMETHOD VN_PLAY_SetStreamOpenMode(LONG nPort,DWORD nMode);
PLAY_API DWORD CALLMETHOD VN_PLAY_GetFileHeadLength();
PLAY_API DWORD CALLMETHOD VN_PLAY_GetSdkVersion();
PLAY_API DWORD CALLMETHOD VN_PLAY_GetLastError(LONG nPort);
PLAY_API BOOL  CALLMETHOD VN_PLAY_RefreshPlay(LONG nPort);
PLAY_API BOOL  CALLMETHOD VN_PLAY_SetOverlayMode(LONG nPort,BOOL bOverlay,COLORREF colorKey);
PLAY_API BOOL  CALLMETHOD VN_PLAY_GetPictureSize(LONG nPort,LONG *pWidth,LONG *pHeight);
PLAY_API BOOL  CALLMETHOD VN_PLAY_SetPicQuality(LONG nPort,BOOL bHighQuality);
PLAY_API BOOL  CALLMETHOD VN_PLAY_PlaySoundShare(LONG nPort);
PLAY_API BOOL  CALLMETHOD VN_PLAY_StopSoundShare(LONG nPort);
PLAY_API LONG CALLMETHOD VN_PLAY_GetStreamOpenMode(LONG nPort);
PLAY_API LONG CALLMETHOD VN_PLAY_GetOverlayMode(LONG nPort);
PLAY_API COLORREF CALLMETHOD VN_PLAY_GetColorKey(LONG nPort);
PLAY_API WORD CALLMETHOD VN_PLAY_GetVolume(LONG nPort);
PLAY_API BOOL CALLMETHOD VN_PLAY_GetPictureQuality(LONG nPort,BOOL *bHighQuality);
PLAY_API DWORD CALLMETHOD VN_PLAY_GetSourceBufferRemain(LONG nPort);
PLAY_API BOOL CALLMETHOD VN_PLAY_ResetSourceBuffer(LONG nPort);
PLAY_API BOOL CALLMETHOD VN_PLAY_SetSourceBufCallBack(LONG nPort,DWORD nThreShold,void (CALLBACK * SourceBuf__stdcall)(long nPort,DWORD nBufSize,DWORD dwUser,void*pResvered),DWORD dwUser,void *pReserved);
PLAY_API BOOL CALLMETHOD VN_PLAY_ResetSourceBufFlag(LONG nPort);
PLAY_API BOOL CALLMETHOD VN_PLAY_SetDisplayBuf(LONG nPort,DWORD nNum);
PLAY_API DWORD CALLMETHOD VN_PLAY_GetDisplayBuf(LONG nPort);
PLAY_API BOOL CALLMETHOD VN_PLAY_OneByOneBack(LONG nPort);
PLAY_API BOOL CALLMETHOD VN_PLAY_SetFileRefCallBack(LONG nPort, void (CALLBACK *pFileRefDone)(DWORD nPort,DWORD nUser),DWORD nUser);
PLAY_API BOOL CALLMETHOD VN_PLAY_SetCurrentFrameNum(LONG nPort,DWORD nFrameNum);
PLAY_API BOOL CALLMETHOD VN_PLAY_GetKeyFramePos(LONG nPort,DWORD nValue, DWORD nType, PFRAME_POS pFramePos);
PLAY_API BOOL CALLMETHOD VN_PLAY_GetNextKeyFramePos(LONG nPort,DWORD nValue, DWORD nType, PFRAME_POS pFramePos);
PLAY_API BOOL CALLMETHOD VN_PLAY_InitDDrawDevice();
PLAY_API void CALLMETHOD VN_PLAY_ReleaseDDrawDevice();
PLAY_API DWORD CALLMETHOD VN_PLAY_GetDDrawDeviceTotalNums();
PLAY_API BOOL CALLMETHOD VN_PLAY_SetDDrawDevice(LONG nPort,DWORD nDeviceNum);

PLAY_API BOOL CALLMETHOD VN_PLAY_GetDDrawDeviceInfo(DWORD nDeviceNum,LPSTR  lpDriverDescription,DWORD nDespLen,LPSTR lpDriverName ,DWORD nNameLen,long *hhMonitor);
PLAY_API int   CALLMETHOD VN_PLAY_GetCapsEx(DWORD nDDrawDeviceNum);
PLAY_API BOOL CALLMETHOD VN_PLAY_ThrowBFrameNum(LONG nPort,DWORD nNum);
PLAY_API BOOL CALLMETHOD VN_PLAY_SetDisplayType(LONG nPort,LONG nType);
PLAY_API long CALLMETHOD VN_PLAY_GetDisplayType(LONG nPort);
PLAY_API BOOL CALLMETHOD VN_PLAY_SetDecCBStream(LONG nPort,DWORD nStream);
PLAY_API BOOL CALLMETHOD VN_PLAY_SetDisplayRegion(LONG nPort,DWORD nRegionNum, RECT *pSrcRect, HWND hDestWnd, BOOL bEnable);
PLAY_API BOOL CALLMETHOD VN_PLAY_RefreshPlayEx(LONG nPort,DWORD nRegionNum);
PLAY_API BOOL CALLMETHOD VN_PLAY_SetDDrawDeviceEx(LONG nPort,DWORD nRegionNum,DWORD nDeviceNum);
PLAY_API BOOL CALLMETHOD VN_PLAY_GetRefValue(LONG nPort,BYTE *pBuffer, DWORD *pSize);
PLAY_API BOOL CALLMETHOD VN_PLAY_SetRefValue(LONG nPort,BYTE *pBuffer, DWORD nSize);
PLAY_API BOOL CALLMETHOD VN_PLAY_OpenStreamEx(LONG nPort,PBYTE pFileHeadBuf,DWORD nSize,DWORD nBufPoolSize);
PLAY_API BOOL CALLMETHOD VN_PLAY_CloseStreamEx(LONG nPort);
PLAY_API BOOL CALLMETHOD VN_PLAY_InputVideoData(LONG nPort,PBYTE pBuf,DWORD nSize);
PLAY_API BOOL CALLMETHOD VN_PLAY_InputAudioData(LONG nPort,PBYTE pBuf,DWORD nSize);
PLAY_API BOOL CALLMETHOD VN_PLAY_RigisterDrawFun(LONG nPort,void (CALLBACK* DrawFun)(long nPort,HDC hDc,LONG nUser),LONG nUser);
PLAY_API BOOL CALLMETHOD VN_PLAY_SetTimerType(LONG nPort,DWORD nTimerType,DWORD nReserved);
PLAY_API BOOL CALLMETHOD VN_PLAY_GetTimerType(LONG nPort,DWORD *pTimerType,DWORD *pReserved);
PLAY_API BOOL CALLMETHOD VN_PLAY_ResetBuffer(LONG nPort,DWORD nBufType);
PLAY_API DWORD CALLMETHOD VN_PLAY_GetBufferValue(LONG nPort,DWORD nBufType);

PLAY_API BOOL CALLMETHOD VN_PLAY_AdjustWaveAudio(LONG nPort,LONG nCoefficient);
PLAY_API BOOL CALLMETHOD VN_PLAY_SetVerifyCallBack(LONG nPort, DWORD nBeginTime, DWORD nEndTime, void (CALLBACK * funVerify)(long nPort, FRAME_POS * pFilePos, DWORD bIsVideo, DWORD nUser),  DWORD  nUser);
PLAY_API BOOL CALLMETHOD VN_PLAY_SetAudioCallBack(LONG nPort, void (CALLBACK * funAudio)(long nPort, char * pAudioBuf, long nSize, long nStamp, long nType, long nUser), long nUser);
PLAY_API BOOL CALLMETHOD VN_PLAY_SetEncTypeChangeCallBack(LONG nPort,void(CALLBACK *funEncChange)(long nPort, long nUser),long nUser);
PLAY_API BOOL CALLMETHOD VN_PLAY_SetColor(LONG nPort, DWORD nRegionNum, int nBrightness, int nContrast, int nSaturation, int nHue);
PLAY_API BOOL CALLMETHOD VN_PLAY_GetColor(LONG nPort, DWORD nRegionNum, int *pBrightness, int *pContrast, int *pSaturation, int *pHue);
PLAY_API BOOL CALLMETHOD VN_PLAY_SetEncChangeMsg(LONG nPort,HWND hWnd,UINT nMsg);

PLAY_API BOOL CALLMETHOD VN_PLAY_SetMDRange(LONG nPort,RECT* rc,DWORD nVauleBegin,DWORD nValueEnd,DWORD nType);
PLAY_API BOOL CALLMETHOD VN_PLAY_SetMDThreShold(LONG nPort, DWORD ThreShold) ;
PLAY_API DWORD CALLMETHOD VN_PLAY_GetMDPosition(LONG nPort, DWORD Direction, DWORD nFrame, DWORD* MDValue) ;

PLAY_API BOOL CALLMETHOD VN_PLAY_CatchPic(LONG nPort,char* sFileName) ;

PLAY_API BOOL CALLMETHOD VN_PLAY_SetFileEndCallBack(LONG nPort, void (CALLBACK *pFileEnd)(DWORD nPort,DWORD nUser),DWORD nUser);
//dataType 0 ��ԭʼ������ 1��AVI
PLAY_API BOOL CALLMETHOD VN_PLAY_StartDataRecord(LONG nPort, char *sFileName, int idataType=0);
PLAY_API BOOL CALLMETHOD VN_PLAY_StopDataRecord(LONG nPort);
PLAY_API BOOL CALLMETHOD VN_PLAY_AdjustFluency(LONG nPort, int level);
PLAY_API BOOL CALLMETHOD VN_PLAY_ChangeRate(LONG nPort, int rate);
PLAY_API BOOL CALLMETHOD VN_PLAY_SetDemuxCallBack(LONG nPort, void (CALLBACK* DecCBFun)(long nPort,char * pBuf,	long nSize,void * pParam, long nReserved,long nUser), long nUser);
#define HIK_CMD_GetTime 1
#define HIK_CMD_GetFileRate 2
PLAY_API BOOL CALLMETHOD VN_PLAY_QueryInfo(LONG nPort , int cmdType, char* buf, int buflen, int* returnlen);

typedef void (WINAPI *pCallFunction)(LPBYTE pDataBuffer, DWORD DataLength, long nUser);

PLAY_API BOOL CALLMETHOD VN_PLAY_OpenAudioRecord(pCallFunction pProc, long nBitsPerSample, long nSamplesPerSec, long nLength, long nReserved, long nUser);

PLAY_API BOOL CALLMETHOD VN_PLAY_CloseAudioRecord();

//reserved 0 ��I֡֡����ˮӡ��Ϣ 1 ��֡ˮӡ 2 ��ˮӡУ�� 3�����ܷ���֡
typedef int (__stdcall* GetWaterMarkInfoCallbackFunc)(char* buf, long key, long len, long reallen, long reserved, long nUser);	//ˮӡ��Ϣ��ȡ����

PLAY_API BOOL CALLMETHOD VN_PLAY_SetWaterMarkCallBack(LONG nPort, GetWaterMarkInfoCallbackFunc pFunc, long nUser);

PLAY_API DWORD CALLMETHOD VN_PLAY_CreateFile(LPSTR sFileName);
PLAY_API BOOL CALLMETHOD VN_PLAY_DestroyFile(LONG nPort);
PLAY_API DWORD CALLMETHOD VN_PLAY_CreateStream(DWORD nBufPoolSize);
PLAY_API BOOL CALLMETHOD VN_PLAY_DestroyStream(LONG nPort);

PLAY_API BOOL CALLMETHOD VN_PLAY_SetPlayingBufNum(LONG nPort, int iBufNum); //chenfeng20090513 -

PLAY_API BOOL CALLMETHOD VN_PLAY_SetSvacKey(LONG nPort, char key[1024]);

PLAY_API BOOL CALLMETHOD VN_PLAY_SetNeedDecodePasswordCallbackFun(long nPort, void(CALLBACK* pNeedDecodePasswordFun)(long nPort, int nErrorCode, void* pUser), void* pUser);

PLAY_API BOOL CALLMETHOD VN_PLAY_SetDecodePassword(long nPort, char* sPassword);

PLAY_API BOOL CALLMETHOD VN_PLAY_SetExtensionInfoCallbackFun(long nPort, void (CALLBACK* pExtensionInfoFun)(long nPort, char* sExtensionInfo, void* pUser), void* pUser);

}

#endif
