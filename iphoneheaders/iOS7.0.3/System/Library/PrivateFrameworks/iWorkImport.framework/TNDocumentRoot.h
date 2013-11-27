/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSADocumentRoot.h>
#import <iWorkImport/TSTResolverContainerNameProvider.h>

@class TNTheme, TSSStylesheet, NSMutableArray, TSKTreeNode, TNUIState, NSString, NSArray;

@interface TNDocumentRoot : TSADocumentRoot <TSTResolverContainerNameProvider> {

	TNTheme* mTheme;
	TSSStylesheet* mStylesheet;
	NSMutableArray* mSheets;
	TSKTreeNode* mSidebarOrder;
	unsigned mSheetNameCounter;
	TNUIState* mUIState;
	BOOL _printingAllSheets;
	NSString* _printerID;
	NSString* _paperID;
	CGSize _pageSize;

}

@property (nonatomic,readonly) TSSStylesheet * stylesheet; 
@property (nonatomic,retain) TNTheme * theme; 
@property (nonatomic,readonly) NSArray * sheets; 
@property (nonatomic,copy) NSString * printerID;                                             //@synthesize printerID=_printerID - In the implementation block
@property (nonatomic,copy) NSString * paperID;                                               //@synthesize paperID=_paperID - In the implementation block
@property (assign,nonatomic) CGSize pageSize;                                                //@synthesize pageSize=_pageSize - In the implementation block
@property (nonatomic,readonly) unsigned tableCount; 
@property (nonatomic,readonly) TSKTreeNode * sidebarOrder; 
@property (nonatomic,retain) TNUIState * uiState; 
@property (assign,getter=isPrintingAllSheets,nonatomic) BOOL printingAllSheets;              //@synthesize printingAllSheets=_printingAllSheets - In the implementation block
@property (nonatomic,copy) NSArray * selectedQuickCalcFunctions; 
@property (assign,nonatomic) BOOL removedAllQuickCalcFunctions; 
+(CGSize)previewImageMaxSizeForType:(unsigned)arg1 ;
+(CGSize)previewImageSizeForType:(unsigned)arg1 ;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)resolverMatchingName:(id)arg1 ;
-(void)documentDidLoad;
-(BOOL)isMultiPageForQuickLook;
-(id)previewImageForSize:(CGSize)arg1 ;
-(void)prepareNewDocumentWithTemplateBundle:(id)arg1 ;
-(void)initializeForImport;
-(BOOL)shouldAllowDrawableInGroups:(id)arg1 forImport:(BOOL)arg2 ;
-(void)setThemeForTemplateImport:(id)arg1 ;
-(id)resolverContainerNameForResolver:(id)arg1 ;
-(id)nameForResolverContainer:(id)arg1 ;
-(id)resolverContainerForName:(id)arg1 caseSensitive:(BOOL)arg2 ;
-(id)resolverContainerNamesMatchingPrefix:(id)arg1 ;
-(id)resolverMatchingName:(id)arg1 contextResolver:(id)arg2 ;
-(id)resolverMatchingName:(id)arg1 contextContainerName:(id)arg2 ;
-(id)resolversMatchingPrefix:(id)arg1 ;
-(id)uiState;
-(void)setUiState:(id)arg1 ;
-(void)p_buildSidebarOrder;
-(void)setPaperID:(id)arg1 ;
-(unsigned)p_tableCountForSheet:(id)arg1 ;
-(void)incrementSheetNameCounter;
-(void)insertSheet:(id)arg1 sheetIndex:(unsigned)arg2 context:(id)arg3 ;
-(void)p_removeSidebarNodeForSheet:(id)arg1 ;
-(id)p_untitledSheetName;
-(void)p_addSidebarNodeForSheet:(id)arg1 ;
-(id)p_resolverContainerForResolver:(id)arg1 ;
-(id)sheets;
-(void)setSelectedQuickCalcFunctions:(id)arg1 ;
-(id)selectedQuickCalcFunctions;
-(void)setRemovedAllQuickCalcFunctions:(BOOL)arg1 ;
-(BOOL)removedAllQuickCalcFunctions;
-(id)paperID;
-(id)p_chartsWantingDeferredUpgrade;
-(void)performDeferredUpgradeImportOperationsOnNewThreadForCharts:(id)arg1 ;
-(void)performDeferredUpgradeImportOperationsRequiringCalcEngine;
-(id)p_previewImageWithImageSize:(CGSize)arg1 ;
-(CGRect)p_contentFrameToCaptureForSheet:(id)arg1 ;
-(float)p_imageBorderForSize:(CGSize)arg1 ;
-(CGSize)p_adjustCapturedContentSize:(CGSize)arg1 toAspectRatio:(CGSize)arg2 ;
-(void)initializeHardCodedBlankDocument;
-(void)setImportedPaperID:(id)arg1 printerID:(id)arg2 ;
-(unsigned)tableCount;
-(void)removeAllSheets;
-(void)addSheet:(id)arg1 dolcContext:(id)arg2 ;
-(void)removeSheet:(id)arg1 ;
-(void)moveSheet:(id)arg1 toIndex:(unsigned)arg2 ;
-(void)setSidebarChildren:(id)arg1 forSheet:(id)arg2 ;
-(void)sheet:(id)arg1 insertedDrawable:(id)arg2 ;
-(void)sheet:(id)arg1 removedDrawable:(id)arg2 ;
-(id)sidebarOrder;
-(BOOL)isPrintingAllSheets;
-(void)setPrintingAllSheets:(BOOL)arg1 ;
-(unsigned)applicationType;
-(void)setPageSize:(CGSize)arg1 ;
-(void)dealloc;
-(id)initWithContext:(id)arg1 ;
-(id).cxx_construct;
-(id)printerID;
-(void)setPrinterID:(id)arg1 ;
-(id)childEnumerator;
-(id)theme;
-(CGSize)pageSize;
-(id)activeSheet;
-(void)setTheme:(id)arg1 ;
-(id)stylesheet;
@end

