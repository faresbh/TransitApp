// Generated by Apple Swift version 3.0 (swiftlang-800.0.46.2 clang-800.0.38)
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
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import CoreGraphics;
@import CoreFoundation;
@import QuartzCore;
@import Foundation;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class UIColor;
@class NSCoder;

SWIFT_CLASS("_TtC11MaterialKit19MKActivityIndicator")
@interface MKActivityIndicator : UIView
@property (nonatomic, strong) UIColor * _Nonnull color;
@property (nonatomic) CGFloat lineWidth;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic) CGRect bounds;
- (void)layoutSubviews;
- (void)startAnimating;
- (void)stopAnimating;
@end

@class UITouch;
@class UIEvent;

SWIFT_CLASS("_TtC11MaterialKit8MKButton")
@interface MKButton : UIButton
@property (nonatomic) BOOL maskEnabled;
@property (nonatomic) CGFloat cornerRadius;
@property (nonatomic) CGFloat elevation;
@property (nonatomic) CGSize shadowOffset;
@property (nonatomic) UIRectCorner roundingCorners;
@property (nonatomic) BOOL rippleEnabled;
@property (nonatomic) CFTimeInterval rippleDuration;
@property (nonatomic) CGFloat rippleScaleRatio;
@property (nonatomic, strong) UIColor * _Nonnull rippleLayerColor;
@property (nonatomic) BOOL backgroundAnimationEnabled;
@property (nonatomic) CGRect bounds;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)touchesBegan:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesEnded:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesCancelled:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesMoved:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
@end

@class MKLayer;

SWIFT_CLASS("_TtC11MaterialKit10MKCardView")
@interface MKCardView : UIControl
@property (nonatomic) CGFloat elevation;
@property (nonatomic) CGFloat cornerRadius;
@property (nonatomic) CGSize shadowOffset;
@property (nonatomic) UIRectCorner roundingCorners;
@property (nonatomic) BOOL maskEnabled;
@property (nonatomic) CGFloat rippleScaleRatio;
@property (nonatomic) CFTimeInterval rippleDuration;
@property (nonatomic) BOOL rippleEnabled;
@property (nonatomic, strong) UIColor * _Nonnull rippleLayerColor;
@property (nonatomic) BOOL backgroundAnimationEnabled;
@property (nonatomic) CGRect bounds;
@property (nonatomic, strong) MKLayer * _Nonnull mkLayer;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)touchesBegan:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesEnded:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesCancelled:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesMoved:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
@end


SWIFT_CLASS("_TtC11MaterialKit20MKCollectionViewCell")
@interface MKCollectionViewCell : UICollectionViewCell
@property (nonatomic) BOOL maskEnabled;
@property (nonatomic) CGFloat cornerRadius;
@property (nonatomic) CGFloat elevation;
@property (nonatomic) CGSize shadowOffset;
@property (nonatomic) UIRectCorner roundingCorners;
@property (nonatomic) BOOL rippleEnabled;
@property (nonatomic) CFTimeInterval rippleDuration;
@property (nonatomic) CGFloat rippleScaleRatio;
@property (nonatomic, strong) UIColor * _Nonnull rippleLayerColor;
@property (nonatomic) BOOL backgroundAnimationEnabled;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)touchesBegan:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesEnded:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesCancelled:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesMoved:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
@end

@class UIViewController;

SWIFT_CLASS("_TtC11MaterialKit28MKEmbedDrawerControllerSegue")
@interface MKEmbedDrawerControllerSegue : UIStoryboardSegue
- (void)perform;
- (nonnull instancetype)initWithIdentifier:(NSString * _Nullable)identifier source:(UIViewController * _Nonnull)source destination:(UIViewController * _Nonnull)destination OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC11MaterialKit26MKEmbedMainControllerSegue")
@interface MKEmbedMainControllerSegue : UIStoryboardSegue
- (void)perform;
- (nonnull instancetype)initWithIdentifier:(NSString * _Nullable)identifier source:(UIViewController * _Nonnull)source destination:(UIViewController * _Nonnull)destination OBJC_DESIGNATED_INITIALIZER;
@end

@class UIImage;

