// Generated by Apple Swift version 3.1 (swiftlang-802.0.53 clang-802.0.42)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
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

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if defined(__has_attribute) && __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if defined(__has_attribute) && __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
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
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
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
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
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
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import ObjectiveC;
@import UIKit;
@import CoreGraphics;
@import Foundation;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"

@interface NSObject (SWIFT_EXTENSION(TSCode))
- (void)nop;
@end


@interface UIColor (SWIFT_EXTENSION(TSCode))
- (UIColor * _Nonnull)turquoiseWithAlpha:(CGFloat)alpha SWIFT_WARN_UNUSED_RESULT;
- (UIColor * _Nonnull)greenSeaWithAlpha:(CGFloat)alpha SWIFT_WARN_UNUSED_RESULT;
- (UIColor * _Nonnull)emeraldWithAlpha:(CGFloat)alpha SWIFT_WARN_UNUSED_RESULT;
- (UIColor * _Nonnull)nephritisWithAlpha:(CGFloat)alpha SWIFT_WARN_UNUSED_RESULT;
- (UIColor * _Nonnull)peterRiverWithAlpha:(CGFloat)alpha SWIFT_WARN_UNUSED_RESULT;
@end


@interface UIView (SWIFT_EXTENSION(TSCode))
- (void)addSubviews:(NSArray<UIView *> * _Nonnull)views;
- (BOOL)doesIntersect:(UIView * _Nonnull)otherView SWIFT_WARN_UNUSED_RESULT;
@end


@interface UIView (SWIFT_EXTENSION(TSCode))
- (void)scaleWithDuration:(NSTimeInterval)duration startValue:(float)start endValue:(float)end repeatCount:(float)count shouldReverse:(BOOL)reverse andCompletion:(void (^ _Nonnull)(void))completion;
- (void)scaleUpWithDuration:(NSTimeInterval)duration startValue:(float)start endValue:(float)end repeatCount:(float)count shouldReverse:(BOOL)reverse andCompletion:(void (^ _Nonnull)(void))completion;
- (void)scaleDownWithDuration:(NSTimeInterval)duration startValue:(float)start endValue:(float)end repeatCount:(float)count shouldReverse:(BOOL)reverse andCompletion:(void (^ _Nonnull)(void))completion;
- (void)scaleUpWithDuration:(NSTimeInterval)duration startValue:(float)start endValue:(float)end repeatCount:(float)count shouldReverse:(BOOL)reverse;
- (void)scaleDownWithDuration:(NSTimeInterval)duration startValue:(float)start endValue:(float)end repeatCount:(float)count shouldReverse:(BOOL)reverse;
@end


@interface UIView (SWIFT_EXTENSION(TSCode))
/// Fades a UIView onto the screen.
/// \param duration The time to fade in seconds. Default is 1 second.
///
/// \param completion Completion block.
///
- (void)fadeInWithDuration:(NSTimeInterval)duration andCompletion:(void (^ _Nonnull)(void))completion;
/// Fades a UIView out of the screen.
/// \param duration The time to fade in seconds. Default is 1 second.
///
/// \param completion Completion block.
///
- (void)fadeOutWithDuration:(NSTimeInterval)duration andCompletion:(void (^ _Nonnull)(void))completion;
/// Fades a UIView onto the screen.
/// \param duration The time to fade in seconds. Default is 1 second.
///
- (void)fadeInWithDuration:(NSTimeInterval)duration;
/// Fades a UIView out of the screen.
/// \param duration The time to fade in seconds. Default is 1 second.
///
- (void)fadeOutWithDuration:(NSTimeInterval)duration;
/// Fades a UIView onto the screen, waits, and fades back out.
/// \param duration The time for the fades to complete seconds. Default is 1 second.
///
/// \param delay The time in seconds to wait between fades. Default is 3 seconds.
///
/// \param completion Completion block.
///
- (void)fadeInAndOutWithDuration:(NSTimeInterval)duration delay:(NSTimeInterval)delay andCompletion:(void (^ _Nonnull)(void))completion;
/// Fades a UIView onto the screen, waits, and fades back out.
/// \param duration The time for the fades to complete seconds. Default is 1 second.
///
/// \param delay The time in seconds to wait between fades. Default is 3 seconds.
///
- (void)fadeInAndOutWithDuration:(NSTimeInterval)duration delay:(NSTimeInterval)delay;
@end

@class NSLayoutConstraint;

@interface UIView (SWIFT_EXTENSION(TSCode))
- (void)flyInFromTopWithDuration:(NSTimeInterval)duration andCompletion:(void (^ _Nonnull)(void))completion;
- (void)flyInFromBottomWithDuration:(NSTimeInterval)duration andCompletion:(void (^ _Nonnull)(void))completion;
- (void)flyInFromRightWithDuration:(NSTimeInterval)duration andCompletion:(void (^ _Nonnull)(void))completion;
- (void)flyInFromLeftWithDuration:(NSTimeInterval)duration andCompletion:(void (^ _Nonnull)(void))completion;
- (void)flyInFromTopWithDuration:(NSTimeInterval)duration;
- (void)flyInFromBottomWithDuration:(NSTimeInterval)duration;
- (void)flyInFromRightWithDuration:(NSTimeInterval)duration;
- (void)flyInFromLeftWithDuration:(NSTimeInterval)duration;
- (void)flyOutToTopWithTopConstraint:(NSLayoutConstraint * _Nullable)topConstraint duration:(NSTimeInterval)duration andCompletion:(void (^ _Nonnull)(void))completion;
- (void)flyOutToBottomWithBottomConstraint:(NSLayoutConstraint * _Nullable)bottomConstraint duration:(NSTimeInterval)duration andCompletion:(void (^ _Nonnull)(void))completion;
- (void)flyOutToRightWithRightConstraint:(NSLayoutConstraint * _Nullable)rightConstraint duration:(NSTimeInterval)duration andCompletion:(void (^ _Nonnull)(void))completion;
- (void)flyOutToLeftWithLeftConstraint:(NSLayoutConstraint * _Nullable)leftConstraint duration:(NSTimeInterval)duration andCompletion:(void (^ _Nonnull)(void))completion;
- (void)flyOutToTopWithTopConstraint:(NSLayoutConstraint * _Nonnull)topConstraint duration:(NSTimeInterval)duration;
- (void)flyOutToBottomWithBottomConstraint:(NSLayoutConstraint * _Nonnull)bottomConstraint duration:(NSTimeInterval)duration;
- (void)flyOutToRightWithRightConstraint:(NSLayoutConstraint * _Nonnull)rightConstraint duration:(NSTimeInterval)duration;
- (void)flyOutToLeftWithLeftConstraint:(NSLayoutConstraint * _Nonnull)leftConstraint duration:(NSTimeInterval)duration;
@end

#pragma clang diagnostic pop
