/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface TIKeyboardBehaviorState : NSObject {

	BOOL hasInput;
	BOOL hasCandidates;
	BOOL hasCandidateSelected;
	BOOL hasNextPage;
	BOOL showsExtendedList;
	BOOL followsZhuyin;
	BOOL spaceConfirmation;
	BOOL _hasAutocorrection;
	BOOL _showsCandidatesInLayout;

}

@property (assign,nonatomic) BOOL hasInput; 
@property (assign,nonatomic) BOOL hasAutocorrection;                    //@synthesize hasAutocorrection=_hasAutocorrection - In the implementation block
@property (assign,nonatomic) BOOL hasCandidates; 
@property (assign,nonatomic) BOOL hasCandidateSelected; 
@property (assign,nonatomic) BOOL hasNextPage; 
@property (assign,nonatomic) BOOL showsExtendedList; 
@property (assign,nonatomic) BOOL followsZhuyin; 
@property (assign,nonatomic) BOOL spaceConfirmation; 
@property (assign,nonatomic) BOOL showsCandidatesInLayout;              //@synthesize showsCandidatesInLayout=_showsCandidatesInLayout - In the implementation block
-(BOOL)hasInput;
-(BOOL)hasCandidates;
-(BOOL)hasCandidateSelected;
-(BOOL)hasNextPage;
-(BOOL)hasAutocorrection;
-(void)setHasInput:(BOOL)arg1 ;
-(void)setHasAutocorrection:(BOOL)arg1 ;
-(void)setHasCandidates:(BOOL)arg1 ;
-(void)setHasCandidateSelected:(BOOL)arg1 ;
-(void)setHasNextPage:(BOOL)arg1 ;
-(void)setShowsExtendedList:(BOOL)arg1 ;
-(void)setShowsCandidatesInLayout:(BOOL)arg1 ;
-(void)setFollowsZhuyin:(BOOL)arg1 ;
-(void)setSpaceConfirmation:(BOOL)arg1 ;
-(BOOL)showsExtendedList;
-(BOOL)followsZhuyin;
-(BOOL)spaceConfirmation;
-(BOOL)showsCandidatesInLayout;
@end

