/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue, OS_dispatch_source, AXElementFetcherDelegate;
#import <AXRuntime/AXRuntime-Structs.h>
@class NSObject, , NSMapTable, NSArray, AXElementGroup, AXElement, AXVisualElementGrouper, AXElementGroupPruner, NSMutableDictionary;

@interface AXElementFetcher : NSObject {

	NSObject<OS_dispatch_queue>* _elementFetchQueue;
	NSObject<OS_dispatch_queue>* _elementAccessQueue;
	AXObserverRef _axRuntimeNotificationObserver;
	unsigned _scheduledFetchEvent;
	NSObject<OS_dispatch_source>* _eventCoalesceTimer;
	BOOL _enabled;
	BOOL _eventManagementEnabled;
	BOOL _groupingEnabled;
	BOOL _shouldUsePadInterfaceHeuristics;
	BOOL _fetchingElements;
	<AXElementFetcherDelegate>* _delegate;
	int _fetchPolicy;
	NSMapTable* _fetchObservers;
	unsigned _activeFetchEvents;
	NSArray* _elementCache;
	AXElementGroup* _rootGroupCache;
	AXElementGroup* _keyboardGroupCache;
	AXElement* _currentApp;
	AXVisualElementGrouper* _visualElementGrouper;
	AXElementGroupPruner* _elementGroupPruner;
	NSMutableDictionary* _postFetchFilters;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                            //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isFetchingElements,nonatomic) BOOL fetchingElements;                          //@synthesize fetchingElements=_fetchingElements - In the implementation block
@property (nonatomic,readonly) BOOL willFetchElements; 
@property (nonatomic,readonly) NSArray * availableElements; 
@property (assign,nonatomic) int fetchPolicy;                                                          //@synthesize fetchPolicy=_fetchPolicy - In the implementation block
@property (assign,getter=isEventManagementEnabled,nonatomic) BOOL eventManagementEnabled;              //@synthesize eventManagementEnabled=_eventManagementEnabled - In the implementation block
@property (assign,getter=isGroupingEnabled,nonatomic) BOOL groupingEnabled;                            //@synthesize groupingEnabled=_groupingEnabled - In the implementation block
@property (assign,nonatomic) BOOL shouldUsePadInterfaceHeuristics;                                     //@synthesize shouldUsePadInterfaceHeuristics=_shouldUsePadInterfaceHeuristics - In the implementation block
@property (nonatomic,readonly) AXElementGroup * rootGroup; 
@property (nonatomic,readonly) AXElementGroup * keyboardGroup; 
@property (nonatomic,readonly) AXElementGroup * firstKeyboardRow; 
@property (nonatomic,readonly) AXElementGroup * lastKeyboardRow; 
@property (assign,nonatomic) <AXElementFetcherDelegate> * delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMapTable * fetchObservers;                                              //@synthesize fetchObservers=_fetchObservers - In the implementation block
@property (assign,nonatomic) unsigned activeFetchEvents;                                               //@synthesize activeFetchEvents=_activeFetchEvents - In the implementation block
@property (nonatomic,retain) AXElement * currentApp;                                                   //@synthesize currentApp=_currentApp - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * postFetchFilters;                                   //@synthesize postFetchFilters=_postFetchFilters - In the implementation block
@property (nonatomic,retain) NSArray * elementCache;                                                   //@synthesize elementCache=_elementCache - In the implementation block
@property (nonatomic,retain) AXElementGroup * rootGroupCache;                                          //@synthesize rootGroupCache=_rootGroupCache - In the implementation block
@property (nonatomic,retain) AXElementGroup * keyboardGroupCache;                                      //@synthesize keyboardGroupCache=_keyboardGroupCache - In the implementation block
@property (nonatomic,retain) AXVisualElementGrouper * visualElementGrouper;                            //@synthesize visualElementGrouper=_visualElementGrouper - In the implementation block
@property (nonatomic,retain) AXElementGroupPruner * elementGroupPruner;                                //@synthesize elementGroupPruner=_elementGroupPruner - In the implementation block
+(id)systemWideElement;
+(id)_applicationForElement:(id)arg1 ;
+(id)currentAppWithPositionHint:(CGPoint)arg1 ;
+(id)springBoardElement;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)description;
-(id)delegate;
-(BOOL)isEnabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)addFetchEvents:(unsigned)arg1 ;
-(void)enableEventManagement;
-(void)_tearDownEventCoalesceTimer;
-(void)disableEventManagement;
-(void)unregisterAllFetchObservers;
-(int)fetchPolicy;
-(id)_debugStringForPolicy:(int)arg1 ;
-(unsigned)activeFetchEvents;
-(id)_debugStringForFetchEvents:(unsigned)arg1 ;
-(BOOL)isFetchingElements;
-(id)currentApp;
-(BOOL)isGroupingEnabled;
-(BOOL)_updateCurrentApp;
-(void)setCurrentApp:(id)arg1 ;
-(id)elementCache;
-(id)rootGroupCache;
-(id)keyboardGroupCache;
-(id)keyboardGroup;
-(id)fetchObservers;
-(void)setActiveFetchEvents:(unsigned)arg1 ;
-(void)_fetchEventOccurred:(unsigned)arg1 ;
-(BOOL)isEventManagementEnabled;
-(BOOL)_fetchEventCanBeManaged:(unsigned)arg1 ;
-(int)_priorityForFetchEvent:(unsigned)arg1 ;
-(void)_scheduleFetchEvent:(unsigned)arg1 ;
-(void)_notifyObserversDidScheduleFetchEvent:(unsigned)arg1 ;
-(double)_delayForFetchEvent:(unsigned)arg1 ;
-(void)_notifyObserversWillFetchElementsForEvent:(unsigned)arg1 ;
-(BOOL)_fetchGroups:(BOOL)arg1 ;
-(BOOL)_fetchElements:(BOOL)arg1 ;
-(void)_notifyObserversDidFetchElementsForEvent:(unsigned)arg1 foundNewElements:(BOOL)arg2 ;
-(id)_axNotificationsForManagedEvents;
-(void)setEventManagementEnabled:(BOOL)arg1 ;
-(id)_fetchVisibleElements;
-(id)_fetchFirstElements;
-(void)_sendFakeScreenChangeIfNecessaryForGroup:(id)arg1 orElements:(id)arg2 appDidChange:(BOOL)arg3 ;
-(id)postFetchFilters;
-(id)_filterElements:(id)arg1 withFilter:(/*^block*/ id)arg2 ;
-(void)setElementCache:(id)arg1 ;
-(void)setRootGroupCache:(id)arg1 ;
-(void)setKeyboardGroupCache:(id)arg1 ;
-(BOOL)_shouldConsiderCacheAsInvalid;
-(id)_findElementsMatchingBlock:(/*^block*/ id)arg1 internalRequest:(BOOL)arg2 ;
-(id)findElementMatchingElement:(id)arg1 ;
-(id)closestElementToPoint:(CGPoint)arg1 ;
-(id)findGroupableMatchingGroupable:(id)arg1 ;
-(id)_siblingOfGroupable:(id)arg1 forDirection:(BOOL)arg2 didWrap:(BOOL*)arg3 ;
-(id)_findGroupableMatchingGroupable:(id)arg1 inElementGroup:(id)arg2 ;
-(id)_findGroupableMatchingBlock:(/*^block*/ id)arg1 inElementGroup:(id)arg2 ;
-(id)_groupWithItems:(id)arg1 groupTraits:(int)arg2 ;
-(id)_groupWithDictionary:(id)arg1 ;
-(id)_filterGroup:(id)arg1 withFilter:(/*^block*/ id)arg2 ;
-(id)visualElementGrouper;
-(BOOL)shouldUsePadInterfaceHeuristics;
-(void)setVisualElementGrouper:(id)arg1 ;
-(id)elementGroupPruner;
-(void)setElementGroupPruner:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 fetchEvents:(unsigned)arg2 fetchPolicy:(int)arg3 enableEventManagement:(BOOL)arg4 enableGrouping:(BOOL)arg5 beginEnabled:(BOOL)arg6 ;
-(BOOL)willFetchElements;
-(id)availableElements;
-(id)rootGroup;
-(id)firstKeyboardRow;
-(id)lastKeyboardRow;
-(void)registerFetchObserver:(id)arg1 targetQueue:(id)arg2 ;
-(void)unregisterFetchObserver:(id)arg1 ;
-(void)removeFetchEvents:(unsigned)arg1 ;
-(void)fetchEventOccurred:(unsigned)arg1 ;
-(void)addPostFetchFilter:(/*^block*/ id)arg1 withIdentifier:(id)arg2 ;
-(void)removePostFetchFilterWithIdentifier:(id)arg1 ;
-(void)removeAllPostFetchFilters;
-(id)findElementMatchingBlock:(/*^block*/ id)arg1 ;
-(id)findElementsMatchingBlock:(/*^block*/ id)arg1 ;
-(id)closestElementToElement:(id)arg1 ;
-(id)firstElement;
-(id)lastElement;
-(id)nextSiblingOfElement:(id)arg1 didWrap:(BOOL*)arg2 ;
-(id)previousSiblingOfElement:(id)arg1 didWrap:(BOOL*)arg2 ;
-(id)nextSiblingOfGroupable:(id)arg1 didWrap:(BOOL*)arg2 ;
-(id)previousSiblingOfGroupable:(id)arg1 didWrap:(BOOL*)arg2 ;
-(id)findGroupableMatchingBlock:(/*^block*/ id)arg1 ;
-(void)updateKeyboardGroup:(id)arg1 ;
-(void)_debugLogElementCache;
-(void)setFetchPolicy:(int)arg1 ;
-(void)setFetchObservers:(id)arg1 ;
-(void)setGroupingEnabled:(BOOL)arg1 ;
-(void)setShouldUsePadInterfaceHeuristics:(BOOL)arg1 ;
-(void)setFetchingElements:(BOOL)arg1 ;
-(void)setPostFetchFilters:(id)arg1 ;
-(void)refresh;
@end

