/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_source;
@class MCPeerID, NSString, NSObject, NSMutableData, NSURL, NSProgress, MCResourceDownloader, MCResourceProgressObserver;

@interface MCSessionStream : NSObject {

	BOOL _sourceSuspended;
	BOOL _progressUnbounded;
	MCPeerID* _peerID;
	NSString* _name;
	unsigned _streamID;
	int state;
	int _fd;
	NSObject<OS_dispatch_source>* _source;
	NSMutableData* _incomingBuffer;
	NSURL* _url;
	NSProgress* _progress;
	/*^block*/ id _completionHandler;
	MCResourceDownloader* _urlDownloader;
	MCResourceProgressObserver* _observer;

}

@property (assign,nonatomic) MCPeerID * peerID;                                  //@synthesize peerID=_peerID - In the implementation block
@property (nonatomic,copy) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned streamID;                                  //@synthesize streamID=_streamID - In the implementation block
@property (assign,nonatomic) int state; 
@property (assign,nonatomic) int fd;                                             //@synthesize fd=_fd - In the implementation block
@property (assign,nonatomic) NSObject<OS_dispatch_source> * source;              //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) BOOL sourceSuspended;                               //@synthesize sourceSuspended=_sourceSuspended - In the implementation block
@property (nonatomic,retain) NSMutableData * incomingBuffer;                     //@synthesize incomingBuffer=_incomingBuffer - In the implementation block
@property (nonatomic,copy) NSURL * url;                                          //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                              //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) MCResourceProgressObserver * observer;              //@synthesize observer=_observer - In the implementation block
@property (assign,nonatomic) BOOL progressUnbounded;                             //@synthesize progressUnbounded=_progressUnbounded - In the implementation block
@property (nonatomic,copy) id completionHandler;                                 //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) MCResourceDownloader * urlDownloader;               //@synthesize urlDownloader=_urlDownloader - In the implementation block
-(id)peerID;
-(void)setPeerID:(id)arg1 ;
-(int)fd;
-(void)setFd:(int)arg1 ;
-(BOOL)sourceSuspended;
-(void)setSourceSuspended:(BOOL)arg1 ;
-(id)incomingBuffer;
-(void)setIncomingBuffer:(id)arg1 ;
-(BOOL)progressUnbounded;
-(void)setProgressUnbounded:(BOOL)arg1 ;
-(id)urlDownloader;
-(void)setUrlDownloader:(id)arg1 ;
-(void)dealloc;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)setName:(id)arg1 ;
-(id)name;
-(void)setProgress:(id)arg1 ;
-(/*^block*/ id)completionHandler;
-(id)source;
-(void)setSource:(id)arg1 ;
-(id)progress;
-(id)url;
-(void)setUrl:(id)arg1 ;
-(void)setCompletionHandler:(/*^block*/ id)arg1 ;
-(void)setObserver:(id)arg1 ;
-(id)observer;
-(unsigned)streamID;
-(void)setStreamID:(unsigned)arg1 ;
@end

