/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class VGLResourceFactory, NSMapTable;

@interface VGLProgramFactory : NSObject {

	VGLResourceFactory* _factory;
	NSMapTable* _programCache;

}

@property (assign,nonatomic) VGLResourceFactory * factory;              //@synthesize factory=_factory - In the implementation block
-(void)dealloc;
-(id)programWithClass:(Class)arg1 ;
-(id)initWithResourceFactory:(id)arg1 ;
-(id)factory;
-(void)setFactory:(id)arg1 ;
@end

