/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileMail/MCSMessageOperation.h>

@class MFMailboxUid, NSMutableDictionary, MCSFlagChange;

@interface MCSTransfer : MCSMessageOperation {

	MFMailboxUid* _destination;
	int _specialType;
	NSMutableDictionary* _originalLocations;
	MCSFlagChange* _equivalentFlagChange;
	unsigned _markAsRead : 1;
	unsigned _deleteIfSame : 1;
	unsigned _isDeletion : 1;

}

@property (readonly) MFMailboxUid * destination;              //@synthesize destination=_destination - In the implementation block
-(id)initWithDestination:(id)arg1 markAsRead:(BOOL)arg2 ;
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
-(void)setIsDeletion:(BOOL)arg1 ;
-(id)initWithSpecialDestination:(int)arg1 markAsRead:(BOOL)arg2 deleteIfSame:(BOOL)arg3 ;
-(void)dealloc;
-(id)description;
-(id)destination;
@end

