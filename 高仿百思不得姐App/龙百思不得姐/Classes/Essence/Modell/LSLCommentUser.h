//
//  LSLUser.h
//  龙百思不得姐
//
//  Created by lisilong on 15/9/17.
//  Copyright (c) 2015年 longshao. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LSLCommentUser : NSObject
/** 用户名 */
@property (nonatomic, copy) NSString *username;
/** 性别 */
@property (nonatomic, copy) NSString *sex;
/** 头像 */
@property (nonatomic, copy) NSString *profile_image;
@end
