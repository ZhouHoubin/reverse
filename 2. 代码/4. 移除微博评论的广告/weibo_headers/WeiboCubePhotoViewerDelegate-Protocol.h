//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol WeiboCubePhotoViewerProtocol;

@protocol WeiboCubePhotoViewerDelegate <NSObject>
- (void)photoViewerDidFinishLoadImage:(id <WeiboCubePhotoViewerProtocol>)arg1;
- (void)photoViewerDidDismiss:(id <WeiboCubePhotoViewerProtocol>)arg1;
- (void)photoViewer:(id <WeiboCubePhotoViewerProtocol>)arg1 repostImageAtIndex:(long long)arg2;
@end

