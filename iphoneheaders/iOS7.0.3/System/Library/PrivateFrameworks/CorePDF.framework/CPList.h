/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPDisposable.h>

@class CPListItem;

@interface CPList : NSObject <CPDisposable> {

	CGRect spacer;
	int type;
	unsigned ordinalPrefixLength;
	unsigned ordinalSuffixLength;
	CPListItem* parentItem;
	CFArrayRef items;

}

@property (assign,nonatomic) CGRect spacer; 
@property (assign,nonatomic) int type; 
@property (assign,nonatomic) unsigned ordinalPrefixLength; 
@property (assign,nonatomic) unsigned ordinalSuffixLength; 
@property (nonatomic,retain) CPListItem * parentItem; 
-(CGRect)spacer;
-(void)setSpacer:(CGRect)arg1 ;
-(unsigned)itemCount;
-(void)dealloc;
-(id)init;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)addItem:(id)arg1 ;
-(void)dispose;
-(id)parentItem;
-(BOOL)containsParagraph:(id)arg1 ;
-(BOOL)isMultilevel;
-(unsigned)ordinalPrefixLength;
-(void)setOrdinalPrefixLength:(unsigned)arg1 ;
-(unsigned)ordinalSuffixLength;
-(void)setOrdinalSuffixLength:(unsigned)arg1 ;
-(void)setParentItem:(id)arg1 ;
-(id)itemAtIndex:(unsigned)arg1 ;
-(void)finalize;
@end

