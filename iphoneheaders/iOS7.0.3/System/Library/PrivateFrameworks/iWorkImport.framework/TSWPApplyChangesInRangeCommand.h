/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPTextCommand.h>

@interface TSWPApplyChangesInRangeCommand : TSWPTextCommand {

	BOOL _accept;
	BOOL _forceAll;
	NSRange _range;
	NSRange _selectionRange;

}
-(void)doCommit;
-(int)persistenceKind;
-(void)p_stopEditingFootnote;
-(id)initWithStorage:(id)arg1 range:(NSRange)arg2 selectionRange:(NSRange)arg3 accept:(BOOL)arg4 forceAll:(BOOL)arg5 ;
-(void)redo;
-(id).cxx_construct;
-(id)actionString;
@end

