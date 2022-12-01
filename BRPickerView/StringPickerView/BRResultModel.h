//
//  BRResultModel.h
//  BRPickerViewDemo
//
//  Created by renbo on 2019/10/2.
//  Copyright © 2019 irenb. All rights reserved.
//
//  最新代码下载地址：https://github.com/91renb/BRPickerView

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BRResultModel : NSObject

/** 索引 */
@property (nonatomic, assign) NSInteger index;
/** key */
@property (nullable, nonatomic, copy) NSString *key;
/** value */
@property (nullable, nonatomic, copy) NSString *value;

/** 父级key（提示：联动时第一级数据，parentKey设置为：@"-1"） */
@property (nullable, nonatomic, copy) NSString *parentKey;
/** 父级value */
@property (nullable, nonatomic, copy) NSString *parentValue;


/// 其它扩展字段
@property (nullable, nonatomic, copy) NSString *remark;
@property (nullable, nonatomic, copy) NSString *end_address_all;
@property (nullable, nonatomic, copy) NSString *start_address_all;
@property (nullable, nonatomic, copy) NSString *fee_type;
@property (nullable, nonatomic, copy) NSString *start_address_id;
@property (nullable, nonatomic, copy) NSString *address_name;
@property (nullable, nonatomic, copy) NSString *consignee_man;
@property (nullable, nonatomic, copy) NSString *consignee_name;
@property (nullable, nonatomic, copy) NSString *consignee_phone;
@property (nullable, nonatomic, copy) NSString *consignor_man;
@property (nullable, nonatomic, copy) NSString *consignor_phone;
@property (nullable, nonatomic, copy) NSString *end_address;
@property (nullable, nonatomic, copy) NSString *end_address_id;
@property (nullable, nonatomic, copy) NSString *end_address_name;
@property (nullable, nonatomic, copy) NSString *end_area;
@property (nullable, nonatomic, copy) NSString *end_gis_lat;
@property (nullable, nonatomic, copy) NSString *end_gis_lng;
@property (nullable, nonatomic, copy) NSString *start_name;
@property (nonatomic, assign) BOOL boolField;
@property (nullable, nonatomic, strong) id idField;
@property (nullable, nonatomic, strong) NSNumber *numberField;

@property (nullable, nonatomic, copy) NSString *ID __attribute__((deprecated("Use 'key' instead")));
@property (nullable, nonatomic, copy) NSString *name __attribute__((deprecated("Use 'value' instead")));

@end

NS_ASSUME_NONNULL_END
