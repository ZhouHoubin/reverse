//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface BindECardReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *bindToken; // @dynamic bindToken;
@property(retain, nonatomic) NSString *ecardType; // @dynamic ecardType;
@property(nonatomic) unsigned int openScene; // @dynamic openScene;
@property(retain, nonatomic) NSString *reqSerial; // @dynamic reqSerial;
@property(retain, nonatomic) NSString *verifyCode; // @dynamic verifyCode;

@end

