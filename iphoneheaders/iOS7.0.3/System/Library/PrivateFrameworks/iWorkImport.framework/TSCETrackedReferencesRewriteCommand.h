/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/TSKCommand.h>

@class TSCEFormulaRewriteSpec, TSCEReferenceTracker;

@interface TSCETrackedReferencesRewriteCommand : TSKCommand {

	TSCEFormulaRewriteSpec* mRewriteSpec;
	TSCEReferenceTracker* mReferenceTracker;

}
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)initWithContext:(id)arg1 rewriteSpec:(id)arg2 referenceTracker:(id)arg3 ;
-(void)dealloc;
-(void)undo;
-(void)redo;
-(void)commit;
-(BOOL)process;
@end

