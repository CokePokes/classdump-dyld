/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:54:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/BackupAgent2
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <BackupAgent2/MBFileHandleFactory.h>

@interface MBProtectionClassFileHandleFactory : NSObject <MBFileHandleFactory> {

	int _protectionClass;

}
+(id)factoryWithProtectionClass:(int)arg1 ;
-(id)fileHandleWithPath:(id)arg1 flags:(int)arg2 mode:(unsigned short)arg3 error:(id*)arg4 ;
-(id)initWithProtectionClass:(int)arg1 ;
@end

