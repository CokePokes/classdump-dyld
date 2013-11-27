/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPStyleBaseCommand.h>

@interface TSWPStyleDeleteCommand : TSWPStyleBaseCommand {

	unsigned _oldPresetIndex;

}

@property (nonatomic,readonly) unsigned oldPresetIndex;              //@synthesize oldPresetIndex=_oldPresetIndex - In the implementation block
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToMessage:(StyleDeleteCommandArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromMessage:(const StyleDeleteCommandArchive*)arg1 unarchiver:(id)arg2 ;
-(id)initWithTheme:(id)arg1 style:(id)arg2 ;
-(unsigned)oldPresetIndex;
-(void)p_CommitAndRedo;
-(void)undo;
-(void)redo;
-(void)commit;
-(id)actionString;
@end

