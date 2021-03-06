//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary;
@protocol XMJSDataSecurityDelegate;

@interface XMBridgeSupportController : NSObject
{
    NSMutableArray *paths;
    NSMutableArray *xmlDocuments;
    NSMutableDictionary *hash;
    NSMutableDictionary *variadicSelectors;
    NSMutableDictionary *variadicFunctions;
    int parserType;
    unsigned long long appBaseAddress;
    NSMutableDictionary *_structTypesNameMap;
    id <XMJSDataSecurityDelegate> _delegate;
    NSMutableDictionary *_structNameTypesMap;
    NSArray *_backgroundFunCheckArray;
    NSMutableDictionary *_functionMapName;
}

+ (unsigned long long)getAppLoadBaseAddressValue:(id)arg1;
+ (id)sharedController;
@property(retain, nonatomic) NSMutableDictionary *functionMapName; // @synthesize functionMapName=_functionMapName;
@property(retain, nonatomic) NSArray *backgroundFunCheckArray; // @synthesize backgroundFunCheckArray=_backgroundFunCheckArray;
@property(retain, nonatomic) NSMutableDictionary *structNameTypesMap; // @synthesize structNameTypesMap=_structNameTypesMap;
@property(nonatomic) id <XMJSDataSecurityDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableDictionary *structTypesNameMap; // @synthesize structTypesNameMap=_structTypesNameMap;
- (struct OpaqueJSValue *)parserJSContext:(struct OpaqueJSContext *)arg1 propertyName:(id)arg2;
- (void)updateStructNameTypeMapByName:(id)arg1 type:(id)arg2;
- (unsigned long long)getRealCFunctionCallByMapAddress:(unsigned long long)arg1;
- (void)checkBaseAddress;
- (void)setCFuntion:(unsigned long long)arg1 withName:(id)arg2;
- (unsigned long long)cacheCFunctionName:(id)arg1;
- (id)queryName:(id)arg1 type:(id)arg2;
- (id)queryName:(id)arg1;
- (id)keys;
- (id)variadicFunctions;
- (id)variadicSelectors;
- (unsigned long long)bridgeSupportIndexForString:(id)arg1;
- (_Bool)isBridgeSupportLoaded:(id)arg1;
- (_Bool)loadBridgeDataSupport:(id)arg1;
- (_Bool)loadBridgeEncryptedDataSupport:(id)arg1;
- (_Bool)loadBridgeSupport:(id)arg1;
- (void)dealloc;
- (id)init;

@end

