/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSDChangeableInfo.h>
#import <iWorkImport/TSKDocumentObject.h>
#import <iWorkImport/TSKTransformableObject.h>
#import <iWorkImport/TSKSearchable.h>

@protocol TSDContainerInfo, TSDOwningAttachment, TSDAnnotationHosting;
@class TSDInfoGeometry, NSObject, TSPLazyReference, TSSPropertySetChangeDetails, TSDExteriorTextWrap, TSPObject, TSDDefaultPartitioner, NSURL, , NSString, KNSlide, KNAbstractSlide, NSArray, KNBuild;

@interface TSDDrawableInfo : TSPObject <TSDChangeableInfo, TSKDocumentObject, TSKTransformableObject, TSKSearchable> {

	TSDInfoGeometry* mGeometry;
	NSObject<TSDContainerInfo>* mParentInfo;
	TSPLazyReference* mParentInfoReference;
	BOOL mLocked;
	BOOL mAspectRatioLocked;
	TSSPropertySetChangeDetails* mChanges;
	TSDExteriorTextWrap* mExteriorTextWrap;
	TSPObject<TSDOwningAttachment>* mOwningAttachment;
	TSDDefaultPartitioner* mDefaultPartitioner;
	NSURL* mHyperlinkURL;
	<TSDAnnotationHosting>* mComment;
	NSString* mAccessibilityDescription;

}

