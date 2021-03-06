//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSError, NSHTTPURLResponse, NSURLRequest, NSURLResponse, SonicConnection;

@protocol SonicConnectionDelegate <NSObject>
- (void)connection:(SonicConnection *)arg1 redirectedToRequest:(NSURLRequest *)arg2 redirectResponse:(NSURLResponse *)arg3;
- (void)connectionDidCompleteWithoutError:(SonicConnection *)arg1;
- (void)connection:(SonicConnection *)arg1 didCompleteWithError:(NSError *)arg2;
- (void)connection:(SonicConnection *)arg1 didReceiveData:(NSData *)arg2;
- (void)connection:(SonicConnection *)arg1 didReceiveResponse:(NSHTTPURLResponse *)arg2;
@end

