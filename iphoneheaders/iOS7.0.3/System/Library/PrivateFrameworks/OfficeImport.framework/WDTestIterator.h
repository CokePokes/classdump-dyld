/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/WDIterator.h>

@class WDIterator;

@interface WDTestIterator : WDIterator {

	WDIterator* mIterator;
	id mNext;

}
-(void)dealloc;
-(id)initWithIterator:(id)arg1 ;
-(BOOL)test:(id)arg1 ;
-(BOOL)hasNext;
-(id)next;
@end

