/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MIME/MIME-Structs.h>
#import <CoreFoundation/NSEnumerator.h>

@class MFEmailSet;

@interface _MFEmailSetEnumerator : NSEnumerator {

	MFEmailSet* _set;
	SCD_Struct_MF3* _state;

}
-(void)dealloc;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_MF3*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(id)nextObject;
-(id)initWithSet:(id)arg1 ;
@end

