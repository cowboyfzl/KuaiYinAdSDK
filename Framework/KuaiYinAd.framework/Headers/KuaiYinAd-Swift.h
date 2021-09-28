// Generated by Apple Swift version 5.5 (swiftlang-1300.0.31.1 clang-1300.0.29.1)
#ifndef KUAIYINAD_SWIFT_H
#define KUAIYINAD_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import AnyThinkRewardedVideo;
@import AnyThinkSDK;
@import AnyThinkSplash;
@import BUAdSDK;
@import Foundation;
@import LRAD;
@import ObjectiveC;
#endif

#import "/Users/fazhenglei/Desktop/KuaiYinAd/KuaiYinAd/KuaiYinAd-Bridging-Header.h"

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="KuaiYinAd",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


SWIFT_CLASS("_TtC9KuaiYinAd26HMAdATRewardedVideoAdapter")
@interface HMAdATRewardedVideoAdapter : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSString;

@interface HMAdATRewardedVideoAdapter (SWIFT_EXTENSION(KuaiYinAd)) <ATAdLoadingDelegate>
/// 加载完成回调
/// \param placementID 位置id
///
- (void)didFinishLoadingADWithPlacementID:(NSString * _Null_unspecified)placementID;
/// 加载失败回调
/// \param placementID 位置id
///
/// \param error 错误信息
///
- (void)didFailToLoadADWithPlacementID:(NSString * _Null_unspecified)placementID error:(NSError * _Null_unspecified)error;
@end

@class NSNumber;

@interface HMAdATRewardedVideoAdapter (SWIFT_EXTENSION(KuaiYinAd)) <ATRewardedVideoDelegate>
/// 激励视频开始播放回调
/// \param placementID 位置id
///
/// \param extra 扩展信息
///
- (void)rewardedVideoDidStartPlayingForPlacementID:(NSString * _Null_unspecified)placementID extra:(NSDictionary * _Null_unspecified)extra;
/// 激励视频播放完成回调
/// \param placementID 位置id
///
/// \param extra 扩展信息
///
- (void)rewardedVideoDidEndPlayingForPlacementID:(NSString * _Null_unspecified)placementID extra:(NSDictionary * _Null_unspecified)extra;
/// 激励视频播放失败回调
/// \param placementID 位置id
///
/// \param error 错误码
///
/// \param extra 扩展信息
///
- (void)rewardedVideoDidFailToPlayForPlacementID:(NSString * _Null_unspecified)placementID error:(NSError * _Null_unspecified)error extra:(NSDictionary * _Null_unspecified)extra;
/// 激励视频关闭回调
/// \param placementID 位置id
///
/// \param rewarded 是否激励
///
/// \param extra 扩展信息
///
- (void)rewardedVideoDidCloseForPlacementID:(NSString * _Null_unspecified)placementID rewarded:(BOOL)rewarded extra:(NSDictionary * _Null_unspecified)extra;
/// 激励视频点击回调
/// \param placementID 位置id
///
/// \param extra 扩展信息
///
- (void)rewardedVideoDidClickForPlacementID:(NSString * _Null_unspecified)placementID extra:(NSDictionary * _Null_unspecified)extra;
/// 激励视频广告奖励下发回调
/// \param placementID 位置id
///
/// \param extra 扩展字段
///
- (void)rewardedVideoDidRewardSuccessForPlacemenID:(NSString * _Null_unspecified)placementID extra:(NSDictionary * _Null_unspecified)extra;
/// 激励视频广告点击跳转是否为Deeplink形式，目前只针对TopOn Adx的广告返回
/// \param placementID 位置id
///
/// \param extra 扩展字段
///
/// \param success 是否成功
///
- (void)rewardedVideoDidDeepLinkOrJumpForPlacementID:(NSString * _Null_unspecified)placementID extra:(NSDictionary * _Null_unspecified)extra result:(BOOL)success;
@end


