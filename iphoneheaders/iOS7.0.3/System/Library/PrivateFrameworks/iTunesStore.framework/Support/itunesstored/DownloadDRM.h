/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSArray, SinfsArray;

@interface DownloadDRM : NSObject {

	NSArray* _sinfs;

}

@property (getter=isDRMFree,readonly) BOOL DRMFree; 
@property (readonly) NSArray * sinfs;                            //@synthesize sinfs=_sinfs - In the implementation block
@property (readonly) SinfsArray * pinfsArray; 
@property (readonly) SinfsArray * sinfsArray; 
-(id)initWithSinfArray:(id)arg1 ;
-(id)sinfsArray;
-(id)firstDataForSinfDataKey:(id)arg1 ;
-(id)_sinfsArrayWithDataKey:(id)arg1 ;
-(id)pinfsArray;
-(id)sinfForIdentifier:(int)arg1 ;
-(id)sinfs;
-(void)dealloc;
-(id)init;
-(BOOL)isDRMFree;
@end

