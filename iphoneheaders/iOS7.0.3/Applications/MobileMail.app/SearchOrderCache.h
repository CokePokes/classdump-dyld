/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <MobileMail/MobileMail-Structs.h>
@class NSArray, MFMessageCriterion;

@interface SearchOrderCache : NSObject {

	int _lock;
	int _generation;
	CFDictionaryRef _cache;
	NSArray* _primaryTerms;
	MFMessageCriterion* _dateCriterion;
	MFMessageCriterion* _unreadCriterion;
	MFMessageCriterion* _criterion;
	unsigned _options;

}

@property (nonatomic,copy) NSArray * primaryTerms; 
@property (nonatomic,retain) MFMessageCriterion * criterion;              //@synthesize criterion=_criterion - In the implementation block
@property (assign,nonatomic) unsigned options;                            //@synthesize options=_options - In the implementation block
-(void)setPrimaryTerms:(id)arg1 ;
-(unsigned)sortOrderForMessageInfo:(id)arg1 messageGenerator:(/*^block*/ id)arg2 ;
-(unsigned)sortOrderForMessage:(id)arg1 ;
-(id)diagnosticDescriptionWithMall:(id)arg1 ;
-(unsigned)_cachedSortOrderForKey:(id)arg1 hasTerms:(char*)arg2 generation:(int*)arg3 found:(char*)arg4 ;
-(unsigned)_calculateSortOrderForMessage:(id)arg1 ;
-(BOOL)_cacheSortOrder:(unsigned)arg1 forKey:(id)arg2 generation:(int)arg3 ;
-(id)primaryTerms;
-(id)dateCriterion;
-(id)unreadCriterion;
-(void)dealloc;
-(id)init;
-(void)setOptions:(unsigned)arg1 ;
-(unsigned)options;
-(id)criterion;
-(void)setCriterion:(id)arg1 ;
@end

