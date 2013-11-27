/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQWrapPointGenerator.h>

@protocol GQUOutputBundle, GQWrapPointGenerator;
@class GQPProcessor, GQDRoot, SFUZipArchive, , GQSTable, GQDSStylesheet;

@interface GQSDocument : NSObject <GQWrapPointGenerator> {

	GQPProcessor* mProcessor;
	GQDRoot* mRoot;
	CFURLRef mBundleUrl;
	SFUZipArchive* mArchive;
	<GQUOutputBundle>* mOutputBundle;
	CFArrayRef mObjectStack;
	id mGeneratorState;
	GQSTable* mTableState;
	Class mCurrentDrawablesGenerator;
	Class mCurrentTableGenerator;
	<GQWrapPointGenerator>* mCurrentWrapPointGenerator;
	BOOL mMustRegisterDrawables;
	BOOL mGeneratorBeginWasCalled;
	BOOL mShouldStreamTables;
	BOOL mDoExternalTextWrap;
	BOOL mGeneratingThumbnail;
	BOOL mThumbnailGenerationDone;
	unsigned mTextScale;
	set<GQUtility::ObjcSharedPtr<GQDWrapPoint>, GQUtility::NSObjectComparator<GQDWrapPoint>, std::__1::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint> > >* mWrapPoints;
	CFDictionaryRef mBundleResourceUriMap;
	GQDSStylesheet* mStylesheet;
	BOOL mIsReadingStorageAttachments;
	CFStringRef mFilename;
	BOOL _doCalculateThumbnailSize;

}

@property (assign,nonatomic) BOOL doCalculateThumbnailSize;              //@synthesize doCalculateThumbnailSize=_doCalculateThumbnailSize - In the implementation block
-(id)peekObject;
-(id)popRetainedObject;
-(id)topObjectOfClass:(Class)arg1 ;
-(int)objectStackDepth;
-(void)setCurrentDrawablesGenerator:(Class)arg1 ;
-(Class)currentDrawablesGenerator;
-(void)setCurrentTableGenerator:(Class)arg1 ;
-(void)setMustRegisterDrawables:(BOOL)arg1 ;
-(BOOL)isGeneratingThumbnail;
-(void)setThumbnailGenerationDone:(BOOL)arg1 ;
-(BOOL)mustRegisterDrawables;
-(id)currentWrapPointGenerator;
-(const set<GQUtility::ObjcSharedPtr<GQDWrapPoint>, GQUtility::NSObjectComparator<GQDWrapPoint>, std::__1::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint> > >*)wrapPoints;
-(void)addWrapPoint:(id)arg1 ;
-(vector<GQUtility::ObjcSharedPtr<GQDWrapPoint>, std::__1::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint> > >*)createListOfWrapPointsAlongY:(float)arg1 minX:(float)arg2 maxX:(float)arg3 zIndex:(int)arg4 ;
-(void)clearWrapPoints;
-(BOOL)doExternalTextWrap;
-(CFURLRef)createUriToDocumentBundleResource:(CFStringRef)arg1 ;
-(id)processor;
-(CFURLRef)createUrlToAppBundleResource:(CFStringRef)arg1 processorBundle:(CFBundleRef)arg2 skipCachingPDFAndNoExtentionResources:(BOOL*)arg3 ;
-(id)tableState;
-(void)setTableState:(id)arg1 ;
-(BOOL)isReadingStorageAttachments;
-(Class)currentTableGenerator;
-(BOOL)shouldStreamTables;
-(void)setIsReadingStorageAttachments:(BOOL)arg1 ;
-(id)generatorState;
-(BOOL)doCalculateThumbnailSize;
-(id)outputBundle;
-(void)setGeneratorState:(id)arg1 ;
-(CFStringRef)uriForBundleResource:(CFStringRef)arg1 ofType:(CFStringRef)arg2 ;
-(void)setCurrentWrapPointGenerator:(id)arg1 ;
-(void)setDoExternalTextWrap:(BOOL)arg1 ;
-(BOOL)isThumbnailGenerationDone;
-(void)setGeneratorBeginWasCalled;
-(id)initWithRoot:(id)arg1 processor:(id)arg2 bundleUrl:(CFURLRef)arg3 archive:(id)arg4 outputBundle:(id)arg5 ;
-(id)initWithRoot:(id)arg1 processor:(id)arg2 archive:(id)arg3 outputBundle:(id)arg4 filename:(CFStringRef)arg5 ;
-(BOOL)generatorBeginWasCalled;
-(void)setShouldStreamTables:(BOOL)arg1 ;
-(void)setDoCalculateThumbnailSize:(BOOL)arg1 ;
-(id)initWithRoot:(id)arg1 processor:(id)arg2 outputBundle:(id)arg3 filename:(CFStringRef)arg4 ;
-(void)setGeneratingThumbnail:(BOOL)arg1 ;
-(void)dealloc;
-(CFStringRef)filename;
-(void)pushObject:(id)arg1 ;
-(id)stylesheet;
-(void)setStylesheet:(id)arg1 ;
-(id)root;
@end

