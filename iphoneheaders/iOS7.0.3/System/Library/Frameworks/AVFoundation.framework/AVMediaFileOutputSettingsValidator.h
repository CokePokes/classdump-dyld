/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AVFoundation/AVOutputSettingsValidation.h>

@class AVMediaFileType;

@interface AVMediaFileOutputSettingsValidator : NSObject <AVOutputSettingsValidation> {

	AVMediaFileType* _fileType;

}

@property (nonatomic,readonly) AVMediaFileType * fileType; 
+(id)mediaFileOutputSettingsValidatorForFileType:(id)arg1 ;
+(void)initialize;
-(id)initWithFileType:(id)arg1 ;
-(BOOL)validateAudioOutputSettings:(id)arg1 reason:(id*)arg2 ;
-(BOOL)validateVideoOutputSettings:(id)arg1 reason:(id*)arg2 ;
-(void)dealloc;
-(id)init;
-(id)fileType;
@end

