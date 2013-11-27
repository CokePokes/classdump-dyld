/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface IMHandleRegistrar : NSObject {

	id _internal;

}

@property (assign,nonatomic) int nameStyle; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)_dumpOutAllIMHandlesForAccount:(id)arg1 ;
-(void)clearSiblingCacheForIMHandle:(id)arg1 ;
-(void)registerIMHandle:(id)arg1 ;
-(void)unregisterIMHandle:(id)arg1 ;
-(void)_clearAccountSiblingsForGUID:(id)arg1 handle:(id)arg2 ;
-(void)_clearChatSiblingsForGUID:(id)arg1 handle:(id)arg2 ;
-(BOOL)_buildingChatSiblings;
-(int)nameStyle;
-(id)_existingAccountSiblingsForHandle:(id)arg1 ;
-(id)_accountSiblingsForHandle:(id)arg1 ;
-(id)_existingChatSiblingsForHandle:(id)arg1 ;
-(id)_chatSiblingsForHandle:(id)arg1 ;
-(id)siblingsForIMHandle:(id)arg1 ;
-(id)allIMHandles;
-(void)_accountsChanged:(id)arg1 ;
-(void)_rebuildUniqueNameMapWithStyleChange:(BOOL)arg1 ;
-(void)_emptySiblingCacheForIMHandleGUID:(id)arg1 ;
-(void)_buildSiblingsForIMHandle:(id)arg1 ;
-(void)_clearSiblingsCacheForIMHandle:(id)arg1 rebuildAfter:(BOOL)arg2 ;
-(void)clearNameReservationsForObject:(id)arg1 ;
-(void)rebuildUniqueNameMap;
-(id)candidateUniqueNamesForIMHandle:(id)arg1 ;
-(void)reassessIMHandleForUniqueName:(id)arg1 rebuild:(BOOL)arg2 ;
-(void)setNameStyle:(int)arg1 ;
-(void)reassessIMHandleForUniqueName:(id)arg1 ;
-(void)imHandleInfoChanged:(id)arg1 ;
-(void)_dumpOutAllIMHandles;
-(void)_addressBookChanged;
@end

