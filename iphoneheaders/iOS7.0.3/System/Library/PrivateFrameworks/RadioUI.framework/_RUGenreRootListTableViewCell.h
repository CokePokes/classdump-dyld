/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <RadioUI/RadioUI-Structs.h>
#import <RadioUI/_RUGenreListTableViewCell.h>

@class UIImageView, MPImageCache, MPImageCacheRequest;

@interface _RUGenreRootListTableViewCell : _RUGenreListTableViewCell {

	UIImageView* _artworkImageView;
	MPImageCache* _imageCache;
	MPImageCacheRequest* _imageCacheRequest;

}

@property (nonatomic,readonly) MPImageCache * imageCache;                            //@synthesize imageCache=_imageCache - In the implementation block
@property (nonatomic,readonly) MPImageCacheRequest * imageCacheRequest;              //@synthesize imageCacheRequest=_imageCacheRequest - In the implementation block
+(CGSize)artworkSize;
-(id)imageCache;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setImageCache:(id)arg1 imageCacheRequest:(id)arg2 ;
-(id)imageCacheRequest;
-(void).cxx_destruct;
@end

