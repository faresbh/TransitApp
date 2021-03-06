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
@import ObjectiveC;
@import CoreGraphics;
@import Foundation;
@import CoreLocation;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class UIWindow;
@class UIApplication;

SWIFT_CLASS("_TtC10TransitApp11AppDelegate")
@interface AppDelegate : UIResponder <UIApplicationDelegate>
@property (nonatomic, strong) UIWindow * _Nullable window;
- (BOOL)application:(UIApplication * _Nonnull)application didFinishLaunchingWithOptions:(NSDictionary<UIApplicationLaunchOptionsKey, id> * _Nullable)launchOptions;
- (void)applicationWillResignActive:(UIApplication * _Nonnull)application;
- (void)applicationDidEnterBackground:(UIApplication * _Nonnull)application;
- (void)applicationWillEnterForeground:(UIApplication * _Nonnull)application;
- (void)applicationDidBecomeActive:(UIApplication * _Nonnull)application;
- (void)applicationWillTerminate:(UIApplication * _Nonnull)application;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSDate;
@class Route;
@class ProviderAttribute;
@class NSError;

SWIFT_CLASS("_TtC10TransitApp10DataParser")
@interface DataParser : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) DataParser * _Nonnull sharedInstance;)
+ (DataParser * _Nonnull)sharedInstance;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
- (void)getRoutesWithOrigin:(NSString * _Nonnull)origin destination:(NSString * _Nonnull)destination atTime:(NSDate * _Nullable)time completionHandler:(void (^ _Nonnull)(NSArray<Route *> * _Nullable, NSArray<ProviderAttribute *> * _Nullable, NSError * _Nullable))completionHandler;
- (void)consultServerForOrigin:(NSString * _Nonnull)origin destination:(NSString * _Nonnull)destination time:(NSDate * _Nullable)time sucess:(void (^ _Nonnull)(NSDictionary<NSString *, id> * _Nonnull))sucess fail:(void (^ _Nonnull)(NSError * _Nullable))fail;
@end

@class UIDatePicker;
@class NSCoder;

SWIFT_CLASS("_TtC10TransitApp24DialogDateTimePickerView")
@interface DialogDateTimePickerView : UIView
@property (nonatomic, weak) IBOutlet UIDatePicker * _Null_unspecified dateTimePicker;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC10TransitApp17ProviderAttribute")
@interface ProviderAttribute : NSObject
- (nonnull instancetype)initWithName:(NSString * _Nonnull)name dataDictionary:(NSDictionary<NSString *, id> * _Nonnull)dataDictionary OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

@class UITableView;
@class UITableViewCell;
@class NSBundle;

SWIFT_CLASS("_TtC10TransitApp25ResultTableViewController")
@interface ResultTableViewController : UITableViewController
@property (nonatomic, copy) NSArray<Route *> * _Nullable routes;
@property (nonatomic, copy) NSArray<ProviderAttribute *> * _Nullable providers;
- (void)viewDidLoad;
- (NSInteger)numberOfSectionsInTableView:(UITableView * _Nonnull)tableView;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section;
- (UIView * _Nullable)tableView:(UITableView * _Nonnull)tableView viewForHeaderInSection:(NSInteger)section;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForHeaderInSection:(NSInteger)section;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (nonnull instancetype)initWithStyle:(UITableViewStyle)style OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface ResultTableViewController (SWIFT_EXTENSION(TransitApp))
- (CGRect)CGRectMake:(CGFloat)x :(CGFloat)y :(CGFloat)width :(CGFloat)height;
@end

@class Segment;
@class NSDictionary;

SWIFT_CLASS("_TtC10TransitApp5Route")
@interface Route : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull provider;
@property (nonatomic, copy) NSArray<Segment *> * _Nonnull segments;
@property (nonatomic, readonly, copy) NSDictionary<NSString *, id> * _Nullable properties;
@property (nonatomic, readonly, copy) NSString * _Nullable currency;
- (nonnull instancetype)initWithDataDictionary:(NSDictionary<NSString *, id> * _Nonnull)dataDictionary OBJC_DESIGNATED_INITIALIZER;
- (NSString * _Nullable)getPrice;
- (Segment * _Nullable)getMoveSegmentWithId:(NSInteger)id;
- (NSInteger)numberOfMoveSegments;
- (NSDictionary * _Nullable)getProperties;
- (NSTimeInterval)getTravelTime;
- (NSDate * _Nullable)getStartTime;
- (NSDate * _Nullable)getArrivelTime;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

