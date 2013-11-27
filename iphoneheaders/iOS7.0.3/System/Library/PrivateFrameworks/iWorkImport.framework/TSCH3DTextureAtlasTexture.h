/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableArray, TSCH3DTextureAtlasTextureResource;

@interface TSCH3DTextureAtlasTexture : NSObject {

	tvec2<int> mSize;
	float mSamples;
	NSMutableArray* mLabels;
	vector<glm::detail::tvec2<int>, std::__1::allocator<glm::detail::tvec2<int> > >* mPositions;
	int mCurrentxpos;
	int mCurrentypos;
	int mCurrentheight;
	TSCH3DTextureAtlasTextureResource* mResource;

}

@property (nonatomic,readonly) tvec2<int> size; 
-(tvec2<int>)addLabel:(id)arg1 ;
-(void)p_invalidateResource;
-(id)getTextureDataBuffer;
-(void)dealloc;
-(tvec2<int>)size;
-(id)initWithSize:(tvec2<int>)arg1 ;
-(id).cxx_construct;
-(id)resource;
-(void).cxx_destruct;
@end

