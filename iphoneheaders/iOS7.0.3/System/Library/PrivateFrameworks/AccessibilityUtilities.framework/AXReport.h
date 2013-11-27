/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString, NSMutableDictionary, NSMutableArray;

@interface AXReport : NSObject {

	NSString* _baseURL;
	NSString* _route;
	NSString* _action;
	NSMutableDictionary* _simpleParameters;
	NSMutableArray* _fileParameters;

}

@property (nonatomic,retain) NSString * baseURL;                                  //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,retain) NSString * route;                                    //@synthesize route=_route - In the implementation block
@property (nonatomic,retain) NSString * action;                                   //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * simpleParameters;              //@synthesize simpleParameters=_simpleParameters - In the implementation block
@property (nonatomic,retain) NSMutableArray * fileParameters;                     //@synthesize fileParameters=_fileParameters - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)action;
-(void)setAction:(id)arg1 ;
-(id)baseURL;
-(void)setSimpleParameters:(id)arg1 ;
-(void)setFileParameters:(id)arg1 ;
-(id)fileParameters;
-(id)simpleParameters;
-(void)addFile:(id)arg1 parameterName:(id)arg2 contentType:(id)arg3 contentEncoding:(id)arg4 data:(id)arg5 ;
-(void)addSimpleParameter:(id)arg1 forName:(id)arg2 ;
-(id)renderPOSTBody;
-(void)setBaseURL:(id)arg1 ;
-(void)setRoute:(id)arg1 ;
-(id)route;
@end

