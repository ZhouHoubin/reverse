//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIButton, UIImageView, UILabel, UILongPressGestureRecognizer, UITapGestureRecognizer, UIView, XMLittleYaLOTView;

@interface XMLittleYa : NSObject
{
    _Bool _canReceiveNotes;
    unsigned long long _needShowStatus;
    XMLittleYaLOTView *_littleYaView;
    XMLittleYaLOTView *_noteView;
    NSString *_filePath;
    NSString *_noteFilePath;
    NSString *_msgUrl;
    NSString *_msgContent;
    CDUnknownBlockType _pressedBlock;
    CDUnknownBlockType _littleYaPressedBlock;
    UIView *_littleYaTapView;
    UIImageView *_staticNoteView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UITapGestureRecognizer *_littleYatapGestureRecognizer;
    UITapGestureRecognizer *_noteTapGestureRecognizer;
    UILabel *_msgLB;
    UIImageView *_msgBgView;
    UIButton *_msgBtn;
}

@property(retain, nonatomic) UIButton *msgBtn; // @synthesize msgBtn=_msgBtn;
@property(retain, nonatomic) UIImageView *msgBgView; // @synthesize msgBgView=_msgBgView;
@property(retain, nonatomic) UILabel *msgLB; // @synthesize msgLB=_msgLB;
@property(retain, nonatomic) UITapGestureRecognizer *noteTapGestureRecognizer; // @synthesize noteTapGestureRecognizer=_noteTapGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *littleYatapGestureRecognizer; // @synthesize littleYatapGestureRecognizer=_littleYatapGestureRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) UIImageView *staticNoteView; // @synthesize staticNoteView=_staticNoteView;
@property(retain, nonatomic) UIView *littleYaTapView; // @synthesize littleYaTapView=_littleYaTapView;
@property(copy, nonatomic) CDUnknownBlockType littleYaPressedBlock; // @synthesize littleYaPressedBlock=_littleYaPressedBlock;
@property(copy, nonatomic) CDUnknownBlockType pressedBlock; // @synthesize pressedBlock=_pressedBlock;
@property(nonatomic) _Bool canReceiveNotes; // @synthesize canReceiveNotes=_canReceiveNotes;
@property(retain, nonatomic) NSString *msgContent; // @synthesize msgContent=_msgContent;
@property(retain, nonatomic) NSString *msgUrl; // @synthesize msgUrl=_msgUrl;
@property(retain, nonatomic) NSString *noteFilePath; // @synthesize noteFilePath=_noteFilePath;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) XMLittleYaLOTView *noteView; // @synthesize noteView=_noteView;
@property(retain, nonatomic) XMLittleYaLOTView *littleYaView; // @synthesize littleYaView=_littleYaView;
@property(nonatomic) unsigned long long needShowStatus; // @synthesize needShowStatus=_needShowStatus;
- (void).cxx_destruct;
- (void)littleYaOnPressed:(id)arg1;
- (void)p_onPressed:(id)arg1;
- (void)hiddenLittleYaMsgBgView;
- (void)hideNoteView;
- (void)hideLittleYaView;
- (void)showInView:(id)arg1;
- (void)onMsgBtnClick;
- (void)p_customViews;
- (void)showNoteViewUnpackAnimation;
- (void)showNoteViewPackAnimation;

@end