SWIFT_CLASS("_TtC9KuaiYinAd19HMAdATSplashAdapter")
@interface HMAdATSplashAdapter : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface HMAdATSplashAdapter (SWIFT_EXTENSION(KuaiYinAd)) <ATSplashDelegate>
- (void)didFinishLoadingADWithPlacementID:(NSString * _Null_unspecified)placementID;
- (void)didFailToLoadADWithPlacementID:(NSString * _Null_unspecified)placementID error:(NSError * _Null_unspecified)error;
- (void)splashDidShowFailedForPlacementID:(NSString * _Null_unspecified)placementID error:(NSError * _Null_unspecified)error extra:(NSDictionary * _Null_unspecified)extra;
- (void)splashDidShowForPlacementID:(NSString * _Null_unspecified)placementID extra:(NSDictionary * _Null_unspecified)extra;
- (void)splashDidClickForPlacementID:(NSString * _Null_unspecified)placementID extra:(NSDictionary * _Null_unspecified)extra;
- (void)splashDidCloseForPlacementID:(NSString * _Null_unspecified)placementID extra:(NSDictionary * _Null_unspecified)extra;
- (void)splashDetailDidClosedForPlacementID:(NSString * _Null_unspecified)placementID extra:(NSDictionary * _Null_unspecified)extra;
- (void)splashDeepLinkOrJumpForPlacementID:(NSString * _Null_unspecified)placementID extra:(NSDictionary * _Null_unspecified)extra result:(BOOL)success;
- (void)splashZoomOutViewDidClickForPlacementID:(NSString * _Null_unspecified)placementID extra:(NSDictionary * _Null_unspecified)extra;
- (void)splashZoomOutViewDidCloseForPlacementID:(NSString * _Null_unspecified)placementID extra:(NSDictionary * _Null_unspecified)extra;
- (void)splashCountdownTime:(NSInteger)countdown forPlacementID:(NSString * _Null_unspecified)placementId extra:(NSDictionary * _Null_unspecified)extra;
@end


SWIFT_CLASS("_TtC9KuaiYinAd22HMAdGDTRewardedAdapter")
@interface HMAdGDTRewardedAdapter : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class GDTRewardVideoAd;

@interface HMAdGDTRewardedAdapter (SWIFT_EXTENSION(KuaiYinAd)) <GDTRewardedVideoAdDelegate>
/// 广告数据加载成功回调
/// \param rewardedVideoAd 实例
///
- (void)gdt_rewardVideoAdDidLoad:(GDTRewardVideoAd * _Nonnull)rewardedVideoAd;
/// 视频数据下载成功回调，已经下载过的视频会直接回调
/// \param rewardedVideoAd 实例
///
- (void)gdt_rewardVideoAdVideoDidLoad:(GDTRewardVideoAd * _Nonnull)rewardedVideoAd;
/// 视频播放页即将展示回调
/// \param rewardedVideoAd 实例
///
- (void)gdt_rewardVideoAdWillVisible:(GDTRewardVideoAd * _Nonnull)rewardedVideoAd;
/// 视频广告曝光回调
/// \param rewardedVideoAd 实例
///
- (void)gdt_rewardVideoAdDidExposed:(GDTRewardVideoAd * _Nonnull)rewardedVideoAd;
/// 视频播放页关闭回调
/// \param rewardedVideoAd 实例
///
- (void)gdt_rewardVideoAdDidClose:(GDTRewardVideoAd * _Nonnull)rewardedVideoAd;
/// 视频广告信息点击回调
/// \param rewardedVideoAd 实例
///
- (void)gdt_rewardVideoAdDidClicked:(GDTRewardVideoAd * _Nonnull)rewardedVideoAd;
/// 视频广告各种错误信息回调
/// \param rewardedVideoAd 实例
///
/// \param error 错误信息
///
- (void)gdt_rewardVideoAd:(GDTRewardVideoAd * _Nonnull)rewardedVideoAd didFailWithError:(NSError * _Nonnull)error;
/// 视频广告视频播放完成
/// \param rewardedVideoAd 实例
///
- (void)gdt_rewardVideoAdDidPlayFinish:(GDTRewardVideoAd * _Nonnull)rewardedVideoAd;
/// 视频广告播放达到激励条件回调
/// \param rewardedVideoAd 实例
///
/// \param info 包含此次广告行为的一些信息，例如 @{@“GDT_TRANS_ID”:@“930f1fc8ac59983bbdf4548ee40ac353”}, 通过@“GDT_TRANS_ID”可获取此次广告行为的交易id
///
- (void)gdt_rewardVideoAdDidRewardEffective:(GDTRewardVideoAd * _Nonnull)rewardedVideoAd info:(NSDictionary * _Nonnull)info;
@end


SWIFT_CLASS("_TtC9KuaiYinAd20HMAdGDTSplashAdapter")
@interface HMAdGDTSplashAdapter : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class GDTSplashAd;

