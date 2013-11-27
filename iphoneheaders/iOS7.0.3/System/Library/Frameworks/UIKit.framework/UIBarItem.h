/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIAppearance.h>

@class NSString, UIImage;

@interface UIBarItem : NSObject <UIAppearance> {

	BOOL _hasCustomizableInstanceAppearanceModifications;
	BOOL _shouldArchiveUIAppearanceTags;

}

@property (assign,getter=isEnabled,nonatomic,@dynamic) BOOL enabled; 
@property (nonatomic,@dynamic,copy) NSString * title; 
@property (nonatomic,@dynamic,retain) UIImage * image; 
@property (nonatomic,@dynamic,retain) UIImage * landscapeImagePhone; 
@property (assign,nonatomic,@dynamic) UIEdgeInsets imageInsets; 
@property (assign,nonatomic,@dynamic) UIEdgeInsets landscapeImagePhoneInsets; 
@property (assign,nonatomic,@dynamic) int tag; 
@property (assign,setter=_setHasCustomizableInstanceAppearanceModifications:,nonatomic) BOOL _hasCustomizableInstanceAppearanceModifications;              //@synthesize hasCustomizableInstanceAppearanceModifications=_hasCustomizableInstanceAppearanceModifications - In the implementation block
@property (assign,setter=_setShouldArchiveUIAppearanceTags:,nonatomic) BOOL _shouldArchiveUIAppearanceTags;                                                //@synthesize shouldArchiveUIAppearanceTags=_shouldArchiveUIAppearanceTags - In the implementation block
+(id)_appearanceWhenContainedIn:(id)arg1 ;
+(id)appearance;
+(id)_appearanceRecorder;
+(id)appearanceWhenContainedIn:(Class)arg1 ;
+(id)_appearanceRecorderWhenContainedIn:(Class)arg1 ;
+(id)_appearanceBlindViewClasses;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_shouldArchiveUIAppearanceTags;
-(void)_setShouldArchiveUIAppearanceTags:(BOOL)arg1 ;
-(void)setTitleTextAttributes:(id)arg1 forState:(unsigned)arg2 ;
-(id)titleTextAttributesForState:(unsigned)arg1 ;
-(BOOL)_hasCustomizableInstanceAppearanceModifications;
-(void)_setHasCustomizableInstanceAppearanceModifications:(BOOL)arg1 ;
@end

