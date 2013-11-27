/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, SALocalSearchBusiness2;

@interface SAMovieMovieTheaterShowtimes : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * movieShowtimes; 
@property (nonatomic,copy) NSArray * showtimes; 
@property (nonatomic,retain) SALocalSearchBusiness2 * theater; 
+(id)movieTheaterShowtimes;
+(id)movieTheaterShowtimesWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(id)movieShowtimes;
-(void)setMovieShowtimes:(id)arg1 ;
-(id)showtimes;
-(void)setShowtimes:(id)arg1 ;
-(id)theater;
-(void)setTheater:(id)arg1 ;
@end