@class UILabel;

SWIFT_CLASS("_TtC10TransitApp18RouteTableViewCell")
@interface RouteTableViewCell : UITableViewCell
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified priceRoute;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified providerRoute;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified typeRoute;
- (void)awakeFromNib;
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class CLLocationManager;
@class PopupContainer;
@class GMSMapView;
@class UITextField;
@class UIImageView;

SWIFT_CLASS("_TtC10TransitApp20SearchViewController")
@interface SearchViewController : UIViewController <CLLocationManagerDelegate, UITextFieldDelegate>
@property (nonatomic, readonly, strong) CLLocationManager * _Null_unspecified locationManager;
@property (nonatomic, weak) IBOutlet GMSMapView * _Null_unspecified mapView;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified destinationTextField;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified departTextField;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified dateTimeTravel;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified pinLocationImage;
@property (nonatomic, strong) PopupContainer * _Nullable popupDateTimePicker;
@property (nonatomic, strong) DialogDateTimePickerView * _Null_unspecified dateTimePickerView;
- (void)viewDidLoad;
- (void)getUserLocation;
- (void)openDatetimePickerDialog;
- (void)dateTimePickerChanged;
- (IBAction)navigateToResultsWithSender:(id _Nonnull)sender;
- (void)hideKeyboard;
- (void)drawIterinaireWithAddressDep:(NSString * _Nonnull)addressDep addressDes:(NSString * _Nonnull)addressDes;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC10TransitApp7Segment")
@interface Segment : NSObject
@property (nonatomic, readonly, copy) NSString * _Nullable name;
@property (nonatomic, readonly) NSInteger numStops;
@property (nonatomic, readonly, copy) NSString * _Nullable segmentDescription;
@property (nonatomic, readonly, copy) NSString * _Nonnull iconUrl;
@property (nonatomic, readonly, copy) NSString * _Nullable polyline;
- (nonnull instancetype)initWithDataDictionary:(NSDictionary<NSString *, id> * _Nonnull)dataDictionary OBJC_DESIGNATED_INITIALIZER;
- (BOOL)isInMoveSegment;
- (NSDate * _Nullable)getStartTime;
- (NSDate * _Nullable)getArrivalTime;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

@class UIWebView;

SWIFT_CLASS("_TtC10TransitApp21SegmentsTableViewCell")
@interface SegmentsTableViewCell : UITableViewCell
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified numStopsSegment;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified travelModeSegment;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified descriptionSegment;
@property (nonatomic, weak) IBOutlet UIWebView * _Null_unspecified imageWebViewSegment;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified nameSegment;
- (void)awakeFromNib;
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIColor;
@class UIStoryboardSegue;

SWIFT_CLASS("_TtC10TransitApp20SplashViewController")
@interface SplashViewController : UIViewController
@property (nonatomic, strong) UIColor * _Null_unspecified greenBarColor;
@property (nonatomic, strong) UIWindow * _Nullable window;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)navigateToPopularMovies;
- (void)prepareForSegue:(UIStoryboardSegue * _Nonnull)segue sender:(id _Nullable)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC10TransitApp4Stop")
@interface Stop : NSObject
@property (nonatomic, readonly, strong) NSDate * _Nullable datetime;
- (nonnull instancetype)initWithDataDictionary:(NSDictionary<NSString *, id> * _Nonnull)dataDictionary OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


@interface UIColor (SWIFT_EXTENSION(TransitApp))
- (nonnull instancetype)initWithHex:(uint32_t)hex alpha:(CGFloat)alpha;
@end

#pragma clang diagnostic pop
