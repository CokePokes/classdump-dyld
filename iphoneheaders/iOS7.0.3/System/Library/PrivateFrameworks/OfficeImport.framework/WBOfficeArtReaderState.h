/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/OABReaderState.h>

@class WBReader;

@interface WBOfficeArtReaderState : OABReaderState {

	WBReader* mReader;
	int mCurrentTextType;

}

@property (assign,nonatomic) WBReader * reader; 
@property (assign,nonatomic) int currentTextType; 
-(void)setReader:(id)arg1 ;
-(id)reader;
-(void)setCurrentTextType:(int)arg1 ;
-(int)currentTextType;
-(id)initWithClient:(Class)arg1 ;
@end

