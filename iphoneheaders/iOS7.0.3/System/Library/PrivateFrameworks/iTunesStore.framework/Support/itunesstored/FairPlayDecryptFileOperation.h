/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStore/ISOperation.h>

@class NSData, NSString, FairPlayDecryptSession;

@interface FairPlayDecryptFileOperation : ISOperation {

	NSData* _dpInfo;
	double _lastSnapshotTime;
	NSString* _path;
	FairPlayDecryptSession* _fairplayDecryptSession;

}
-(void)_updateProgressWithByteCount:(long long)arg1 ;
-(id)initWithPath:(id)arg1 dpInfo:(id)arg2 ;
-(BOOL)_decryptWithSession:(id)arg1 error:(id*)arg2 ;
-(void)_initializeProgressWithFileHandle:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)run;
@end

