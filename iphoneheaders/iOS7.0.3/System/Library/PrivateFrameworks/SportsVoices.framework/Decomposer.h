/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:45:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SportsVoices.framework/SportsVoices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSArray, NSMutableDictionary, NSBundle;

@interface Decomposer : NSObject {

	NSArray* _availableSoundFiles;
	NSMutableDictionary* _cache;
	int _iterations;
	bool _debugging;
	id _delegate;
	NSBundle* _bundle;

}

@property (assign,nonatomic) id delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithDirectory:(id)arg1 bundle:(id)arg2 ;
-(id)optimalDecompositionOf:(id)arg1 ;
-(id)optimalDecompositionOf:(id)arg1 isSubsetOfWhole:(BOOL)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
@end

