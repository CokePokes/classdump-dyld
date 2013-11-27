/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UICollectionViewLayoutInvalidationContext.h>

@interface PUSectionedGridLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext {

	BOOL _invalidateForVerticalScroll;
	BOOL _sectioningIsPreserved;
	BOOL _samplingIsPreserved;
	BOOL _invalidationHasBeenRedispatched;

}

@property (assign,nonatomic) BOOL invalidateForVerticalScroll;                  //@synthesize invalidateForVerticalScroll=_invalidateForVerticalScroll - In the implementation block
@property (assign,nonatomic) BOOL sectioningIsPreserved;                        //@synthesize sectioningIsPreserved=_sectioningIsPreserved - In the implementation block
@property (assign,nonatomic) BOOL samplingIsPreserved;                          //@synthesize samplingIsPreserved=_samplingIsPreserved - In the implementation block
@property (assign,nonatomic) BOOL invalidationHasBeenRedispatched;              //@synthesize invalidationHasBeenRedispatched=_invalidationHasBeenRedispatched - In the implementation block
-(id)description;
-(BOOL)invalidateForVerticalScroll;
-(void)setInvalidateForVerticalScroll:(BOOL)arg1 ;
-(BOOL)sectioningIsPreserved;
-(void)setSectioningIsPreserved:(BOOL)arg1 ;
-(BOOL)samplingIsPreserved;
-(void)setSamplingIsPreserved:(BOOL)arg1 ;
-(BOOL)invalidationHasBeenRedispatched;
-(void)setInvalidationHasBeenRedispatched:(BOOL)arg1 ;
@end

