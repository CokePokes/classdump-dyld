/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UITableViewCell.h>

@class SKUICircleProgressIndicator, UIImageView, UILabel, NSAttributedString, MPImageCache, MPImageCacheRequest;

@interface _RUSearchStationTableViewCell : UITableViewCell {

	SKUICircleProgressIndicator* _activityIndicator;
	UIImageView* _imageView;
	UILabel* _subtitleLabel;
	UILabel* _textLabel;
	BOOL _showActivityIndicator;
	NSAttributedString* _attributedStationDescription;
	NSAttributedString* _attributedStationName;
	MPImageCache* _imageCache;
	MPImageCacheRequest* _stationImageRequest;

}

@property (nonatomic,copy) NSAttributedString * attributedStationDescription;              //@synthesize attributedStationDescription=_attributedStationDescription - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedStationName;                     //@synthesize attributedStationName=_attributedStationName - In the implementation block
@property (nonatomic,retain) MPImageCache * imageCache;                                    //@synthesize imageCache=_imageCache - In the implementation block
@property (nonatomic,retain) MPImageCacheRequest * stationImageRequest;                    //@synthesize stationImageRequest=_stationImageRequest - In the implementation block
@property (assign,nonatomic) BOOL showActivityIndicator;                                   //@synthesize showActivityIndicator=_showActivityIndicator - In the implementation block
-(id)imageCache;
-(id)stationName;
-(id)stationDescription;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setShowActivityIndicator:(BOOL)arg1 ;
-(BOOL)showActivityIndicator;
-(void)layoutSubviewsPad;
-(void)layoutSubviewsPhone;
-(void)setAttributedStationName:(id)arg1 ;
-(void)setAttributedStationDescription:(id)arg1 ;
-(void)setStationImageRequest:(id)arg1 ;
-(id)stationImage;
-(id)attributedStationDescription;
-(id)attributedStationName;
-(id)stationImageRequest;
-(void).cxx_destruct;
-(void)setImageCache:(id)arg1 ;
@end

