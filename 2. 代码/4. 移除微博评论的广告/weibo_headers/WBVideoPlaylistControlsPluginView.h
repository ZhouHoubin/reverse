//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBVideoExternalPluginBaseView.h"

@class UIButton, UIImageView;

@interface WBVideoPlaylistControlsPluginView : WBVideoExternalPluginBaseView
{
    UIButton *_muteButton;
    UIImageView *_playButton;
}

+ (unsigned long long)defaultPresentationStateVisibilityOptions;
+ (unsigned long long)defaultPlaybackStateVisibilityOptions;
@property(retain, nonatomic) UIImageView *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) UIButton *muteButton; // @synthesize muteButton=_muteButton;
- (void).cxx_destruct;
- (void)cacheVideoCardPlayBackMuteState:(_Bool)arg1;
- (void)inlinePlaybackPlaysAudioDidChangeNotification:(id)arg1;
- (void)muteButtonPressed:(id)arg1;
- (void)updateMuteButtonState;
- (void)prepareForDisplay;
- (void)setmuteButtonHiddenStatus;
- (void)videoPlayerController:(id)arg1 didExitFullscreenAnimated:(_Bool)arg2;
- (void)videoPlayerController:(id)arg1 willEnterFullscreenAnimated:(_Bool)arg2;
- (void)videoPlayerController:(id)arg1 willPerformPauseWithReason:(long long)arg2;
- (void)videoPlayerController:(id)arg1 didTransitionFromPlaybackState:(long long)arg2 toPlaybackState:(long long)arg3;
- (void)updateDisplay;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

