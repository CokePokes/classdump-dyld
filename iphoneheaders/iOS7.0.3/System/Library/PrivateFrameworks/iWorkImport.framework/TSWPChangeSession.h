/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/TSPObject.h>

@class TSKAnnotationAuthor, NSDate;

@interface TSWPChangeSession : TSPObject {

	unsigned long _sessionUID;
	TSKAnnotationAuthor* _author;
	NSDate* _date;

}

@property (assign,nonatomic) unsigned long sessionUID; 
@property (nonatomic,retain) TSKAnnotationAuthor * author; 
@property (nonatomic,retain) NSDate * date; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(BOOL)isEqualToSession:(id)arg1 ;
-(unsigned long)sessionUID;
-(void)setSessionUID:(unsigned long)arg1 ;
-(void)dealloc;
-(id)date;
-(void)setDate:(id)arg1 ;
-(void)setAuthor:(id)arg1 ;
-(id)author;
@end

