/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class VGLResourceFactory;

@interface VGLResourceImpl : NSObject {

	VGLResourceFactory* _factory;
	int _resourceType;
	int _count;
	unsigned _token;
	unsigned* _tokens;

}
-(void)dealloc;
-(int)count;
-(id)description;
-(unsigned*)tokens;
-(unsigned)token;
-(void)markUnused;
-(void)deleteResource;
-(id)initWithFactory:(id)arg1 resourceType:(int)arg2 count:(int)arg3 ;
@end

