/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSCountedSet, NSMutableDictionary;

@interface DownloadApplicationDictionary : NSObject {

	NSCountedSet* _anonymousClients;
	NSMutableDictionary* _dictionary;

}

@property (nonatomic,readonly) int count; 
-(void)enumerateUsingBlock:(/*^block*/ id)arg1 ;
-(void)addAnonymousClientIdentifier:(long long)arg1 ;
-(void)addEffectiveClientIdentifier:(long long)arg1 forBundleIdentifier:(id)arg2 ;
-(void)addEntryForPipelineDownload:(id)arg1 database:(id)arg2 ;
-(BOOL)containsEffectiveClientIdentifier:(long long)arg1 ;
-(long long)effectiveClientIdentifierForBundleIdentifier:(id)arg1 ;
-(void)removeAnonymousClientIdentifier:(long long)arg1 ;
-(void)removeEffectiveClientIdentifierForBundleIdentifier:(id)arg1 ;
-(void)dealloc;
-(int)count;
-(id)init;
-(void)addEntriesFromDictionary:(id)arg1 ;
@end