@property (nonatomic,readonly) NSString * buildImageTitle; 
@property (nonatomic,readonly) KNSlide * slide; 
@property (nonatomic,readonly) KNAbstractSlide * abstractSlide; 
@property (nonatomic,readonly) NSArray * builds; 
@property (nonatomic,readonly) unsigned buildCount; 
@property (nonatomic,readonly) KNBuild * buildIn; 
@property (nonatomic,readonly) KNBuild * buildOut; 
@property (nonatomic,readonly) BOOL hasActionBuilds; 
@property (nonatomic,readonly) NSArray * actionBuilds; 
@property (nonatomic,readonly) NSArray * buildChunks; 
@property (nonatomic,readonly) NSArray * ghostInfos; 
@property (assign,getter=isLocked,nonatomic) BOOL locked; 
@property (getter=isLockable,nonatomic,readonly) BOOL lockable; 
@property (nonatomic,readonly) BOOL supportsAttachedComments; 
@property (assign,nonatomic) BOOL aspectRatioLocked; 
@property (nonatomic,readonly) BOOL canSizeBeChangedIncrementally; 
@property (nonatomic,copy) TSDExteriorTextWrap * exteriorTextWrap; 
@property (nonatomic,copy) NSURL * hyperlinkURL; 
@property (nonatomic,readonly) BOOL supportsHyperlinks; 
@property (nonatomic,copy) NSString * accessibilityDescription; 
@property (nonatomic,copy) <TSDAnnotationHosting> * comment; 
@property (assign,nonatomic) BOOL matchesObjectPlaceholderGeometry; 
@property (nonatomic,copy) TSDInfoGeometry * geometry; 
@property (assign,nonatomic) NSObject<TSDContainerInfo> * parentInfo; 
@property (assign,nonatomic) TSPObject<TSDOwningAttachment> * owningAttachment; 
@property (nonatomic,readonly) TSPObject<TSDOwningAttachment> * owningAttachmentNoRecurse; 
@property (getter=isFloatingAboveText,nonatomic,readonly) BOOL floatingAboveText; 
@property (getter=isAnchoredToText,nonatomic,readonly) BOOL anchoredToText; 
@property (getter=isInlineWithText,nonatomic,readonly) BOOL inlineWithText; 
@property (getter=isAttachedToBodyText,nonatomic,readonly) BOOL attachedToBodyText; 
@property (nonatomic,readonly) BOOL isUserModifiable; 
@property (nonatomic,readonly) Class editorClass; 
+(void)setShouldPartitionByDefault:(BOOL)arg1 ;
+(BOOL)canPartition;
-(void)setAccessibilityDescription:(id)arg1 ;
-(BOOL)aspectRatioLocked;
-(id)copyWithContext:(id)arg1 ;
-(void)willCopyWithOtherDrawables:(id)arg1 ;
-(void)didCopy;
-(void)saveToArchive:(DrawableArchive*)arg1 archiver:(id)arg2 ;
-(void)beginCollectingChanges;
-(id)endCollectingChanges;
-(void)loadFromArchive:(const DrawableArchive*)arg1 unarchiver:(id)arg2 ;
-(id)presetKind;
-(CGAffineTransform)transformInRoot;
-(BOOL)isThemeContent;
-(id)parentInfo;
-(Class)repClass;
-(id)owningAttachment;
-(id)animationFilters;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 ;
-(id)transformedGeometryWithTransform:(CGAffineTransform)arg1 inBounds:(CGRect)arg2 ;
-(Class)editorClass;
-(id)commandForTransformingByTransform:(CGAffineTransform)arg1 context:(id)arg2 transformedObjects:(id)arg3 inBounds:(CGRect)arg4 ;
-(void)willChangeProperty:(int)arg1 ;
-(void)willChangeProperties:(id)arg1 ;
-(BOOL)isUserModifiable;
-(void)setParentInfo:(id)arg1 ;
-(void)setOwningAttachment:(id)arg1 ;
-(id)owningAttachmentNoRecurse;
-(BOOL)isFloatingAboveText;
-(BOOL)isAnchoredToText;
-(BOOL)isInlineWithText;
-(BOOL)isAttachedToBodyText;
-(BOOL)matchesObjectPlaceholderGeometry;
-(BOOL)matchesObjectPlaceholderGeometry;
-(void)setMatchesObjectPlaceholderGeometry:(BOOL)arg1 ;
-(void)setMatchesObjectPlaceholderGeometry:(BOOL)arg1 ;
-(unsigned)textureDeliveryStyleFromDeliveryString:(id)arg1 ;
-(id)textureDeliveryStylesLocalized:(BOOL)arg1 animationFilter:(id)arg2 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(void)coalesceChanges:(id)arg1 ;
-(void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(id)searchForAnnotationsWithHitBlock:(/*^block*/ id)arg1 ;
-(int)mixingTypeWithObject:(id)arg1 ;
-(id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2 ;
-(void)setInsertionCenterPosition:(CGPoint)arg1 ;
-(unsigned)chunkCountForTextureDeliveryStyle:(unsigned)arg1 animationFilter:(id)arg2 ;
-(BOOL)reverseChunkingIsSupported;
-(BOOL)supportsHyperlinks;
-(BOOL)canSizeBeChangedIncrementally;
-(BOOL)supportsAttachedComments;
-(BOOL)isLockable;
-(void)performBlockWithTemporaryLayout:(/*^block*/ id)arg1 ;
-(CGAffineTransform)computeLayoutFullTransform;
-(id)containingGroup;
-(unsigned)chunkCountForTextureDeliveryStyle:(unsigned)arg1 byGlyphStyle:(int)arg2 animationFilter:(id)arg3 ;
-(id)descriptionForPasteboard;
-(CGPoint)transformableObjectAnchorPoint;
-(void)setHyperlinkURL:(id)arg1 ;
-(CGAffineTransform)computeFullTransform;
-(CGAffineTransform)fullTransformInRoot;
-(void)setExteriorTextWrap:(id)arg1 ;
-(id)exteriorTextWrap;
-(id)partitioner;
-(void)willGroupWithCommand:(id)arg1 ;
-(void)didUngroupWithCommand:(id)arg1 ;
-(id)commandToFlipWithOrientation:(int)arg1 ;
-(BOOL)canAnchor;
-(BOOL)canChangeWrapType;
-(id)descriptionForPasteboardWithSource:(id)arg1 ;
-(id)hyperlinkURL;
-(void)setParentInfoDuringUnarchiving:(id)arg1 fromPasteboard:(BOOL)arg2 ;
-(id)builds;
-(id)buildChunks;
-(id)titleForBuildChunk:(id)arg1 ;
-(id)buildImageTitle;
-(id)actionBuilds;
-(id)abstractSlide;
-(BOOL)hasActionBuilds;
-(id)buildIn;
-(id)buildOut;
-(unsigned)buildCount;
-(id)buildChunksForAnimationType:(int)arg1 ;
-(id)ghostInfos;
-(void)setComment:(id)arg1 ;
-(void)dealloc;
-(BOOL)isLocked;
-(void)setLocked:(BOOL)arg1 ;
-(id)geometry;
-(void)setGeometry:(id)arg1 ;
-(void)setAspectRatioLocked:(BOOL)arg1 ;
-(id)slide;
-(id)comment;
-(int)elementKind;
-(Class)layoutClass;
-(id)accessibilityDescription;
@end

