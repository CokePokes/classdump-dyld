/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUICacheCoding.h>

@class NSURL, NSMutableDictionary;

@interface SKUIArtwork : NSObject <SKUICacheCoding> {

	int _height;
	NSURL* _url;
	int _width;

}

@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) int height;                                             //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) int width;                                              //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                            //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * cacheRepresentation; 
-(CGSize)size;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(int)width;
-(int)height;
-(id)URL;
-(id)initWithCacheRepresentation:(id)arg1 ;
-(id)cacheRepresentation;
-(id)initWithURL:(id)arg1 size:(CGSize)arg2 ;
-(void).cxx_destruct;
-(id)initWithArtworkDictionary:(id)arg1 ;
@end