SWIFT_CLASS("_TtC11MaterialKit11MKImageView")
@interface MKImageView : UIImageView
@property (nonatomic) BOOL maskEnabled;
@property (nonatomic) CGFloat cornerRadius;
@property (nonatomic) CGFloat elevation;
@property (nonatomic) CGSize shadowOffset;
@property (nonatomic) UIRectCorner roundingCorners;
@property (nonatomic) BOOL rippleEnabled;
@property (nonatomic) CFTimeInterval rippleDuration;
@property (nonatomic) CGFloat rippleScaleRatio;
@property (nonatomic, strong) UIColor * _Nonnull rippleLayerColor;
@property (nonatomic) BOOL backgroundAnimationEnabled;
@property (nonatomic) CGRect bounds;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithImage:(UIImage * _Nullable)image OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithImage:(UIImage * _Nullable)image highlightedImage:(UIImage * _Nullable)highlightedImage OBJC_DESIGNATED_INITIALIZER;
- (void)touchesBegan:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesEnded:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesCancelled:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesMoved:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
@end


SWIFT_CLASS("_TtC11MaterialKit7MKLabel")
@interface MKLabel : UILabel
@property (nonatomic) BOOL maskEnabled;
@property (nonatomic) CGFloat cornerRadius;
@property (nonatomic) CGFloat elevation;
@property (nonatomic) CGSize shadowOffset;
@property (nonatomic) UIRectCorner roundingCorners;
@property (nonatomic) BOOL rippleEnabled;
@property (nonatomic) CFTimeInterval rippleDuration;
@property (nonatomic) CGFloat rippleScaleRatio;
@property (nonatomic, strong) UIColor * _Nonnull rippleLayerColor;
@property (nonatomic) BOOL backgroundAnimationEnabled;
@property (nonatomic) CGRect bounds;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (void)touchesBegan:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesEnded:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesCancelled:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesMoved:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
@end

@class CAAnimation;

SWIFT_CLASS("_TtC11MaterialKit7MKLayer")
@interface MKLayer : CALayer <CAAnimationDelegate>
@property (nonatomic) BOOL maskEnabled;
@property (nonatomic) BOOL rippleEnabled;
@property (nonatomic) CGFloat rippleScaleRatio;
@property (nonatomic) CFTimeInterval rippleDuration;
@property (nonatomic) CGFloat elevation;
@property (nonatomic) CGSize elevationOffset;
@property (nonatomic) UIRectCorner roundingCorners;
@property (nonatomic) BOOL backgroundAnimationEnabled;
- (nonnull instancetype)initWithLayer:(id _Nonnull)layer SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithSuperLayer:(CALayer * _Nonnull)superLayer OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithView:(UIView * _Nonnull)view OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)observeValueForKeyPath:(NSString * _Nullable)keyPath ofObject:(id _Nullable)object change:(NSDictionary<NSKeyValueChangeKey, id> * _Nullable)change context:(void * _Nullable)context;
- (void)superLayerDidResize;
- (void)animationDidStop:(CAAnimation * _Nonnull)anim finished:(BOOL)flag;
- (void)startEffectsAtLocation:(CGPoint)touchLocation;
- (void)stopEffects;
- (void)stopEffectsImmediately;
- (void)setRippleColor:(UIColor * _Nonnull)color withRippleAlpha:(CGFloat)rippleAlpha withBackgroundAlpha:(CGFloat)backgroundAlpha;
- (void)touchesBegan:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesEnded:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesCancelled:(NSSet<UITouch *> * _Nullable)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesMoved:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC11MaterialKit15MKNavigationBar")
@interface MKNavigationBar : UINavigationBar
@property (nonatomic) CGFloat elevation;
@property (nonatomic) float shadowOpacity;
@property (nonatomic, strong) UIColor * _Nonnull color;
@property (nonatomic, strong) UIColor * _Nonnull darkColor;
@property (nonatomic, strong) UIColor * _Null_unspecified tintColor;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)layoutSubviews;
@end

@class UIScrollView;

SWIFT_CLASS("_TtC11MaterialKit16MKRefreshControl")
@interface MKRefreshControl : UIControl
@property (nonatomic, readonly) BOOL refreshing;
@property (nonatomic) CGFloat height;
@property (nonatomic, strong) UIColor * _Nonnull color;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)addToScrollView:(UIScrollView * _Nonnull)scrollView withRefreshBlock:(void (^ _Nonnull)(void))block;
- (void)beginRefreshing;
- (void)endRefreshing;
- (void)observeValueForKeyPath:(NSString * _Nullable)keyPath ofObject:(id _Nullable)object change:(NSDictionary<NSKeyValueChangeKey, id> * _Nullable)change context:(void * _Nullable)context;
- (void)handlePanGestureRecognizer;
@end

