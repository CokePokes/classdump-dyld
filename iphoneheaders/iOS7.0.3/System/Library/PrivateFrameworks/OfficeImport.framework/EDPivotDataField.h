/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString;

@interface EDPivotDataField : NSObject {

	long mBaseField;
	unsigned long mBaseItem;
	unsigned long mFieldId;
	unsigned long mNumFmtId;
	NSString* mName;
	int mFormat;

}
+(id)pivotDataField;
-(void)dealloc;
-(id)init;
-(void)setName:(id)arg1 ;
-(id)name;
-(unsigned long)numFmtId;
-(void)setNumFmtId:(unsigned long)arg1 ;
-(long)baseField;
-(void)setBaseField:(long)arg1 ;
-(unsigned long)baseItem;
-(void)setBaseItem:(unsigned long)arg1 ;
-(unsigned long)fieldId;
-(void)setFieldId:(unsigned long)arg1 ;
-(int)showDataAs;
-(void)setShowDataAs:(int)arg1 ;
@end

