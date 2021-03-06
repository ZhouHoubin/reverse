//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import "HttpDnsExtensionProtocol-Protocol.h"

@class NSString, NSURL;

@interface UIImageView (HttpDnsExtension) <HttpDnsExtensionProtocol>
- (id)originDomain;
- (void)setOriginDomain:(id)arg1;
@property(retain, nonatomic) NSURL *originalUrl;
- (_Bool)libBackupTried;
- (void)setLibBackupTried:(_Bool)arg1;
- (id)getIpHostFromUrl:(id)arg1;
- (void)notifyFailWithIpUrl:(id)arg1 domain:(id)arg2 error:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

