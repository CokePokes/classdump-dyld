/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSDictionary, NSArray;

@interface SUScriptFacebookLikeStatus : SUScriptObject {

	NSDictionary* _dictionary;

}

@property (readonly) unsigned friendLikeCount; 
@property (readonly) NSArray * friends; 
@property (readonly) unsigned globalLikeCount; 
@property (getter=isLikedByMe,readonly) id likedByMe; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)friends;
-(void)dealloc;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(id)_className;
-(id)initWithLikeStatusDictionary:(id)arg1 ;
-(unsigned)friendLikeCount;
-(unsigned)globalLikeCount;
-(id)isLikedByMe;
@end

