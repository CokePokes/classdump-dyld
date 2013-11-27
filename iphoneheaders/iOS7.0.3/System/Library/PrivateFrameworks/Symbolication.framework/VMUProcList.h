/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSLock, NSMapTable;

@interface VMUProcList : NSObject {

	NSLock* procLock;
	NSMapTable* allProcs;
	NSMapTable* filteredProcs;
	BOOL appsOnly;
	BOOL ownedOnly;

}
-(void)dealloc;
-(unsigned)count;
-(id)init;
-(BOOL)update;
-(BOOL)updateFromSystem;
-(void)_populateFromSystem;
-(id)newestProcInfoSatisfyingCondition:(SEL)arg1 forTarget:(id)arg2 withContext:(void*)arg3 ;
-(void)setProcInfos:(id)arg1 ;
-(void)addProcInfo:(id)arg1 ;
-(void)removeProcInfo:(id)arg1 ;
-(void)setOwnedOnly:(BOOL)arg1 ;
-(BOOL)ownedOnly:(BOOL)arg1 ;
-(void)setAppsOnly:(BOOL)arg1 ;
-(BOOL)appsOnly;
-(id)allProcInfos;
-(id)allPIDs;
-(id)allNames;
-(id)allPathNames;
-(id)newestProcInfo;
-(id)newestProcInfoWithName:(id)arg1 ;
-(id)newestProcInfoSatisfyingCondition:(SEL)arg1 forTarget:(id)arg2 ;
-(id)procInfoWithPID:(int)arg1 ;
-(void)finalize;
@end