@class MKSideDrawerViewController;
enum DrawerState : NSInteger;

SWIFT_PROTOCOL("_TtP11MaterialKit30MKSideDrawerControllerDelegate_")
@protocol MKSideDrawerControllerDelegate
@optional
- (void)drawerController:(MKSideDrawerViewController * _Nonnull)drawerController stateChanged:(enum DrawerState)state;
@end

enum DrawerDirection : NSInteger;
@class UIGestureRecognizer;
@class NSBundle;

SWIFT_CLASS("_TtC11MaterialKit26MKSideDrawerViewController")
@interface MKSideDrawerViewController : UIViewController <UIGestureRecognizerDelegate>
@property (nonatomic) BOOL screenEdgePanGestreEnabled;
@property (nonatomic, weak) id <MKSideDrawerControllerDelegate> _Nullable delegate;
@property (nonatomic) enum DrawerDirection drawerDirection;
@property (nonatomic) enum DrawerState drawerState;
@property (nonatomic) CGFloat drawerWidth;
@property (nonatomic, strong) UIViewController * _Null_unspecified mainViewController;
@property (nonatomic, strong) UIViewController * _Nullable drawerViewController;
- (nonnull instancetype)initWithDrawerDirection:(enum DrawerDirection)drawerDirection drawerWidth:(CGFloat)drawerWidth;
- (void)viewDidLoad;
- (void)setDrawerState:(enum DrawerState)state animated:(BOOL)animated;
- (void)transitionFromMainViewController:(UIViewController * _Nonnull)toViewController duration:(NSTimeInterval)duration options:(UIViewAnimationOptions)options animations:(void (^ _Nullable)(void))animations completion:(void (^ _Nullable)(BOOL))completion;
- (void)toggleDrawer:(BOOL)animated;
- (BOOL)gestureRecognizer:(UIGestureRecognizer * _Nonnull)gestureRecognizer shouldReceiveTouch:(UITouch * _Nonnull)touch;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM(NSInteger, DrawerDirection) {
  DrawerDirectionLeft = 0,
  DrawerDirectionRight = 1,
};

typedef SWIFT_ENUM(NSInteger, DrawerState) {
  DrawerStateOpened = 0,
  DrawerStateClosed = 1,
};

@protocol MKSnackbarDelegate;

SWIFT_CLASS("_TtC11MaterialKit10MKSnackbar")
@interface MKSnackbar : UIControl
@property (nonatomic, copy) NSString * _Nullable text;
@property (nonatomic, copy) NSString * _Nullable actionTitle;
@property (nonatomic, strong) UIColor * _Nullable textColor;
@property (nonatomic, strong) UIColor * _Nullable actionTitleColor;
@property (nonatomic, strong) UIColor * _Nullable actionRippleColor;
@property (nonatomic) NSTimeInterval duration;
@property (nonatomic, readonly) BOOL isShowing;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)show;
- (void)dismiss;
- (void)addDeleagte:(id <MKSnackbarDelegate> _Nonnull)delegate;
- (void)removeDelegate:(id <MKSnackbarDelegate> _Nonnull)delegate;
- (void)actionButtonSelectorWithTarget:(id _Nonnull)target andAction:(SEL _Nonnull)action;
@end


SWIFT_PROTOCOL("_TtP11MaterialKit18MKSnackbarDelegate_")
@protocol MKSnackbarDelegate <NSObject>
@optional
- (void)snackbarShown:(MKSnackbar * _Nonnull)snackbar;
- (void)snackbabrDismissed:(MKSnackbar * _Nonnull)snackbar;
- (void)actionClicked:(MKSnackbar * _Nonnull)snackbar;
@end


