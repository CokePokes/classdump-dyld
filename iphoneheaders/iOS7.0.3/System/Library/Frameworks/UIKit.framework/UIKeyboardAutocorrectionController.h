/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class TIKeyboardCandidate;

@interface UIKeyboardAutocorrectionController : NSObject {

	TIKeyboardCandidate* _autocorrection;
	BOOL _needsAutocorrection;
	BOOL _deferredAutocorrection;
	BOOL _requestedAutocorrection;

}

@property (nonatomic,copy) TIKeyboardCandidate * autocorrection; 
@property (assign,nonatomic) BOOL needsAutocorrection;                        //@synthesize needsAutocorrection=_needsAutocorrection - In the implementation block
@property (assign,nonatomic) BOOL deferredAutocorrection;                     //@synthesize deferredAutocorrection=_deferredAutocorrection - In the implementation block
@property (assign,nonatomic) BOOL requestedAutocorrection;                    //@synthesize requestedAutocorrection=_requestedAutocorrection - In the implementation block
-(void)dealloc;
-(id)autocorrection;
-(BOOL)hasAutocorrection;
-(void)setAutocorrection:(id)arg1 ;
-(void)setNeedsAutocorrection;
-(BOOL)needsAutocorrection;
-(BOOL)requestedAutocorrection;
-(void)requestAutocorrectionWithExecutionContext:(id)arg1 ;
-(void)setNeedsAutocorrection:(BOOL)arg1 ;
-(BOOL)deferredAutocorrection;
-(void)setDeferredAutocorrection:(BOOL)arg1 ;
-(void)setRequestedAutocorrection:(BOOL)arg1 ;
@end

