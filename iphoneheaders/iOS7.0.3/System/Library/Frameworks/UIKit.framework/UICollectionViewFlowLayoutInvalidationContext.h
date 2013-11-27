/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionViewLayoutInvalidationContext.h>

@interface UICollectionViewFlowLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext {

	struct {
		unsigned invalidateDelegateMetrics : 1;
		unsigned invalidateAttributes : 1;
	}  _flowLayoutInvalidationFlags;

}

@property (assign,nonatomic) BOOL invalidateFlowLayoutDelegateMetrics; 
@property (assign,nonatomic) BOOL invalidateFlowLayoutAttributes; 
-(id)init;
-(void)setInvalidateFlowLayoutAttributes:(BOOL)arg1 ;
-(BOOL)invalidateFlowLayoutAttributes;
-(void)setInvalidateFlowLayoutDelegateMetrics:(BOOL)arg1 ;
-(BOOL)invalidateFlowLayoutDelegateMetrics;
@end

