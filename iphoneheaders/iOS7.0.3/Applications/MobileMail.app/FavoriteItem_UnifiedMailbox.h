/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileMail/FavoriteItem.h>

@interface FavoriteItem_UnifiedMailbox : FavoriteItem {

	int _mailboxType;

}
-(void)configureCell:(id)arg1 ;
-(id)representingMailboxes;
-(void)wasSelected:(id)arg1 accessoryTapped:(BOOL)arg2 ;
-(id)persistentIdForMigration;
-(int)mailboxType;
-(id)initWithMailboxType:(int)arg1 ;
-(id)defaultIcon;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)isVisible;
-(id)dictionaryRepresentation;
-(id)displayName;
@end

