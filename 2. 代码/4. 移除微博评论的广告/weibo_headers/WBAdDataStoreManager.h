//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WBAdDataStoreManager : NSObject
{
}

- (id)allOutdateDatasForDays:(long long)arg1;
- (_Bool)cleanSourceInfoForDatas:(id)arg1;
- (_Bool)disableAllDatas;
- (_Bool)deleteAllDatas;
- (_Bool)deleteDatas:(id)arg1;
- (id)outdateDatas;
- (id)sendBackDatas;
- (_Bool)downloadFailureForData:(id)arg1;
- (_Bool)downloadSuccessForData:(id)arg1;
- (id)p_DataModelForResultSet:(id)arg1;
- (id)p_queryDatasForSql:(id)arg1;
- (id)dataForDownload;
- (_Bool)sentBackSuccessForDatas:(id)arg1;
- (id)availableLocalModelsForAdid:(id)arg1;
- (id)localModelsForAdid:(id)arg1;
- (id)availableLocalModelsForID:(id)arg1;
- (id)localModelsForID:(id)arg1;
- (_Bool)storePVByDataModel:(id)arg1;
- (_Bool)storeDatas:(id)arg1 withDisable:(_Bool)arg2;
- (id)getAllModelsOrderByPosid;

@end

