/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSDate;

@interface SAMovieV2ReviewListCell : SADomainObject

@property (nonatomic,copy) NSString * reviewAuthor; 
@property (nonatomic,copy) NSDate * reviewDate; 
@property (nonatomic,copy) NSString * reviewText; 
+(id)reviewListCell;
+(id)reviewListCellWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(id)reviewAuthor;
-(void)setReviewAuthor:(id)arg1 ;
-(id)reviewDate;
-(void)setReviewDate:(id)arg1 ;
-(id)reviewText;
-(void)setReviewText:(id)arg1 ;
@end

