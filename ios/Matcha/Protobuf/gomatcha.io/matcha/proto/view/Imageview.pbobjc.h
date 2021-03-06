// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gomatcha.io/matcha/proto/view/imageview.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers.h>
#else
 #import "GPBProtocolBuffers.h"
#endif

#if GOOGLE_PROTOBUF_OBJC_VERSION < 30002
#error This file was generated by a newer version of protoc which is incompatible with your Protocol Buffer library sources.
#endif
#if 30002 < GOOGLE_PROTOBUF_OBJC_MIN_SUPPORTED_VERSION
#error This file was generated by an older version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

@class MatchaPBColor;
@class MatchaPBImageOrResource;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - Enum MatchaViewPBImageResizeMode

typedef GPB_ENUM(MatchaViewPBImageResizeMode) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  MatchaViewPBImageResizeMode_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  MatchaViewPBImageResizeMode_Fit = 0,
  MatchaViewPBImageResizeMode_Fill = 1,
  MatchaViewPBImageResizeMode_Stretch = 2,
  MatchaViewPBImageResizeMode_Center = 3,
};

GPBEnumDescriptor *MatchaViewPBImageResizeMode_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL MatchaViewPBImageResizeMode_IsValidValue(int32_t value);

#pragma mark - MatchaViewPBImageviewRoot

/**
 * Exposes the extension registry for this file.
 *
 * The base class provides:
 * @code
 *   + (GPBExtensionRegistry *)extensionRegistry;
 * @endcode
 * which is a @c GPBExtensionRegistry that includes all the extensions defined by
 * this file and all files that it depends on.
 **/
@interface MatchaViewPBImageviewRoot : GPBRootObject
@end

#pragma mark - MatchaViewPBImageView

typedef GPB_ENUM(MatchaViewPBImageView_FieldNumber) {
  MatchaViewPBImageView_FieldNumber_Image = 1,
  MatchaViewPBImageView_FieldNumber_ResizeMode = 2,
  MatchaViewPBImageView_FieldNumber_Tint = 3,
  MatchaViewPBImageView_FieldNumber_Scale = 5,
};

@interface MatchaViewPBImageView : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) MatchaPBImageOrResource *image;
/** Test to see if @c image has been set. */
@property(nonatomic, readwrite) BOOL hasImage;

@property(nonatomic, readwrite) MatchaViewPBImageResizeMode resizeMode;

@property(nonatomic, readwrite, strong, null_resettable) MatchaPBColor *tint;
/** Test to see if @c tint has been set. */
@property(nonatomic, readwrite) BOOL hasTint;

@property(nonatomic, readwrite) double scale;

@end

/**
 * Fetches the raw value of a @c MatchaViewPBImageView's @c resizeMode property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t MatchaViewPBImageView_ResizeMode_RawValue(MatchaViewPBImageView *message);
/**
 * Sets the raw value of an @c MatchaViewPBImageView's @c resizeMode property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetMatchaViewPBImageView_ResizeMode_RawValue(MatchaViewPBImageView *message, int32_t value);

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
