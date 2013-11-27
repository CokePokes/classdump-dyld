/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/NSCoding.h>

@interface BBThumbnailSizeConstraints : NSObject <NSCoding> {

	int _constraintType;
	float _fixedWidth;
	float _fixedHeight;
	float _fixedDimension;
	float _minAspectRatio;
	float _maxAspectRatio;
	float _thumbnailScale;

}

@property (assign,nonatomic) int constraintType;                //@synthesize constraintType=_constraintType - In the implementation block
@property (assign,nonatomic) float fixedWidth;                  //@synthesize fixedWidth=_fixedWidth - In the implementation block
@property (assign,nonatomic) float fixedHeight;                 //@synthesize fixedHeight=_fixedHeight - In the implementation block
@property (assign,nonatomic) float fixedDimension;              //@synthesize fixedDimension=_fixedDimension - In the implementation block
@property (assign,nonatomic) float minAspectRatio;              //@synthesize minAspectRatio=_minAspectRatio - In the implementation block
@property (assign,nonatomic) float maxAspectRatio;              //@synthesize maxAspectRatio=_maxAspectRatio - In the implementation block
@property (assign,nonatomic) float thumbnailScale;              //@synthesize thumbnailScale=_thumbnailScale - In the implementation block
-(void)setFixedHeight:(float)arg1 ;
-(float)fixedHeight;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)areReasonable;
-(int)constraintType;
-(float)minAspectRatio;
-(float)maxAspectRatio;
-(float)fixedWidth;
-(float)fixedDimension;
-(void)setConstraintType:(int)arg1 ;
-(void)setFixedWidth:(float)arg1 ;
-(void)setFixedDimension:(float)arg1 ;
-(void)setMinAspectRatio:(float)arg1 ;
-(void)setMaxAspectRatio:(float)arg1 ;
-(void)setThumbnailScale:(float)arg1 ;
-(float)thumbnailScale;
@end

