/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@class GKNATObserver, ICEResultWaitQueue, NSMutableArray, VideoConference;

@interface VideoConferenceManager : NSObject <VideoConferenceDelegate> {
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    unsigned char _clientUUID[16];
    VideoConference *activeConference;
    boolisVTPInitialized;
    VideoConference *conferenceWithMic;
    struct tagHANDLE { int x1; } *hSIP;
    GKNATObserver *natObserver;
    ICEResultWaitQueue *resultQueue;
    } sipLock;
    int sipRefCount;
    } stateLock;
    NSMutableArray *vcList;
}

@property VideoConference * activeConference;
@property VideoConference * conferenceWithMic;
@property(readonly) ICEResultWaitQueue * resultQueue;
@property(readonly) NSMutableArray * vcList;

+ (void)addNSError:(id)arg1 toConferenceXPCArgumentDictionary:(id)arg2;
+ (id)defaultVideoConferenceManager;

- (struct tagHANDLE { int x1; }*)SIPHandle;
- (id)activeConference;
- (void)addVideoConference:(id)arg1;
- (void)broadcastCellTechChange:(int)arg1 cellularMaxPktLen:(unsigned short)arg2;
- (void)cleanupVTP;
- (id)conferenceForCallID:(unsigned int)arg1;
- (id)conferenceForIncomingConnectionResult:(struct tagCONNRESULT { unsigned int x1; int x2; int x3; unsigned int x4; int x5; int x6; unsigned short x7; unsigned short x8; struct tagIPPORT { int x_9_1_1; BOOL x_9_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_9_1_3; unsigned short x_9_1_4; } x9; struct tagIPPORT { int x_10_1_1; BOOL x_10_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_10_1_3; unsigned short x_10_1_4; } x10; struct tagIPPORT { int x_11_1_1; BOOL x_11_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_11_1_3; unsigned short x_11_1_4; } x11; struct tagIPPORT { int x_12_1_1; BOOL x_12_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_12_1_3; unsigned short x_12_1_4; } x12; struct tagIPPORT { int x_13_1_1; BOOL x_13_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_13_1_3; unsigned short x_13_1_4; } x13; struct tagIPPORT { int x_14_1_1; BOOL x_14_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_14_1_3; unsigned short x_14_1_4; } x14; unsigned int x15; int x16; int x17; int x18; int x19; unsigned int x20; unsigned short x21; int x22; int x23; int x24; struct tagCONNRESULT {} *x25; }*)arg1;
- (id)conferenceForParticipantID:(id)arg1;
- (id)conferenceWithMic;
- (void)createSIP;
- (void)getClientUUID:(unsigned char[16])arg1;
- (bool)hasVideoConference:(id)arg1;
- (id)init;
- (bool)isSIPHandleValid:(struct tagHANDLE { int x1; }*)arg1;
- (void)notifyPrimaryConnChangeToClient:(id)arg1 newConnResult:(struct tagCONNRESULT { unsigned int x1; int x2; int x3; unsigned int x4; int x5; int x6; unsigned short x7; unsigned short x8; struct tagIPPORT { int x_9_1_1; BOOL x_9_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_9_1_3; unsigned short x_9_1_4; } x9; struct tagIPPORT { int x_10_1_1; BOOL x_10_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_10_1_3; unsigned short x_10_1_4; } x10; struct tagIPPORT { int x_11_1_1; BOOL x_11_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_11_1_3; unsigned short x_11_1_4; } x11; struct tagIPPORT { int x_12_1_1; BOOL x_12_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_12_1_3; unsigned short x_12_1_4; } x12; struct tagIPPORT { int x_13_1_1; BOOL x_13_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_13_1_3; unsigned short x_13_1_4; } x13; struct tagIPPORT { int x_14_1_1; BOOL x_14_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_14_1_3; unsigned short x_14_1_4; } x14; unsigned int x15; int x16; int x17; int x18; int x19; unsigned int x20; unsigned short x21; int x22; int x23; int x24; struct tagCONNRESULT {} *x25; }*)arg2;
- (void)pauseVideoConferences:(bool)arg1;
- (void)registerBlocksForConference;
- (void)removeVideoConference:(id)arg1;
- (id)resultQueue;
- (void)setActiveConference:(id)arg1;
- (void)setConferenceWithMic:(id)arg1;
- (void)startSIP;
- (void)stopSIP;
- (id)vcList;
- (void)videoConference:(id)arg1 cancelRelayRequest:(unsigned int)arg2 requestDict:(id)arg3;
- (void)videoConference:(id)arg1 closeConnectionForCallID:(unsigned int)arg2;
- (void)videoConference:(id)arg1 didChangeLocalVariablesForCallID:(unsigned int)arg2;
- (void)videoConference:(id)arg1 didReceiveARPLData:(id)arg2 fromCallID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 didReceiveData:(id)arg2 forCallID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 didReceiveFirstRemoteFrameForCallID:(unsigned int)arg2;
- (void)videoConference:(id)arg1 didRemoteScreenAttributesChange:(id)arg2 forCallID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 didRemoteVideoAttributesChange:(id)arg2 forCallID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 didStartSession:(bool)arg2 withCallID:(unsigned int)arg3 error:(id)arg4;
- (void)videoConference:(id)arg1 didStartSession:(bool)arg2 withCallID:(unsigned int)arg3 withUserInfo:(id)arg4 error:(id)arg5;
- (void)videoConference:(id)arg1 didStopWithCallID:(unsigned int)arg2 error:(id)arg3 callMetadata:(id)arg4;
- (void)videoConference:(id)arg1 inititiateRelayRequest:(unsigned int)arg2 requestDict:(id)arg3;
- (void)videoConference:(id)arg1 localAudioEnabled:(bool)arg2 forCallID:(unsigned int)arg3 error:(id)arg4;
- (void)videoConference:(id)arg1 receivedNoRemotePacketsForTime:(double)arg2 callID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 remoteAudioEnabled:(bool)arg2 forCallID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 remoteAudioPaused:(bool)arg2 callID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 remoteMediaStalled:(bool)arg2 callID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 remoteVideoPaused:(bool)arg2 callID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 sendIPChangeRequest:(id)arg2 withCallID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 sendRelayUpdate:(unsigned int)arg2 updateDict:(id)arg3;
- (void)videoConference:(id)arg1 updateInputFrequencyLevel:(id)arg2;
- (void)videoConference:(id)arg1 updateInputMeterLevel:(float)arg2;
- (void)videoConference:(id)arg1 updateOutputFrequencyLevel:(id)arg2;
- (void)videoConference:(id)arg1 updateOutputMeterLevel:(float)arg2;
- (void)videoConference:(id)arg1 videoQualityNotificationForCallID:(unsigned int)arg2 isDegraded:(bool)arg3 isRemote:(bool)arg4;
- (void)videoConference:(id)arg1 withCallID:(unsigned int)arg2 networkHint:(bool)arg3;

@end