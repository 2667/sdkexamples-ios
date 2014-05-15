/*!
 @header EMDeviceManagerAudioDelegate.h
 @abstract DeviceManager音频相关的异步方法, 操作完成后的回调
 @author EaseMob Inc.
 @version 1.00 2014/01/01 Creation (1.00)
 */
#import <Foundation/Foundation.h>
#import <AudioToolbox/AudioToolbox.h>
#import "EMDeviceManagerDelegateBase.h"

@class EMError;

/*!
 @protocol
 @abstract DeviceManager音频相关的异步方法, 操作完成后的回调
 @discussion
 */
@protocol EMDeviceManagerAudioDelegate <EMDeviceManagerDelegateBase>

@optional
/*!
 @method
 @abstract 使用 asyncPlayVibration | asyncPlayNewMessageSound 方法完成时的回调
 @param soundId 正在播放的音频ID
 @discussion
 @result
 */
- (void)didPlaySystemSound:(SystemSoundID)soundId;

/*!
 @method
 @abstract 使用 asyncPlayAudio 方法播放音频时的回调
 @param aFilePath 正在播放的音频完整文件路径
 @param error 错误信息
 @discussion
 @result
 */
- (void)didPlayAudio:(NSString *)aFilePath error:(EMError *)error;

/*!
 @method
 @abstract 使用 asyncStopRecordingAudio 方法停止录音时的回调
 @param aFilePath 录制完成后的音频完整文件路径
 @param error 错误信息
 @discussion
 @result
 */
- (void)didRecordAudio:(NSString *)aFilePath duration:(NSInteger)duration error:(EMError *)error;


/*!
 @method
 @abstract 使用 asyncCancelRecordingAudio 方法取消录音时的回调
 @param aFilePath
 @param error 错误信息
 @discussion
 @result
 */
- (void)didCancelRecordAudio:(NSString *)aFilePath error:(EMError *)error;

@end
