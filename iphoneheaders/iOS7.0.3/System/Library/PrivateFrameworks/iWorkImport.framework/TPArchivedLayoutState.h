/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TPArchivedLayoutStateProtocol.h>

@class NSArray;

@interface TPArchivedLayoutState : TSPObject <TPArchivedLayoutStateProtocol> {

	unsigned _sectionIndex;
	unsigned _sectionPageIndex;
	unsigned _documentPageIndex;
	unsigned _lastPageCount;
	NSArray* _sectionHints;

}
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)p_reset;
-(void)captureLayoutStateWithProvider:(id)arg1 ;
-(void)readLayoutStateWithConsumer:(id)arg1 ;
-(void)dealloc;
@end

