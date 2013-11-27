/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/EDKeyedObject.h>

@class EDResources, EDRunsCollection;

@interface CHDDefaultTextProperty : NSObject <EDKeyedObject> {

	EDResources* mResources;
	int mDefaultTextType;
	unsigned mContentFormatId;
	EDRunsCollection* mRuns;
	int mLabelPosition;
	bool mShowCategoryLabel;
	bool mShowValueLabel;
	bool mShowPercentageLabel;
	bool mShowSeriesLabel;

}
+(id)defaultTextPropertyWithResources:(id)arg1 ;
-(void)dealloc;
-(int)key;
-(unsigned)contentFormatId;
-(id)contentFormat;
-(id)runs;
-(void)setContentFormatId:(unsigned)arg1 ;
-(id)initWithResources:(id)arg1 ;
-(void)setRuns:(id)arg1 ;
-(void)setDefaultTextType:(int)arg1 ;
-(void)setLabelPosition:(int)arg1 ;
-(void)setIsShowCategoryLabel:(bool)arg1 ;
-(void)setIsShowValueLabel:(bool)arg1 ;
-(void)setIsShowPercentageLabel:(bool)arg1 ;
-(void)setIsShowSeriesLabel:(bool)arg1 ;
-(void)setContentFormat:(id)arg1 ;
-(int)labelPosition;
-(int)defaultTextType;
-(bool)isShowCategoryLabel;
-(bool)isShowValueLabel;
-(bool)isShowPercentageLabel;
-(bool)isShowSeriesLabel;
@end

