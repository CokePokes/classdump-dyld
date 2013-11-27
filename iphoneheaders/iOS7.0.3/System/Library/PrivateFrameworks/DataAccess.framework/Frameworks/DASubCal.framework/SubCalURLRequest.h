/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DASubCal
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <libTelephonyUtilDynamic.dylib/NSURLConnectionDelegate.h>

@protocol SubCalURLRequestDelegate;
@class NSURL, , NSString, NSURLConnection, NSMutableData, NSFileHandle, NSDate, DAStatusReport, NSTimer;

@interface SubCalURLRequest : NSObject <NSURLConnectionDelegate> {

	NSURL* _url;
	<SubCalURLRequestDelegate>* _delegate;
	NSString* _username;
	NSString* _password;
	double _timestamp;
	NSURLConnection* _connection;
	NSMutableData* _connectionData;
	BOOL _useFileCache;
	NSString* _filePath;
	NSFileHandle* _fileHandle;
	BOOL _sendDataUpdateCallback;
	NSDate* _startTime;
	DAStatusReport* _statusReport;
	NSTimer* _idleTimer;
	NSString* _startRunloopDescriptionString;

}

@property (nonatomic,readonly) NSURL * url;                                      //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) <SubCalURLRequestDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * username;                                  //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * password;                                  //@synthesize password=_password - In the implementation block
@property (assign) double timestamp;                                             //@synthesize timestamp=_timestamp - In the implementation block
@property (assign) BOOL useFileCache;                                            //@synthesize useFileCache=_useFileCache - In the implementation block
@property (nonatomic,readonly) NSString * filePath;                              //@synthesize filePath=_filePath - In the implementation block
@property (nonatomic,retain) DAStatusReport * statusReport;                      //@synthesize statusReport=_statusReport - In the implementation block
@property (nonatomic,retain) NSMutableData * connectionData;                     //@synthesize connectionData=_connectionData - In the implementation block
+(void)_initializeFileCache;
+(id)_cachedICSFilesDirectory;
-(id)password;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)setPassword:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(void)cancel;
-(void)_idleTimerFired;
-(id)initWithURL:(id)arg1 ;
-(id)url;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(id)filePath;
-(void)_finishWithError:(id)arg1 ;
-(void)setStatusReport:(id)arg1 ;
-(id)statusReport;
-(void)setUseFileCache:(BOOL)arg1 ;
-(void)startConnection;
-(void)_setHeadersOnRequest:(id)arg1 ;
-(void)_markStartTime;
-(void)_createIdleTimer;
-(void)_markEndTime;
-(void)_cancelIdleTimer;
-(void)_extendIdleTimer;
-(void)_respondToChallenge:(id)arg1 withCredential:(id)arg2 noCredentialBehavior:(int)arg3 ;
-(void)_openFileHandle;
-(void)_receivedDataForFile:(id)arg1 ;
-(BOOL)useFileCache;
-(id)connectionData;
-(void)setConnectionData:(id)arg1 ;
-(void)setUsername:(id)arg1 ;
-(id)username;
-(BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 ;
@end

