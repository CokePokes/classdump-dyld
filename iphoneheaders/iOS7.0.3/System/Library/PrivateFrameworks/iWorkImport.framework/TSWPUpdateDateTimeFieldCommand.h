/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPTextCommand.h>

@class TSWPDateTimeSmartField, NSDate;

@interface TSWPUpdateDateTimeFieldCommand : TSWPTextCommand {

	TSWPDateTimeSmartField* _dateTimeField;
	NSDate* _date;
	long _dateStyle;
	long _timeStyle;

}
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(UpdateDateTimeFieldCommandArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const UpdateDateTimeFieldCommandArchive*)arg1 unarchiver:(id)arg2 ;
-(void)doCommit;
-(int)persistenceKind;
-(void)doUndoRedo;
-(void)p_updateFieldProperties;
-(id)initWithStorage:(id)arg1 selection:(id)arg2 dateTimeField:(id)arg3 date:(id)arg4 dateStyle:(long)arg5 timeStyle:(long)arg6 ;
-(void)dealloc;
@end

