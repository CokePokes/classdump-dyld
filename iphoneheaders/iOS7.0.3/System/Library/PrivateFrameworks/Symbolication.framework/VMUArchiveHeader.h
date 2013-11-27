/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Symbolication/VMUHeader.h>

@class NSMutableArray, NSString;

@interface VMUArchiveHeader : VMUHeader {

	NSMutableArray* _headers;
	NSString* _path;

}
+(id)archiveHeaderWithMemory:(id)arg1 path:(id)arg2 timestamp:(id)arg3 ;
-(void)dealloc;
-(id)description;
-(BOOL)isArchive;
-(id)initWithMemory:(id)arg1 path:(id)arg2 timestamp:(id)arg3 ;
-(id)architecture;
-(id)headers;
@end

