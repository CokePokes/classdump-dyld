/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVMetadataObjectInternal, NSString;

@interface AVMetadataObject : NSObject {

	AVMetadataObjectInternal* _objectInternal;

}

@property (readonly) SCD_Struct_CM4 time; 
@property (readonly) SCD_Struct_CM4 duration; 
@property (readonly) CGRect bounds; 
@property (readonly) NSString * type; 
+(id)derivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(CGAffineTransform)arg2 isVideoMirrored:(BOOL)arg3 rollAdjustment:(float)arg4 ;
-(id)originalMetadataObject;
-(id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(CGAffineTransform)arg2 isVideoMirrored:(BOOL)arg3 rollAdjustment:(float)arg4 ;
-(void)dealloc;
-(CGRect)bounds;
-(id)init;
-(SCD_Struct_CM4)duration;
-(id)type;
-(id)input;
-(SCD_Struct_CM4)time;
@end

