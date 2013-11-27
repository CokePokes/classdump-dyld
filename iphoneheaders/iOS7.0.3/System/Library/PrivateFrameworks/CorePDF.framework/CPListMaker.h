/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPDisposable.h>

@class CPLayoutArea, NSArray, CPList;

@interface CPListMaker : NSObject <CPDisposable> {

	CPLayoutArea* area;
	NSArray* spacers;
	unsigned textLineCount;
	id* textLines;
	CPList* list;

}
+(void)makeListsInPage:(id)arg1 ;
+(void)makeListsInLayoutArea:(id)arg1 ;
+(void)makeListsInChunk:(id)arg1 ;
-(void)dealloc;
-(void)dispose;
-(void)fetchTextLine:(id)arg1 ;
-(void)makeListItemFrom:(CPListInfo*)arg1 stopAt:(unsigned)arg2 ;
-(BOOL)makeListFrom:(CPListInfo*)arg1 ;
-(void)fetchTextLinesInColumn:(id)arg1 ;
-(void)makeListsInColumn:(id)arg1 ;
-(id)initWithLayoutArea:(id)arg1 ;
-(void)makeLists;
-(void)finalize;
@end

