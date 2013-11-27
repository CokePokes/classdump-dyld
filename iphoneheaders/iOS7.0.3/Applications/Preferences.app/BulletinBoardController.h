/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:39:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Preferences.app/Preferences
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Preferences/PSEditableListController.h>

@protocol OS_dispatch_semaphore;
@class PSSpecifier, NSObject, NSDictionary, BBSectionInfo;

@interface BulletinBoardController : PSEditableListController {

	int _inCount;
	int _orderRule;
	PSSpecifier* _inGroupEmptyCell;
	PSSpecifier* _outGroupEmptyCell;
	unsigned _cellChangeAction;
	NSObject<OS_dispatch_semaphore>* _loadSem;
	int _todaySection;
	int _inNotificationCenterSection;
	int _outOfNotificationCenterSection;
	BOOL _loadingFromBBGateway;
	BOOL _telephonyDevice;
	unsigned _dndDataTypes;
	NSDictionary* _urlResourceDictionary;
	BBSectionInfo* _todaySectionInfo;
	BBSectionInfo* _stocksSectionInfo;
	BBSectionInfo* _attributionSectionInfo;

}

@property (nonatomic,retain) PSSpecifier * inGroupEmptyCell;                      //@synthesize inGroupEmptyCell=_inGroupEmptyCell - In the implementation block
@property (nonatomic,retain) PSSpecifier * outGroupEmptyCell;                     //@synthesize outGroupEmptyCell=_outGroupEmptyCell - In the implementation block
@property (assign) BOOL loadingFromBBGateway;                                     //@synthesize loadingFromBBGateway=_loadingFromBBGateway - In the implementation block
@property (assign,nonatomic) unsigned dndDataTypes;                               //@synthesize dndDataTypes=_dndDataTypes - In the implementation block
@property (nonatomic,retain) NSDictionary * urlResourceDictionary;                //@synthesize urlResourceDictionary=_urlResourceDictionary - In the implementation block
@property (assign,nonatomic) BOOL telephonyDevice;                                //@synthesize telephonyDevice=_telephonyDevice - In the implementation block
@property (nonatomic,retain) BBSectionInfo * todaySectionInfo;                    //@synthesize todaySectionInfo=_todaySectionInfo - In the implementation block
@property (nonatomic,retain) BBSectionInfo * stocksSectionInfo;                   //@synthesize stocksSectionInfo=_stocksSectionInfo - In the implementation block
@property (nonatomic,retain) BBSectionInfo * attributionSectionInfo;              //@synthesize attributionSectionInfo=_attributionSectionInfo - In the implementation block
-(void)profileNotification:(id)arg1 ;
-(void)_loadSections;
-(void)setUrlResourceDictionary:(id)arg1 ;
-(void)setCmasAlertState:(id)arg1 forSpecifier:(id)arg2 ;
-(id)cmasAlertsValue:(id)arg1 ;
-(id)inGroupEmptyCell;
-(void)setInGroupEmptyCell:(id)arg1 ;
-(id)outGroupEmptyCell;
-(void)setOutGroupEmptyCell:(id)arg1 ;
-(BOOL)loadingFromBBGateway;
-(void)setEnabledInLockScreen:(id)arg1 specifier:(id)arg2 ;
-(id)enabledInLockScreen:(id)arg1 ;
-(void)setOrderingMode:(id)arg1 specifier:(id)arg2 ;
-(void)_loadSegmentCellState:(int)arg1 ;
-(id)inOutSpecifiersFrom:(id)arg1 ;
-(void)_addRegionalAlertGroupToSpecifiers:(id)arg1 ;
-(id)_sectionIDs;
-(int)indexOfBBSectionInfoForIndexPath:(id)arg1 ;
-(void)adjustEmptyCells;
-(void)_pushControllerAtIndexPath:(id)arg1 ;
-(id)urlResourceDictionary;
-(void)setTodaySectionState:(id)arg1 specifier:(id)arg2 ;
-(id)todaySectionState:(id)arg1 ;
-(void)setTrafficConditionsState:(id)arg1 forSpecifier:(id)arg2 ;
-(id)trafficConditionsState:(id)arg1 ;
-(void)setLoadingFromBBGateway:(BOOL)arg1 ;
-(id)_filterSuppressedSections:(id)arg1 ;
-(id)sectionsOrderedByInOutState:(id)arg1 ;
-(void)_reallyLoadSections:(id)arg1 chronologicalSections:(id)arg2 ;
-(void)_checkAndUpdateAttributionState;
-(void)notifyGamedOfChanges:(unsigned)arg1 mask:(unsigned)arg2 ;
-(void)notifyFMFOfChanges;
-(void)loadedDNDData:(unsigned)arg1 ;
-(id)orderingMode:(id)arg1 ;
-(void)moveSpecifier:(id)arg1 toOnPosition:(BOOL)arg2 ;
-(id)_sectionDescriptions;
-(id)_sectionUIDescriptions;
-(void)_clearSections;
-(unsigned)dndDataTypes;
-(void)setDndDataTypes:(unsigned)arg1 ;
-(BOOL)telephonyDevice;
-(void)setTelephonyDevice:(BOOL)arg1 ;
-(id)todaySectionInfo;
-(void)setTodaySectionInfo:(id)arg1 ;
-(id)stocksSectionInfo;
-(void)setStocksSectionInfo:(id)arg1 ;
-(id)attributionSectionInfo;
-(void)setAttributionSectionInfo:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)handleURL:(id)arg1 ;
-(id)specifiers;
-(void)createGroupIndices;
-(void)setDesiredVerticalContentOffset:(float)arg1 ;
-(void)_reloadSections;
@end

