/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:39:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/iPodOut.app/iPodOut
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIViewController.h>
#import <iPodOut/iPodOutViewController.h>

@class VideoTestView;

@interface VideoTestViewController : UIViewController <iPodOutViewController> {

	VideoTestView* testView;

}

@property (nonatomic,retain) VideoTestView * testView; 
-(void)writeCurrentPositionIntoNavigationPathComponent:(id)arg1 ;
-(int)restoreWithPathComponent:(id)arg1 ;
-(void)downAction:(BOOL)arg1 ;
-(void)upAction:(BOOL)arg1 ;
-(void)selectAction:(BOOL)arg1 ;
-(void)leftAction:(BOOL)arg1 ;
-(void)rightAction:(BOOL)arg1 ;
-(void)clockwiseRotationAction:(BOOL)arg1 ;
-(void)counterClockwiseRotationAction:(BOOL)arg1 ;
-(id)viewControllerForCurrentRow;
-(id)testView;
-(void)setTestView:(id)arg1 ;
-(id)init;
-(void)loadView;
-(void).cxx_destruct;
@end

