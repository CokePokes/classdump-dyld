/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString;

@interface TSCH3DSelectionPathRenderInfo : NSObject {

	NSString* mString;
	unsigned mStyleIndex;
	float mRotation;

}

@property (nonatomic,readonly) NSString * string; 
@property (nonatomic,readonly) unsigned styleIndex; 
@property (nonatomic,readonly) float rotation; 
+(id)renderInfoWithString:(id)arg1 styleIndex:(unsigned)arg2 rotation:(float)arg3 ;
-(id)initWithString:(id)arg1 styleIndex:(unsigned)arg2 rotation:(float)arg3 ;
-(void)dealloc;
-(id)string;
-(float)rotation;
-(unsigned)styleIndex;
@end

