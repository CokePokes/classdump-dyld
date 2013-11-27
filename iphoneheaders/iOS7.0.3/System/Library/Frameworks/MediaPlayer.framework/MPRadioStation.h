/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <CoreFoundation/NSSecureCoding.h>
#import <CoreFoundation/NSCopying.h>

@class MPImageCache, RadioStation, NSString;

@interface MPRadioStation : NSObject <NSSecureCoding, NSCopying> {

	MPImageCache* _imageCache;
	RadioStation* _station;

}

@property (nonatomic,readonly) long long uniqueIdentifier; 
@property (nonatomic,readonly) NSString * localizedName; 
@property (nonatomic,readonly) NSString * localizedDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithStation:(id)arg1 ;
-(id)_station;
-(void)fetchArtworkWithCompletionBlock:(/*^block*/ id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)localizedDescription;
-(id)localizedName;
-(long long)uniqueIdentifier;
-(void).cxx_destruct;
@end

