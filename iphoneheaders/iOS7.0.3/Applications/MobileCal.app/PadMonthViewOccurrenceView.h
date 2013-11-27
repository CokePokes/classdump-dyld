/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIView.h>

@class CALayer, PadMonthViewOccurrence;

@interface PadMonthViewOccurrenceView : UIView {

	CALayer* _glowLayer;
	CALayer* _contentLayer;
	PadMonthViewOccurrence* _occurrence;

}

@property (nonatomic,retain) PadMonthViewOccurrence * occurrence;              //@synthesize occurrence=_occurrence - In the implementation block
-(id)occurrence;
-(void)setOccurrence:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setNeedsDisplay;
-(void)setFrame:(CGRect)arg1 ;
-(void)displayLayer:(id)arg1 ;
-(void).cxx_destruct;
@end

