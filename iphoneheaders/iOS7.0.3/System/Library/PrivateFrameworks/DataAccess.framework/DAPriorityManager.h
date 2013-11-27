/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:39 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <DataAccess/DataAccess-Structs.h>
@interface DAPriorityManager : NSObject {

	CFDictionaryRef _clientsToPriorityRequests;
	int _foregroundDataclasses;
	int _currentPriority;

}

@property (readonly) CFDictionaryRef clientsToPriorityRequests;              //@synthesize clientsToPriorityRequests=_clientsToPriorityRequests - In the implementation block
@property (readonly) int currentPriority;                                    //@synthesize currentPriority=_currentPriority - In the implementation block
+(void)vendPriorityManagers;
+(id)sharedManager;
-(void)dealloc;
-(id)init;
-(void)bumpDataclassesToUIPriority:(int)arg1 ;
-(void)requestPriority:(int)arg1 forClient:(id)arg2 dataclasses:(int)arg3 ;
-(id)_appIDsToDataclasses;
-(void)_setNewPriority;
-(void)_SBApplicationStateChanged:(id)arg1 ;
-(CFDictionaryRef)clientsToPriorityRequests;
-(int)_recalculatePriority;
-(void)_setForegroundDataclasses:(int)arg1 ;
-(int)currentPriority;
-(id)stateString;
@end

