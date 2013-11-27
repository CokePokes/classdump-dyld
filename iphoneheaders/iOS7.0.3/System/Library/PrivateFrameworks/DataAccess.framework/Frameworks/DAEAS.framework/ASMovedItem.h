/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <DAEAS/ASItem.h>

@class NSString, NSNumber;

@interface ASMovedItem : ASItem {

	NSString* _srcMsgId;
	NSNumber* _status;
	NSString* _dstMsgId;

}
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(void)dealloc;
-(id)status;
-(void)setStatus:(id)arg1 ;
-(id)srcMsgId;
-(id)dstMsgId;
-(void)setDstMsgId:(id)arg1 ;
-(void)setSrcMsgId:(id)arg1 ;
@end

