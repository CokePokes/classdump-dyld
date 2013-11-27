/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIActivity.h>

@interface UISaveToCameraRollActivity : UIActivity {

	int _imageCount;
	int _videoCount;

}

@property (assign,nonatomic) int imageCount;              //@synthesize imageCount=_imageCount - In the implementation block
@property (assign,nonatomic) int videoCount;              //@synthesize videoCount=_videoCount - In the implementation block
-(id)_activityImage;
-(id)activityTitle;
-(id)activityType;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg1 ;
-(int)imageCount;
-(void)setImageCount:(int)arg1 ;
-(int)videoCount;
-(void)setVideoCount:(int)arg1 ;
@end

