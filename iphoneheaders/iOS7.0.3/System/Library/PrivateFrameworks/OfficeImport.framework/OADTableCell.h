/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class OADTextBody, OADTableCellProperties;

@interface OADTableCell : NSObject {

	OADTextBody* mTextBody;
	OADTableCellProperties* mProperties;
	int mRowSpan;
	int mGridSpan;
	BOOL mHorzMerge;
	BOOL mVertMerge;
	int mTopRow;
	int mLeftColumn;

}
-(void)dealloc;
-(id)init;
-(id)properties;
-(void)setProperties:(id)arg1 ;
-(BOOL)horzMerge;
-(BOOL)vertMerge;
-(int)gridSpan;
-(id)textBody;
-(void)setGridSpan:(int)arg1 ;
-(void)setHorzMerge:(BOOL)arg1 ;
-(void)setVertMerge:(BOOL)arg1 ;
-(void)setTextBody:(id)arg1 ;
-(BOOL)merge:(int)arg1 ;
-(int)spanAlongDir:(int)arg1 ;
-(int)topRow;
-(void)setTopRow:(int)arg1 ;
-(int)leftColumn;
-(void)setLeftColumn:(int)arg1 ;
-(int)rowSpan;
-(void)setRowSpan:(int)arg1 ;
@end

