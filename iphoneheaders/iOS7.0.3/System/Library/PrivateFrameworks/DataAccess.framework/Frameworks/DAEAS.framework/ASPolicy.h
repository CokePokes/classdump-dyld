/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <DAEAS/ASItem.h>

@class NSString;

@interface ASPolicy : ASItem {

	NSString* _type;
	NSString* _key;
	NSString* _status;

}
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(void)_setKey:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)type;
-(id)key;
-(int)status;
-(void)_setType:(id)arg1 ;
-(id)perDomainDictsForPolicy;
-(void)_setStatus:(id)arg1 ;
@end