@interface HMAdGDTSplashAdapter (SWIFT_EXTENSION(KuaiYinAd)) <GDTSplashAdDelegate>
- (void)splashAdDidLoad:(GDTSplashAd * _Null_unspecified)splashAd;
- (void)splashAdSuccessPresentScreen:(GDTSplashAd * _Null_unspecified)splashAd;
- (void)splashAdFailToPresent:(GDTSplashAd * _Null_unspecified)splashAd withError:(NSError * _Null_unspecified)error;
- (void)splashAdClosed:(GDTSplashAd * _Null_unspecified)splashAd;
- (void)splashAdClicked:(GDTSplashAd * _Null_unspecified)splashAd;
- (void)splashAdApplicationWillEnterBackground:(GDTSplashAd * _Null_unspecified)splashAd;
- (void)splashAdExposured:(GDTSplashAd * _Null_unspecified)splashAd;
- (void)splashAdLifeTime:(NSUInteger)time;
- (void)splashAdWillPresentFullScreenModal:(GDTSplashAd * _Null_unspecified)splashAd;
- (void)splashAdDidPresentFullScreenModal:(GDTSplashAd * _Null_unspecified)splashAd;
- (void)splashAdDidDismissFullScreenModal:(GDTSplashAd * _Null_unspecified)splashAd;
- (void)splashAdWillDismissFullScreenModal:(GDTSplashAd * _Null_unspecified)splashAd;
@end


SWIFT_CLASS("_TtC9KuaiYinAd26HMAdLRRewardedVideoAdapter")
@interface HMAdLRRewardedVideoAdapter : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class LRAdModel;

@interface HMAdLRRewardedVideoAdapter (SWIFT_EXTENSION(KuaiYinAd)) <LRVideoAdProtocol>
/// 广告位ID没找到
/// \param adId 广告位ID
///
/// \param error 错误
///
- (void)lrAdIdNotFound:(NSString * _Nonnull)adId error:(NSError * _Nullable)error;
/// 广告位ID有误
/// \param error 错误
///
- (void)lrAdIdError:(NSError * _Nullable)error;
/// 此回调方法中可定位具体的失败原因对应的错误码，打印error即可。
/// \param rewardedVideoAd 广告数据
///
/// \param error 错误码
///
- (void)lrRewardedVideoAd:(LRAdModel * _Nonnull)rewardedVideoAd didFailWithError:(NSError * _Nullable)error;
/// 广告已出现
/// \param rewardedVideoAd 广告数据
///
- (void)lrRewardedVideoAdDidVisible:(LRAdModel * _Nonnull)rewardedVideoAd;
/// 广告已关闭
/// \param rewardedVideoAd 广告数据
///
- (void)lrRewardedVideoAdDidClose:(LRAdModel * _Nonnull)rewardedVideoAd;
/// 点击广告
/// \param rewardedVideoAd 广告数据
///
- (void)lrRewardedVideoAdDidClick:(LRAdModel * _Nonnull)rewardedVideoAd;
/// 点击跳过按钮
/// \param rewardedVideoAd 广告数据
///
- (void)lrRewardedVideoAdDidClickSkip:(LRAdModel * _Nonnull)rewardedVideoAd;
/// 视频播放完毕
/// \param rewardedVideoAd 广告数据
///
/// \param error 错误码
///
- (void)lrRewardedVideoAdDidPlayFinish:(LRAdModel * _Nonnull)rewardedVideoAd didFailWithError:(NSError * _Nullable)error;
/// 视频广告无效
- (void)lrRewardedVideoAdLoseEffectiveness;
/// 视频广告播放达到激励条件
/// \param hasReward 是否达到条件
///
- (void)lrRewardVideoAdDidRewardEffective:(BOOL)hasReward;
@end


SWIFT_CLASS("_TtC9KuaiYinAd19HMAdLRSplashAdapter")
@interface HMAdLRSplashAdapter : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface HMAdLRSplashAdapter (SWIFT_EXTENSION(KuaiYinAd)) <LRSplashAdProtocol>
- (void)lrAdIdNotFound:(NSString * _Nonnull)adId error:(NSError * _Nullable)error;
- (void)lrAdIdError:(NSError * _Nullable)error;
- (void)lrSplashAdSuccess:(LRAdModel * _Nonnull)splashAd;
- (void)lrSplashAd:(LRAdModel * _Nonnull)splashAd didFailWithError:(NSError * _Nullable)error;
- (void)lrSplashAdDidClick:(LRAdModel * _Nonnull)splashAd;
- (void)lrSplashAdDidClose:(LRAdModel * _Nonnull)splashAd;
- (void)lrSplashAdDidClickSkip:(LRAdModel * _Nonnull)splashAd;
- (void)lrSplashAdOtherControllerClose:(LRAdModel * _Nonnull)splashAd;
- (void)lrSplashAdCountdownToZero:(LRAdModel * _Nonnull)splashAd;
@end


