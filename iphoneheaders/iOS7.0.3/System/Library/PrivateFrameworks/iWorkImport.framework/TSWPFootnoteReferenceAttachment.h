/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPTextualAttachment.h>

@class TSWPStorage, NSString;

@interface TSWPFootnoteReferenceAttachment : TSWPTextualAttachment {

	TSWPStorage* _containedStorage;
	NSString* _customMarkString;

}

@property (nonatomic,retain) TSWPStorage * containedStorage;              //@synthesize containedStorage=_containedStorage - In the implementation block
@property (nonatomic,retain) NSString * customMarkString;                 //@synthesize customMarkString=_customMarkString - In the implementation block
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(unsigned)findCharIndex;
-(void)setParentStorage:(id)arg1 ;
-(id)stringEquivalent;
-(id)customMarkString;
-(id)containedStorage;
-(void)setContainedStorage:(id)arg1 ;
-(const TextualAttachmentArchive*)textualAttachmentArchiveFromUnarchiver:(id)arg1 ;
-(BOOL)shouldArchiveStringEquivalent;
-(id)initWithContext:(id)arg1 wpStorage:(id)arg2 ;
-(void)applyMark;
-(void)setCustomMarkString:(id)arg1 ;
-(void)setContainedStorageParentInfoToStorage:(id)arg1 ;
-(void)checkDebug;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(BOOL)isSearchable;
-(int)elementKind;
@end

