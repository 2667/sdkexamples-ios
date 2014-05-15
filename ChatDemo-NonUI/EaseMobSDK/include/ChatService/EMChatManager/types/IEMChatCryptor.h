/*!
 @header IEMChatCryptor.h
 @abstract 为消息提供基础加解密服务的协议
 @author EaseMob Inc.
 @version 1.00 2014/01/01 Creation (1.00)
 */

#import <Foundation/Foundation.h>

/*!
 @protocol
 @abstract 本协议主要用于对聊天提供基础的加密, 解密服务
 @discussion
 */
@protocol IEMChatCryptor <NSObject>

@required

/*!
 @method
 @abstract 对NSData进行加密
 @discussion
 @param data 要加密的数据
 @result 加密后的数据
 */
- (NSData *)encryptData:(NSData *)data;

/*!
 @method
 @abstract 对NSData进行解密
 @discussion
 @param data 要解密的数据
 @result 解密后的数据
 */
- (NSData *)decryptData:(NSData *)data;

/*!
 @method
 @abstract 对文本进行加密
 @discussion
 @param string 要加密的文本
 @result 加密后的文本
 */
- (NSString *)encryptString:(NSString *)string;

/*!
 @method
 @abstract 对文本进行解密
 @discussion
 @param string 要解密的文本
 @result 解密后的文本
 */
- (NSString *)decryptString:(NSString *)string;

@end
