/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CorePDF/CPDisposable.h>

@interface CPMemoryOwner : NSObject <CPDisposable> {

	void* memory;

}
-(void)dealloc;
-(void)dispose;
-(id)initWithAllocatedMemory:(void*)arg1 ;
-(void)finalize;
@end

