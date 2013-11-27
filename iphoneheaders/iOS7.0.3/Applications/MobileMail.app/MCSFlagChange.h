/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileMail/MCSMessageOperation.h>
#import <MobileMail/MCSAllMessagesOperation.h>

@class NSMutableDictionary;

@interface MCSFlagChange : MCSMessageOperation <MCSAllMessagesOperation> {

	NSMutableDictionary* _flagChanges;
	unsigned _isDeletion : 1;

}
-(id)localizedErrorDescriptionForMessageCount:(unsigned)arg1 ;
-(id)localizedErrorTitleForMessageCount:(unsigned)arg1 ;
-(id)localizedShortOperationDescription;
-(BOOL)willMarkRead;
-(BOOL)willMarkUnread;
-(BOOL)willUnflag;
-(BOOL)willFlag;
-(id)applyPendingChangeToObjects:(id)arg1 ;
-(BOOL)commitToMessages:(id)arg1 failures:(id)arg2 newMessages:(id)arg3 ;
-(BOOL)revertOnMessages:(id)arg1 failures:(id)arg2 newMessages:(id)arg3 ;
-(BOOL)isRevertibleWithMessages:(id)arg1 ;
-(id)_applyFlagChange:(id)arg1 toObjects:(id)arg2 ;
-(void)_sortMessages:(id)arg1 intoLibraryMesages:(id)arg2 nonLibraryMessages:(id)arg3 ;
-(BOOL)commitToAllMessagesInStore:(id)arg1 ;
-(BOOL)revertForAllMessagesInStore:(id)arg1 ;
-(BOOL)isRevertibleForAllMessagesInStore:(id)arg1 ;
-(id)initWithFlagsToSet:(id)arg1 flagsToClear:(id)arg2 ;
-(void)setIsDeletion:(BOOL)arg1 ;
-(void)dealloc;
-(id)description;
@end

