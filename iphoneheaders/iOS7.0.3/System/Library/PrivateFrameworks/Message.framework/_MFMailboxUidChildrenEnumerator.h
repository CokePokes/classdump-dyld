/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSMutableArray;

@interface _MFMailboxUidChildrenEnumerator : NSEnumerator {

	NSMutableArray* _mailboxes;
	unsigned _index;
	BOOL _includeHidden;

}
-(void)dealloc;
-(id)nextObject;
-(id)_initWithMailbox:(id)arg1 includeHiddenChildren:(BOOL)arg2 ;
@end

