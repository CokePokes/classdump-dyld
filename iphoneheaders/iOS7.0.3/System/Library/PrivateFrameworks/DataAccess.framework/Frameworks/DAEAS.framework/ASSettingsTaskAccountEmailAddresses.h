/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <DAEAS/ASItem.h>

@class NSMutableSet, NSString, NSArray;

@interface ASSettingsTaskAccountEmailAddresses : ASItem {

	NSMutableSet* _emailAddresses;
	NSString* _primarySMTPAddress;

}

@property (nonatomic,readonly) NSArray * emailAddresses; 
@property (readonly) NSString * primarySMTPAddress;                   //@synthesize primarySMTPAddress=_primarySMTPAddress - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(void)dealloc;
-(id)description;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(void)addEmailAddress:(id)arg1 ;
-(void)setPrimarySMTPAddress:(id)arg1 ;
-(id)primarySMTPAddress;
-(id)emailAddresses;
@end

