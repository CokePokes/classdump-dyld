/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class ACAccountStore, NSString;

@interface SUScriptAppleAccountStore : SUScriptObject {

	ACAccountStore* _accountStore;
	NSString* _effectiveBundleID;

}

@property (readonly) NSString * effectiveBundleID; 
@property (readonly) NSString * accessPurposeRead; 
@property (readonly) NSString * accessPurposeReadWrite; 
@property (readonly) NSString * accessPurposeWrite; 
@property (readonly) NSString * accountTypeIdentifierFacebook; 
@property (readonly) NSString * accountTypeIdentifierSinaWeibo; 
@property (readonly) NSString * accountTypeIdentifierTwitter; 
@property (readonly) int renewResultFailed; 
@property (readonly) int renewResultRejected; 
@property (readonly) int renewResultRenewed; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(id)_className;
-(id)_accountStore;
-(id)accountsWithAccountType:(id)arg1 ;
-(id)accountTypeWithIdentifier:(id)arg1 ;
-(id)makeClientAccessInfoWithAccountType:(id)arg1 ;
-(void)renewCredentialsForAccount:(id)arg1 completionHandler:(id)arg2 ;
-(void)requestAccessWithInfo:(id)arg1 completionHandler:(id)arg2 ;
-(id)effectiveBundleID;
-(void)setEffectiveBundleID:(id)arg1 ;
-(id)accessPurposeRead;
-(id)accessPurposeReadWrite;
-(id)accessPurposeWrite;
-(id)accountTypeIdentifierFacebook;
-(id)accountTypeIdentifierSinaWeibo;
-(id)accountTypeIdentifierTwitter;
-(int)renewResultFailed;
-(int)renewResultRejected;
-(int)renewResultRenewed;
@end