SWIFT_CLASS("_TtC11MaterialKit8MKSwitch")
@interface MKSwitch : UIControl
@property (nonatomic, setter=setEnabled:) BOOL isEnabled;
@property (nonatomic, strong) UIColor * _Nonnull thumbOnColor;
@property (nonatomic, strong) UIColor * _Nonnull thumbOffColor;
@property (nonatomic, strong) UIColor * _Nonnull thumbDisabledColor;
@property (nonatomic, strong) UIColor * _Nonnull trackOnColor;
@property (nonatomic, strong) UIColor * _Nonnull trackOffColor;
@property (nonatomic, strong) UIColor * _Nonnull trackDisabledColor;
@property (nonatomic) BOOL on;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)layoutSubviews;
- (void)touchesBegan:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesEnded:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesCancelled:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesMoved:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
@end


SWIFT_CLASS("_TtC11MaterialKit13MKSwitchLayer")
@interface MKSwitchLayer : CALayer
@property (nonatomic) BOOL enabled;
@property (nonatomic, strong) MKSwitch * _Nullable parent;
@property (nonatomic) CFTimeInterval rippleAnimationDuration;
- (nonnull instancetype)initWithParent:(MKSwitch * _Nonnull)parent OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)onTouchDown:(CGPoint)touchLocation;
- (void)onTouchMoved:(CGPoint)moveLocation;
- (void)onTouchUp:(CGPoint)touchLocation;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithLayer:(id _Nonnull)layer SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC11MaterialKit15MKTableViewCell")
@interface MKTableViewCell : UITableViewCell
@property (nonatomic) BOOL maskEnabled;
@property (nonatomic) CGFloat cornerRadius;
@property (nonatomic) CGFloat elevation;
@property (nonatomic) CGSize shadowOffset;
@property (nonatomic) UIRectCorner roundingCorners;
@property (nonatomic) BOOL rippleEnabled;
@property (nonatomic) CFTimeInterval rippleDuration;
@property (nonatomic) CGFloat rippleScaleRatio;
@property (nonatomic, strong) UIColor * _Nonnull rippleLayerColor;
@property (nonatomic) BOOL backgroundAnimationEnabled;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)touchesBegan:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesEnded:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesCancelled:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesMoved:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier SWIFT_UNAVAILABLE;
@end

@class UIFont;
@class NSAttributedString;

SWIFT_CLASS("_TtC11MaterialKit11MKTextField")
@interface MKTextField : UITextField
@property (nonatomic) CGSize padding;
@property (nonatomic) CGFloat floatingLabelBottomMargin;
@property (nonatomic) BOOL floatingPlaceholderEnabled;
@property (nonatomic) BOOL maskEnabled;
@property (nonatomic) CGFloat cornerRadius;
@property (nonatomic) CGFloat elevation;
@property (nonatomic) CGSize shadowOffset;
@property (nonatomic) UIRectCorner roundingCorners;
@property (nonatomic) BOOL rippleEnabled;
@property (nonatomic) CFTimeInterval rippleDuration;
@property (nonatomic) CGFloat rippleScaleRatio;
@property (nonatomic, strong) UIColor * _Nonnull rippleLayerColor;
@property (nonatomic) BOOL backgroundAnimationEnabled;
@property (nonatomic) CGRect bounds;
@property (nonatomic, strong) UIFont * _Nonnull floatingLabelFont;
@property (nonatomic, strong) UIColor * _Nonnull floatingLabelTextColor;
@property (nonatomic) BOOL bottomBorderEnabled;
@property (nonatomic) CGFloat bottomBorderWidth;
@property (nonatomic, strong) UIColor * _Nonnull bottomBorderColor;
@property (nonatomic) CGFloat bottomBorderHighlightWidth;
@property (nonatomic, strong) NSAttributedString * _Nullable attributedPlaceholder;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)layoutSubviews;
- (CGRect)textRectForBounds:(CGRect)bounds;
- (CGRect)editingRectForBounds:(CGRect)bounds;
- (void)touchesBegan:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesEnded:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesCancelled:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesMoved:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
@end


@interface MKTextField (SWIFT_EXTENSION(MaterialKit))
@end


@interface UIColor (SWIFT_EXTENSION(MaterialKit))
- (nonnull instancetype)initWithHex:(NSInteger)hex alpha:(CGFloat)alpha;
@end


@interface UIViewController (SWIFT_EXTENSION(MaterialKit))
/**
  A convenience property that provides access to the SideNavigationViewController.
  This is the recommended method of accessing the SideNavigationViewController
  through child UIViewControllers.
*/
@property (nonatomic, readonly, strong) MKSideDrawerViewController * _Nullable sideDrawerViewController;
@end

#pragma clang diagnostic pop
