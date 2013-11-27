/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol MessageSelectionDataSource <NSObject>
@required
-(unsigned)localMessageCount;
-(BOOL)allSourcesThreadMessages;
-(unsigned)flattenedIndexOfMessage:(id)arg1;
-(id)messageToSelectFromMessage:(id)arg1 withDirection:(int)arg2;
-(id)messageForMessageInfo:(id)arg1;
-(/*^block*/ id)comparatorForMallContainingMessage:(id)arg1;
-(int)lastChangeDirection;
-(unsigned)flattenedIndexOfWhereMessageShouldGo:(id)arg1;
-(id)messageAtFlattenedIndex:(unsigned)arg1;
-(id)conversationContainingMessage:(id)arg1;
-(/*^block*/ id)comparator;
@end

