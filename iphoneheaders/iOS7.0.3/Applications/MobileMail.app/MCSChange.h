/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileMail/MCSFinalizedObject.h>

@class NSInvocation, NSSet;

@interface MCSChange : NSObject <MCSFinalizedObject> {

	NSInvocation* _invocation;
	unsigned long long _committedNumber;
	unsigned long long _managerNumber;
	unsigned _isFinalized : 1;
	BOOL _isReverseOperation;

}

@property (assign,nonatomic) BOOL isReverseOperation;              //@synthesize isReverseOperation=_isReverseOperation - In the implementation block
@property (nonatomic,readonly) NSSet * messagesSet; 
-(BOOL)isFinalized;
-(id)applyPendingChangeToObjects:(id)arg1 ;
-(id)localizedErrorDescription;
-(id)localizedErrorTitle;
-(id)localizedChangeDescription;
-(int)localizedChangeDescriptionPriority;
-(id)messagesSet;
-(BOOL)isRevertible;
-(id)copyChangeSetForFullPath:(id)arg1 ;
-(unsigned)adjustUnreadCount:(unsigned)arg1 withCriterion:(id)arg2 ;
-(unsigned long long)committedNumber;
-(id)mailboxToRemove;
-(id)modifiedMailboxName;
-(id)mailboxToMoveOrRename;
-(id)mailboxParentForMove;
-(void)setManagerNumber:(unsigned long long)arg1 ;
-(BOOL)isReverseOperation;
-(void)setIsReverseOperation:(BOOL)arg1 ;
-(id)stores;
-(BOOL)revert;
-(void)dealloc;
-(BOOL)commit;
-(id)invocation;
-(void)setInvocation:(id)arg1 ;
-(id)accounts;
-(id)URLStrings;
@end

