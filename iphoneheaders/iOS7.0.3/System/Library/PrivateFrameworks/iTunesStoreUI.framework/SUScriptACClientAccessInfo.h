/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class SUScriptAppleAccountType, NSMutableDictionary, NSDictionary, NSString;

@interface SUScriptACClientAccessInfo : SUScriptObject {

	SUScriptAppleAccountType* _accountType;
	NSMutableDictionary* _dictionary;

}

@property (readonly) NSDictionary * accessInfoDictionary; 
@property (retain) SUScriptAppleAccountType * accountType; 
@property (readonly) NSString * accessKeyFacebookAppID; 
@property (readonly) NSString * accessKeyFacebookPermissions; 
@property (readonly) NSString * accessKeyPurposeStatement; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(id)_className;
-(void)setAccountType:(id)arg1 ;
-(id)accountType;
-(id)accessInfoDictionary;
-(id)valueForAccessKey:(id)arg1 ;
-(void)setValue:(id)arg1 forAccessKey:(id)arg2 ;
-(id)accessKeyFacebookAppID;
-(id)accessKeyFacebookPermissions;
-(id)accessKeyPurposeStatement;
@end

