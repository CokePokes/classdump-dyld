/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:39 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPUIGraphicalAttachment.h>

@interface TSTFormulaEqualsTokenAttachment : TSWPUIGraphicalAttachment
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(FormulaEqualsTokenAttachmentArchive*)arg1 archiver:(id)arg2 ;
-(id)initFromArchive:(const FormulaEqualsTokenAttachmentArchive*)arg1 unarchiver:(id)arg2 ;
-(BOOL)wantsSelectionAtPoint:(CGPoint)arg1 ;
-(id)rendererForAttachment;
-(CGSize)size;
-(id)description;
-(float)baselineOffset;
@end

