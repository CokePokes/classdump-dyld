/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString;

@interface MSVideoDerivativeSpecification : NSObject {

	BOOL _useCellular;
	BOOL _powerRequired;
	float _bitRate;
	NSString* _videoType;
	unsigned _mediaAssetType;

}

@property (nonatomic,readonly) BOOL useCellular;                     //@synthesize useCellular=_useCellular - In the implementation block
@property (nonatomic,readonly) BOOL powerRequired;                   //@synthesize powerRequired=_powerRequired - In the implementation block
@property (nonatomic,readonly) float bitRate;                        //@synthesize bitRate=_bitRate - In the implementation block
@property (nonatomic,readonly) NSString * videoType;                 //@synthesize videoType=_videoType - In the implementation block
@property (nonatomic,readonly) unsigned mediaAssetType;              //@synthesize mediaAssetType=_mediaAssetType - In the implementation block
+(id)videoDerivativeSpecificationsWithDictionaryArray:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)useCellular;
-(BOOL)powerRequired;
-(float)bitRate;
-(id)videoType;
-(unsigned)mediaAssetType;
@end