SWIFT_CLASS("_TtC9KuaiYinAd19HMAdRewardedManager")
@interface HMAdRewardedManager : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



SWIFT_CLASS("_TtC9KuaiYinAd17HMAdRewardedModel")
@interface HMAdRewardedModel : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



SWIFT_CLASS("_TtC9KuaiYinAd21HMAdTTRewardedAdapter")
@interface HMAdTTRewardedAdapter : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class BURewardedVideoAd;

@interface HMAdTTRewardedAdapter (SWIFT_EXTENSION(KuaiYinAd)) <BURewardedVideoAdDelegate>
/// 广告资源加载成功
/// \param rewardedVideoAd 实例
///
- (void)rewardedVideoAdDidLoad:(BURewardedVideoAd * _Nonnull)rewardedVideoAd;
/// 加载失败
- (void)rewardedVideoAd:(BURewardedVideoAd * _Nonnull)rewardedVideoAd didFailWithError:(NSError * _Nullable)error;
/// 广告服务器验证失败
/// \param rewardedVideoAd 实例
///
/// \param error 错误内容
///
- (void)rewardedVideoAdServerRewardDidFail:(BURewardedVideoAd * _Nonnull)rewardedVideoAd error:(NSError * _Nonnull)error;
/// 广告缓存成功
/// \param rewardedVideoAd 实例
///
- (void)rewardedVideoAdVideoDidLoad:(BURewardedVideoAd * _Nonnull)rewardedVideoAd;
/// 广告将要显示的时候
/// \param rewardedVideoAd 实例
///
- (void)rewardedVideoAdWillVisible:(BURewardedVideoAd * _Nonnull)rewardedVideoAd;
/// 广告已经显示的时候
/// \param rewardedVideoAd 实例
///
- (void)rewardedVideoAdDidVisible:(BURewardedVideoAd * _Nonnull)rewardedVideoAd;
/// 广告将要关闭的时候
/// \param rewardedVideoAd 实例
///
- (void)rewardedVideoAdWillClose:(BURewardedVideoAd * _Nonnull)rewardedVideoAd;
/// 广告已经关闭的时候
/// \param rewardedVideoAd 实例
///
- (void)rewardedVideoAdDidClose:(BURewardedVideoAd * _Nonnull)rewardedVideoAd;
/// 广告点击跳过
/// \param rewardedVideoAd 实例
///
- (void)rewardedVideoAdDidClickSkip:(BURewardedVideoAd * _Nonnull)rewardedVideoAd;
/// 广告播放完成
/// \param rewardedVideoAd 实例
///
/// \param error 错误码
///
- (void)rewardedVideoAdDidPlayFinish:(BURewardedVideoAd * _Nonnull)rewardedVideoAd didFailWithError:(NSError * _Nullable)error;
/// 广告达到激励条件回调
/// \param rewardedVideoAd 实例
///
/// \param verify 返回值为2000时返回true
///
- (void)rewardedVideoAdServerRewardDidSucceed:(BURewardedVideoAd * _Nonnull)rewardedVideoAd verify:(BOOL)verify;
/// 此方法用于获取奖励视频广告的类型
- (void)rewardedVideoAdCallback:(BURewardedVideoAd * _Nonnull)rewardedVideoAd withType:(BURewardedVideoAdType)rewardedVideoAdType;
@end


SWIFT_CLASS("_TtC9KuaiYinAd19HMAdTTSplashAdapter")
@interface HMAdTTSplashAdapter : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class BUSplashAdView;

@interface HMAdTTSplashAdapter (SWIFT_EXTENSION(KuaiYinAd)) <BUSplashAdDelegate>
- (void)splashAdDidLoad:(BUSplashAdView * _Nonnull)splashAd;
- (void)splashAd:(BUSplashAdView * _Nonnull)splashAd didFailWithError:(NSError * _Nullable)error;
- (void)splashAdWillVisible:(BUSplashAdView * _Nonnull)splashAd;
- (void)splashAdWillClose:(BUSplashAdView * _Nonnull)splashAd;
- (void)splashAdDidClose:(BUSplashAdView * _Nonnull)splashAd;
- (void)splashAdDidClick:(BUSplashAdView * _Nonnull)splashAd;
- (void)splashAdDidClickSkip:(BUSplashAdView * _Nonnull)splashAd;
- (void)splashAdCountdownToZero:(BUSplashAdView * _Nonnull)splashAd;
- (void)splashAdDidCloseOtherController:(BUSplashAdView * _Nonnull)splashAd interactionType:(BUInteractionType)interactionType;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif
