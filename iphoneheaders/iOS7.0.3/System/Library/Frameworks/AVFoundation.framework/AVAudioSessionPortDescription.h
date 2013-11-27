/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <libAVFAudio.dylib/libAVFAudio.dylib-Structs.h>
@class NSString, NSArray, AVAudioSessionDataSourceDescription;

@interface AVAudioSessionPortDescription : NSObject {

	void* _impl;

}

@property (readonly) NSString * portType; 
@property (readonly) NSString * portName; 
@property (readonly) NSString * UID; 
@property (readonly) NSArray * channels; 
@property (readonly) NSArray * dataSources; 
@property (readonly) AVAudioSessionDataSourceDescription * selectedDataSource; 
@property (readonly) AVAudioSessionDataSourceDescription * preferredDataSource; 
+(BOOL)privateMatchesInputs:(id)arg1 toRawInputs:(id)arg2 ;
+(id)privateCreateOrConfigureArray:(id)arg1 withRawPortArray:(id)arg2 ;
+(id)privateCreateOrConfigure:(id)arg1 withRawPortDescription:(id)arg2 ;
-(BOOL)setPreferredDataSource:(id)arg1 error:(id*)arg2 ;
-(id)privateGetID;
-(PortDescriptionImpl*)privateGetImplementation;
-(BOOL)isEqualToPort:(id)arg1 ;
-(id)UID;
-(BOOL)privateMatchesRawDescription:(id)arg1 ;
-(id)initWithRawPortDescription:(id)arg1 ;
-(void)configureChannelsAndDataSources:(id)arg1 ;
-(BOOL)isHeadphones;
-(id)preferredDataSource;
-(id)channels;
-(id)selectedDataSource;
-(id)dataSources;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)portName;
-(id)portType;
@end

