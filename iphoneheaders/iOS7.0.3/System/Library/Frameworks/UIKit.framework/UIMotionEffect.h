/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSCoding.h>

@class _UIMotionAnalyzerSettings;

@interface UIMotionEffect : NSObject <NSCopying, NSCoding> {

	_UIMotionAnalyzerSettings* _preferredMotionAnalyzerSettings;

}
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)keyPathsAndRelativeValuesForViewerOffset:(UIOffset)arg1 ;
-(id)_preferredMotionAnalyzerSettings;
-(id)_keyPathsAndRelativeValuesForPose:(id)arg1 ;
-(void)_setPreferredMotionAnalyzerSettings:(id)arg1 ;
@end

