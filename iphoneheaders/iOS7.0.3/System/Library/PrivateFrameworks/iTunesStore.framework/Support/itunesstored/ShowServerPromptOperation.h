/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStore/ISOperation.h>

@class NSString;

@interface ShowServerPromptOperation : ISOperation {

	NSString* _promptIdentifier;

}

@property (readonly) NSString * promptIdentifier; 
-(id)initWithPromptIdentifier:(id)arg1 ;
-(BOOL)_promptNeedsDisplay;
-(id)_newStoreURLOperation:(id*)arg1 ;
-(BOOL)_automaticDownloadsPromptNeedsDisplay;
-(id)promptIdentifier;
-(void)dealloc;
-(id)init;
-(void)run;
@end

