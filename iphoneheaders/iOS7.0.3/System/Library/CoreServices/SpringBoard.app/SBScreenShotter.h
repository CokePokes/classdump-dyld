/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:41:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface SBScreenShotter : NSObject {

	BOOL _writingScreenshot;

}

@property (assign) BOOL writingScreenshot;              //@synthesize writingScreenshot=_writingScreenshot - In the implementation block
+(id)sharedInstance;
-(void)setWritingScreenshot:(BOOL)arg1 ;
-(BOOL)writingScreenshot;
-(void)finishedWritingScreenshot:(id)arg1 didFinishSavingWithError:(id)arg2 context:(void*)arg3 ;
-(void)saveScreenshot:(BOOL)arg1 ;
@end

