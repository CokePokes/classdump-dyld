/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSIndexPath, NSString;

@interface _UICollectionViewItemKey : NSObject <NSCopying> {

	NSIndexPath* _indexPath;
	NSString* _identifier;
	BOOL _isClone;
	unsigned _type;

}

@property (nonatomic,readonly) unsigned type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPath;              //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL isClone;                         //@synthesize isClone=_isClone - In the implementation block
+(id)collectionItemKeyForCellWithIndexPath:(id)arg1 ;
+(id)collectionItemKeyForSupplementaryViewOfKind:(id)arg1 andIndexPath:(id)arg2 ;
+(id)collectionItemKeyForDecorationViewOfKind:(id)arg1 andIndexPath:(id)arg2 ;
+(id)collectionItemKeyForLayoutAttributes:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned)type;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)indexPath;
-(id)identifier;
-(id)initWithType:(unsigned)arg1 indexPath:(id)arg2 identifier:(id)arg3 ;
-(id)initWithType:(unsigned)arg1 indexPath:(id)arg2 identifier:(id)arg3 clone:(BOOL)arg4 ;
-(BOOL)isClone;
-(id)copyAsClone:(BOOL)arg1 ;
@end

